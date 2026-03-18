/*
 * XREFs of MiRemoveVadEvent @ 0x1401E92A8
 * Callers:
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiRemoveVadEvent(__int64 a1, __int64 *a2)
{
  _KPROCESS *Process; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 *i; // rdi
  __int64 v8; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = (__int64 *)(a1 + 56); (__int64 *)*i != a2; i = (__int64 *)*i )
    ;
  v8 = *a2;
  *i = *a2;
  LOBYTE(v8) = v6;
  return MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8);
}
