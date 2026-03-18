/*
 * XREFs of MiRotateComplete @ 0x140103530
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRotateComplete(__int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 v3; // rsi
  __int64 *v4; // rbx
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 *i; // rdx
  __int64 v8; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].IdealNode[12];
  v4 = (__int64 *)&Process[1].Affinity.Bitmap[9];
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  for ( i = (__int64 *)*v4; i != a1; i = (__int64 *)*i )
    v4 = i;
  v8 = *i;
  *v4 = v8;
  LOBYTE(v8) = v5;
  return MiUnlockWorkingSetExclusive(v3, v8, v6);
}
