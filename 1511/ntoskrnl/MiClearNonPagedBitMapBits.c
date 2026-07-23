/*
 * XREFs of MiClearNonPagedBitMapBits @ 0x14001A124
 * Callers:
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 */

__int64 __fastcall MiClearNonPagedBitMapBits(__int64 a1, volatile LONG *a2, ULONG a3, ULONG a4)
{
  _RTL_BITMAP *v4; // rdi
  KIRQL v8; // bl
  __int64 v9; // rdx

  v4 = *(_RTL_BITMAP **)(a1 + 80);
  v8 = ExAcquireSpinLockExclusive(a2);
  RtlClearBits(v4, a3, a4);
  LOBYTE(v9) = v8;
  return MiUnlockWorkingSetExclusive(a2, v9);
}
