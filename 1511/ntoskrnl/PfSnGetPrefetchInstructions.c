/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1404D439C
 * Callers:
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     SmDecompressBuffer @ 0x1400F9D94 (SmDecompressBuffer.c)
 *     PfLockSharedAcquire @ 0x1400FAF50 (PfLockSharedAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     NtOpenFile @ 0x140439544 (NtOpenFile.c)
 *     PfVerifyScenarioBuffer @ 0x1404D2320 (PfVerifyScenarioBuffer.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, unsigned int **a3)
{
  UCHAR *v4; // r14
  __int64 v7; // rax
  SIZE_T v8; // rbx
  wchar_t *PoolWithTag; // r15
  int v10; // ebx
  HANDLE v11; // rsi
  ULONG Length; // edi
  UCHAR *v13; // rax
  unsigned int *v14; // rdi
  unsigned int *v16; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-79h] BYREF
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  int v20; // [rsp+70h] [rbp-69h] BYREF
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
  PfLockSharedAcquire((volatile signed __int64 *)qword_140305738);
  v7 = -1LL;
  do
    ++v7;
  while ( word_1403055D0[v7] );
  v8 = (unsigned int)(2 * v7 + 102);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)257, v8, 0x46506343u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140305738, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140305738);
    KeAbPostRelease((ULONG_PTR)qword_140305738);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(
    PoolWithTag,
    (unsigned int)v8,
    L"%s\\%ws-%08X.%ws",
    word_1403055D0,
    a1,
    *(_DWORD *)(a1 + 60),
    L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140305738, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140305738);
  KeAbPostRelease((ULONG_PTR)qword_140305738);
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
  if ( (unsigned __int8)PfVerifyScenarioBuffer(v16, v18, &v20) )
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
