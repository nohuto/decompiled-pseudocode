/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1403E6878
 * Callers:
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 * Callees:
 *     SmDecompressBuffer @ 0x1400059A8 (SmDecompressBuffer.c)
 *     PfLockSharedAcquire @ 0x140006614 (PfLockSharedAcquire.c)
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfVerifyScenarioBuffer @ 0x1403EC7A0 (PfVerifyScenarioBuffer.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     NtOpenFile @ 0x14045A760 (NtOpenFile.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  UCHAR *v4; // r14
  __int64 v7; // rax
  SIZE_T v8; // rbx
  wchar_t *PoolWithTag; // r15
  int v10; // ebx
  HANDLE v11; // rsi
  ULONG Length; // edi
  UCHAR *v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v16; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-79h] BYREF
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  __int64 v22[2]; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-1h] BYREF
  ULONG NumberOfBytes; // [rsp+E0h] [rbp+7h]
  int NumberOfBytes_4; // [rsp+E4h] [rbp+Bh]

  v16 = 0LL;
  v4 = 0LL;
  FileHandle = 0LL;
  PfLockSharedAcquire((volatile signed __int64 *)qword_140328578);
  v7 = -1LL;
  do
    ++v7;
  while ( word_140328410[v7] );
  v8 = (unsigned int)(2 * v7 + 102);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x46506343u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140328578, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140328578);
    KeAbPostRelease((ULONG_PTR)qword_140328578);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(
    PoolWithTag,
    (unsigned int)v8,
    L"%s\\%ws-%08X.%ws",
    word_140328410,
    a1,
    *(_DWORD *)(a1 + 60),
    L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140328578, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140328578);
  KeAbPostRelease((ULONG_PTR)qword_140328578);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v10 < 0 )
  {
LABEL_25:
    v11 = FileHandle;
    goto LABEL_26;
  }
  v11 = FileHandle;
  v10 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v10 < 0 )
  {
LABEL_26:
    v14 = v16;
    goto LABEL_16;
  }
  Length = NumberOfBytes;
  LODWORD(v19) = 0x10000000;
  if ( NumberOfBytes - 1 > 0xFFFFFFF || NumberOfBytes_4 )
  {
    v10 = -1073741823;
    goto LABEL_26;
  }
  v13 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x70506343u);
  v4 = v13;
  if ( !v13 )
  {
    v10 = -1073741670;
    goto LABEL_26;
  }
  v10 = NtReadFile(v11, 0LL, 0LL, 0LL, &IoStatusBlock, v13, Length, 0LL, 0LL);
  if ( v10 < 0 )
    goto LABEL_26;
  v22[0] = (__int64)PfSnScenarioAlloc;
  v22[1] = (__int64)PspQueueApcSpecialApc;
  v10 = SmDecompressBuffer(v4, Length, &v16, &v18, &v19, (__int64 (__fastcall **)(_QWORD))v22);
  if ( v10 < 0 )
    goto LABEL_26;
  v14 = v16;
  if ( (unsigned __int8)PfVerifyScenarioBuffer(v16, v18, v20) )
  {
    if ( v14[20] == a2 )
    {
      *a3 = v14;
      v14 = 0LL;
      v10 = 0;
    }
    else
    {
      v10 = -1073741823;
    }
  }
  else
  {
    v10 = -1073741701;
  }
LABEL_16:
  if ( v11 )
    NtClose(v11);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v10;
}
