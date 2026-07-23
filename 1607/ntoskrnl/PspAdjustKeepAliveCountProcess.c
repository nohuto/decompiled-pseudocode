/*
 * XREFs of PspAdjustKeepAliveCountProcess @ 0x14067D7A0
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     IoIncrementKeepAliveCount @ 0x1401C97D0 (IoIncrementKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401C9DB8 (IopKeepAliveWorker.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 */

__int64 __fastcall PspAdjustKeepAliveCountProcess(__int64 a1, int a2, __int64 a3, char a4)
{
  signed __int64 v4; // r12
  signed __int32 *v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v10; // eax
  int v11; // r15d
  unsigned int v12; // ebx
  char *v13; // rsi

  v4 = a2;
  v6 = (signed __int32 *)(a1 + 1824);
  if ( !a4 )
    v6 = (signed __int32 *)(a1 + 1828);
  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared(a1, (__int64)CurrentThread);
  _m_prefetchw(v6);
  v10 = *v6;
  do
  {
    v11 = v10;
    v12 = v10 + v4;
    v10 = _InterlockedCompareExchange(v6, v10 + v4, v10);
  }
  while ( v10 != v11 );
  v13 = *(char **)(a1 + 944);
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  if ( a4 )
  {
    if ( v11 < 0 )
      PspChargeJobWakeCounter(v13, 0LL, 1, v4, 1, a1, a3);
    v12 &= ~0x80000000;
  }
  return v12;
}
