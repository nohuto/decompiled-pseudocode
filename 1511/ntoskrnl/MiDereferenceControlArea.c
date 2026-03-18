/*
 * XREFs of MiDereferenceControlArea @ 0x1400EF460
 * Callers:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3);
}
