/*
 * XREFs of PsSuspendThread @ 0x1404B09A0
 * Callers:
 *     NtSuspendThread @ 0x1404B08EC (NtSuspendThread.c)
 *     PsSuspendProcess @ 0x140518CC0 (PsSuspendProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1696)) )
  {
    if ( (*(_DWORD *)(a1 + 1724) & 1) != 0 )
    {
      v5 = -1073741749;
    }
    else
    {
      v7 = KeSuspendThread(a1);
      v5 = 0;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1696));
  }
  else
  {
    v5 = -1073741749;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( a2 )
    *a2 = v7;
  return v5;
}
