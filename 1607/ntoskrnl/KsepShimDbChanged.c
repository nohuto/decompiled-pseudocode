/*
 * XREFs of KsepShimDbChanged @ 0x140126CB0
 * Callers:
 *     KseQueryDeviceData @ 0x140534C50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140652334 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140159EA0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x1401DCC3C (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCEA4 (KsepLogError.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  unsigned int v4; // edi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  char v12; // al
  const char *v13; // rdx
  __int64 v14; // rdx
  char v15; // al
  HANDLE FileHandle; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  char FileInformation[16]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (ULONG_PTR)&KsepShimDbLock);
  if ( v3 )
    v3[26] |= 1u;
  FileHandle = 0LL;
  v4 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v5 < 0 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = v5;
    v12 = KsepDebugFlag;
    KsepHistoryErrors[2 * v11] = 590541;
    if ( (v12 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v13 = "KSE: ZwOpenFile failed opening DB file!\n";
    goto LABEL_20;
  }
  v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v6 < 0 )
  {
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v14 + 1] = v6;
    v15 = KsepDebugFlag;
    KsepHistoryErrors[2 * v14] = 590554;
    if ( (v15 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v13 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
LABEL_20:
    KsepLogError(0LL, v13);
    goto LABEL_10;
  }
  if ( KsepSdbFileTime )
  {
    if ( v21 != KsepSdbFileTime )
    {
      KsepSdbFileTime = v21;
      v4 = 1;
    }
  }
  else
  {
    KsepSdbFileTime = v21;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( FileHandle )
    ZwClose(FileHandle);
  return v4;
}
