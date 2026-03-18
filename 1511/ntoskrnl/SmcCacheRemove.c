/*
 * XREFs of SmcCacheRemove @ 0x140658D90
 * Callers:
 *     SmcCacheDelete @ 0x140658AC0 (SmcCacheDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF v3; // r14
  struct _EX_RUNDOWN_REF *v4; // rsi
  unsigned int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rbp

  CurrentThread = KeGetCurrentThread();
  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = a2 >> 4;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&v4[2], 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v4[2], 0LL) )
    ExfAcquirePushLockExclusiveEx(&v4[2].Count, v6, (ULONG_PTR)&v4[2]);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( v5 == (v4[3].Count & 0xFFF) && v4->Count )
  {
    ExWaitForRundownProtectionRelease(v4 + 1);
    v3.Count = v4->Count;
    v4->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v4[2]);
  KeAbPostRelease((ULONG_PTR)&v4[2]);
  KeLeaveCriticalRegion();
  return v3;
}
