/*
 * XREFs of SmKmKeyGenNewKey @ 0x14065A96C
 * Callers:
 *     SmKmKeyGenGenerate @ 0x14065A5D4 (SmKmKeyGenGenerate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmCrGenRandom @ 0x14020A9A4 (SmCrGenRandom.c)
 *     SmKmKeyGenKeyFind @ 0x14065A7D0 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x14065A80C (SmKmKeyGenLoadKey.c)
 */

__int64 __fastcall SmKmKeyGenNewKey(ULONG_PTR BugCheckParameter2, _WORD *Src, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  PVOID v7; // rax
  __int64 v8; // rdi
  int v9; // r14d
  void *v10; // rcx
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  HANDLE v16; // r9
  wchar_t *v17; // r8
  wchar_t *v18; // rcx
  __int64 v19; // rdx
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v3 = a3;
  KeyHandle = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Src[v4] );
  v7 = SmAlloc(a3 + 42 + 2 * (_DWORD)v4, 0x474B6D73u);
  v8 = (__int64)v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7, 0, (unsigned int)(v3 + 42 + 2 * v4));
  *(_QWORD *)(v8 + 24) = v8 + 40;
  v10 = (void *)(v3 + v8 + 40);
  *(_DWORD *)(v8 + 32) = v3;
  *(_QWORD *)(v8 + 16) = v10;
  memmove(v10, Src, 2LL * (unsigned int)v4);
  if ( !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_8;
  v11 = SmKmKeyGenLoadKey((UNICODE_STRING *)(BugCheckParameter2 + 24), v8, &KeyHandle);
  v9 = v11;
  if ( v11 >= 0 )
  {
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v13, BugCheckParameter2);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v15 = *(_QWORD *)(BugCheckParameter2 + 8);
      *(_QWORD *)v8 = v15;
      *(_QWORD *)(v8 + 8) = BugCheckParameter2 + 8;
      if ( *(_QWORD *)(v15 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v16 = KeyHandle;
      *(_QWORD *)(v15 + 8) = v8;
      *(_QWORD *)(BugCheckParameter2 + 8) = v8;
      if ( v16 )
      {
        v17 = *(wchar_t **)(v8 + 16);
        *(_DWORD *)&ValueName.Length = 0;
        ValueName.Buffer = 0LL;
        if ( v17 )
        {
          v18 = v17;
          v19 = 0x7FFFLL;
          do
          {
            if ( !*v18 )
              break;
            ++v18;
            --v19;
          }
          while ( v19 );
          if ( v19 )
          {
            ValueName.Buffer = v17;
            ValueName.Length = 2 * (0x7FFF - v19);
            ValueName.MaximumLength = ValueName.Length + 2;
          }
        }
        ZwDeleteValueKey(v16, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v9 = 0;
    goto LABEL_28;
  }
  if ( v11 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(_QWORD *)(v8 + 24), v3);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_28:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    MiDeleteSubsection((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
