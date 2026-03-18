/*
 * XREFs of KsepShimDbChanged @ 0x14011BA00
 * Callers:
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14061D040 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401CD220 (KsepLogError.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  unsigned int v4; // edi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  __int64 v8; // rdx
  char v9; // al
  const char *v10; // rdx
  __int64 v11; // rdx
  char v12; // al
  HANDLE FileHandle; // [rsp+38h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+Fh] BYREF
  char FileInformation[16]; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+A0h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (ULONG_PTR)&KsepShimDbLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
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
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = v5;
    v9 = KsepDebugFlag;
    KsepHistoryErrors[2 * v8] = 590541;
    if ( (v9 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v10 = "KSE: ZwOpenFile failed opening DB file!\n";
    goto LABEL_20;
  }
  v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v6 < 0 )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v11 + 1] = v6;
    v12 = KsepDebugFlag;
    KsepHistoryErrors[2 * v11] = 590554;
    if ( (v12 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v10 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
LABEL_20:
    KsepLogError(0LL, v10);
    goto LABEL_10;
  }
  if ( KsepSdbFileTime )
  {
    if ( v18 != KsepSdbFileTime )
    {
      KsepSdbFileTime = v18;
      v4 = 1;
    }
  }
  else
  {
    KsepSdbFileTime = v18;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( FileHandle )
    ZwClose(FileHandle);
  return v4;
}
