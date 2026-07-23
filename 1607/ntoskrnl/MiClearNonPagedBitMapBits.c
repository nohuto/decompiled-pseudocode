/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x140081EB4
 * Callers:
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, __int64 a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // di
  __int64 v11; // rdx

  v4 = *(_RTL_BITMAP **)(a1 + 80);
  SharedVm = MiGetSharedVm(a2);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  RtlClearBits(v4, a3, a4);
  LOBYTE(v11) = v10;
  return MiUnlockWorkingSetExclusive(a2, v11);
}
