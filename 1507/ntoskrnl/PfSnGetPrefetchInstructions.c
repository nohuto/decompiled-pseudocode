/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1404F61EC
 * Callers:
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     SmDecompressBuffer @ 0x1400D7CB4 (SmDecompressBuffer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     PfVerifyScenarioBuffer @ 0x1404F6520 (PfVerifyScenarioBuffer.c)
 *     NtOpenFile @ 0x14050A1E4 (NtOpenFile.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdi
  UCHAR *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r9
  wchar_t *PoolWithTag; // rax
  WCHAR *v13; // r15
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  int v16; // ebx
  HANDLE v17; // rsi
  ULONG Length; // edi
  UCHAR *v19; // rax
  _DWORD *v20; // rdi
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  _DWORD *v24; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-79h] BYREF
  __int64 v27; // [rsp+64h] [rbp-75h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-69h] BYREF
  __int64 v29[2]; // [rsp+78h] [rbp-61h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-1h] BYREF
  ULONG NumberOfBytes; // [rsp+E0h] [rbp+7h]
  int NumberOfBytes_4; // [rsp+E4h] [rbp+Bh]

  CurrentThread = KeGetCurrentThread();
  v5 = -1LL;
  v24 = 0LL;
  FileHandle = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = KeAbPreAcquire((ULONG_PTR)qword_1403534A8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(qword_1403534A8, v10, (ULONG_PTR)qword_1403534A8, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  do
    ++v5;
  while ( word_140353340[v5] );
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)257, (unsigned int)(2 * v5 + 102), 0x46506343u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(
      PoolWithTag,
      (unsigned int)(2 * v5 + 102),
      L"%s\\%ws-%08X.%ws",
      word_140353340,
      a1,
      *(_DWORD *)(a1 + 60),
      L"pf");
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_1403534A8);
    KeAbPostRelease((ULONG_PTR)qword_1403534A8);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
      && !v14->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    RtlInitUnicodeString(&DestinationString, v13);
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
    if ( v16 >= 0 )
    {
      v17 = FileHandle;
      v16 = NtQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v16 >= 0 )
      {
        Length = NumberOfBytes;
        LODWORD(v27) = 0x10000000;
        if ( NumberOfBytes - 1 > 0xFFFFFFF || NumberOfBytes_4 )
        {
          v16 = -1073741823;
        }
        else
        {
          v19 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x70506343u);
          v9 = v19;
          if ( v19 )
          {
            v16 = NtReadFile(v17, 0LL, 0LL, 0LL, &IoStatusBlock, v19, Length, 0LL, 0LL);
            if ( v16 >= 0 )
            {
              v29[0] = (__int64)PfSnScenarioAlloc;
              v29[1] = (__int64)PspQueueApcSpecialApc;
              v16 = SmDecompressBuffer(v9, Length, &v24, &v26, &v27, (__int64 (__fastcall **)(_QWORD))v29);
              if ( v16 >= 0 )
              {
                v20 = v24;
                if ( (unsigned __int8)PfVerifyScenarioBuffer(v24, v26, v28) )
                {
                  if ( v20[20] == a2 )
                  {
                    *a3 = v20;
                    v20 = 0LL;
                    v16 = 0;
                  }
                  else
                  {
                    v16 = -1073741823;
                  }
                }
                else
                {
                  v16 = -1073741701;
                }
                goto LABEL_21;
              }
            }
          }
          else
          {
            v16 = -1073741670;
          }
        }
      }
LABEL_31:
      v20 = v24;
LABEL_21:
      if ( v17 )
        NtClose(v17);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      return (unsigned int)v16;
    }
LABEL_30:
    v17 = FileHandle;
    goto LABEL_31;
  }
  v16 = -1073741670;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_1403534A8);
  KeAbPostRelease((ULONG_PTR)qword_1403534A8);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
    goto LABEL_30;
  }
  return (unsigned int)v16;
}
