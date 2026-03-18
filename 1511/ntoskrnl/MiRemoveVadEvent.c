/*
 * XREFs of MiRemoveVadEvent @ 0x1401D7610
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRemoveVadEvent(__int64 a1, __int64 *a2)
{
  _KPROCESS *Process; // rsi
  KIRQL v5; // al
  __int64 v6; // r8
  __int64 *i; // rbx
  __int64 v8; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  for ( i = (__int64 *)(a1 + 56); (__int64 *)*i != a2; i = (__int64 *)*i )
    ;
  v8 = *a2;
  *i = *a2;
  LOBYTE(v8) = v5;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v6);
}
