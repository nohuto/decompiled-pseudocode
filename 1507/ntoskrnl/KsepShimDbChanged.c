/*
 * XREFs of KsepShimDbChanged @ 0x1401537EC
 * Callers:
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14069BBC4 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x14020C31C (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020C584 (KsepLogError.c)
 */

__int64 __fastcall KsepShimDbChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  unsigned int v9; // edi
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v15; // rdx
  char v16; // al
  const char *v17; // rdx
  __int64 v18; // rdx
  char v19; // al
  HANDLE FileHandle; // [rsp+38h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+Fh] BYREF
  char FileInformation[16]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v5, (ULONG_PTR)&KsepShimDbLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  FileHandle = 0LL;
  v9 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v10 < 0 )
  {
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v15 + 1] = v10;
    v16 = KsepDebugFlag;
    KsepHistoryErrors[2 * v15] = 590541;
    if ( (v16 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v17 = "KSE: ZwOpenFile failed opening DB file!\n";
    goto LABEL_23;
  }
  v11 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v11 < 0 )
  {
    v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v18 + 1] = v11;
    v19 = KsepDebugFlag;
    KsepHistoryErrors[2 * v18] = 590554;
    if ( (v19 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v17 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
LABEL_23:
    KsepLogError(0LL, v17);
    goto LABEL_10;
  }
  if ( KsepSdbFileTime )
  {
    if ( v25 != KsepSdbFileTime )
    {
      KsepSdbFileTime = v25;
      v9 = 1;
    }
  }
  else
  {
    KsepSdbFileTime = v25;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return v9;
}
