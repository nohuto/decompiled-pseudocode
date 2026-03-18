/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x140083D54
 * Callers:
 *     MiFreeInitializationCode @ 0x14047D5E8 (MiFreeInitializationCode.c)
 * Callees:
 *     RtlClearBits @ 0x14002D6E0 (RtlClearBits.c)
 *     MiGetSharedVm @ 0x14002EA30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4)
{
  struct _RTL_BITMAP *v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rdx

  v4 = *(struct _RTL_BITMAP **)(a1 + 80);
  SharedVm = MiGetSharedVm(a2);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  RtlClearBits(v4, a3, a4);
  LOBYTE(v11) = v10;
  return MiUnlockWorkingSetExclusive(a2, v11);
}
