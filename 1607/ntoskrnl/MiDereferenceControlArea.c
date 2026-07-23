/*
 * XREFs of MiDereferenceControlArea @ 0x1400B32FC
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  LOBYTE(v3) = v2;
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v3, v4, v5);
}
