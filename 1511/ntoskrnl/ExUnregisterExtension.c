/*
 * XREFs of ExUnregisterExtension @ 0x140673B50
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall ExUnregisterExtension(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_Count; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  void (__fastcall *Count)(__int64, unsigned __int64); // rax
  void (__fastcall *v7)(__int64, unsigned __int64); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_Count = &a1[9].Count;
  v4 = KeAbPreAcquire((ULONG_PTR)&a1[9], 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_Count, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_Count, v4, (ULONG_PTR)p_Count);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  Count = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  if ( Count )
    Count(2LL, a1[7].Count);
  ExWaitForRundownProtectionRelease(a1 + 8);
  v7 = (void (__fastcall *)(__int64, unsigned __int64))a1[6].Count;
  a1[10].Count = 0LL;
  if ( v7 )
    v7(3LL, a1[7].Count);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_Count, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)p_Count);
  KeAbPostRelease((ULONG_PTR)p_Count);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ExpDereferenceHost(a1);
}
