/*
 * XREFs of SmKmKeyGenNewKey @ 0x1406DD190
 * Callers:
 *     SmKmKeyGenGenerate @ 0x1406DCD18 (SmKmKeyGenGenerate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmCrGenRandom @ 0x140259EF4 (SmCrGenRandom.c)
 *     SmKmKeyGenKeyFind @ 0x1406DCFF4 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenLoadKey @ 0x1406DD030 (SmKmKeyGenLoadKey.c)
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
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rcx
  HANDLE v18; // r9
  wchar_t *v19; // r8
  wchar_t *v20; // rcx
  __int64 v21; // rdx
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
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
    v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, v12);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v14, BugCheckParameter2, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    if ( !SmKmKeyGenKeyFind(BugCheckParameter2, Src) )
    {
      v17 = *(_QWORD *)(BugCheckParameter2 + 8);
      *(_QWORD *)v8 = v17;
      *(_QWORD *)(v8 + 8) = BugCheckParameter2 + 8;
      if ( *(_QWORD *)(v17 + 8) != BugCheckParameter2 + 8 )
        __fastfail(3u);
      v18 = KeyHandle;
      *(_QWORD *)(v17 + 8) = v8;
      *(_QWORD *)(BugCheckParameter2 + 8) = v8;
      if ( v18 )
      {
        v19 = *(wchar_t **)(v8 + 16);
        *(_DWORD *)&ValueName.Length = 0;
        ValueName.Buffer = 0LL;
        if ( v19 )
        {
          v20 = v19;
          v21 = 0x7FFFLL;
          do
          {
            if ( !*v20 )
              break;
            ++v20;
            --v21;
          }
          while ( v21 );
          if ( v21 )
          {
            ValueName.Buffer = v19;
            ValueName.Length = 2 * (0x7FFF - v21);
            ValueName.MaximumLength = ValueName.Length + 2;
          }
        }
        ZwDeleteValueKey(v18, &ValueName);
      }
      v8 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v9 = 0;
    goto LABEL_32;
  }
  if ( v11 == -1073741772 )
  {
LABEL_8:
    v9 = SmCrGenRandom(*(_QWORD *)(v8 + 24), v3);
    if ( v9 >= 0 )
      goto LABEL_9;
  }
LABEL_32:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 )
    ExFreePoolEx((PPRIVILEGE_SET)v8);
  return (unsigned int)v9;
}
