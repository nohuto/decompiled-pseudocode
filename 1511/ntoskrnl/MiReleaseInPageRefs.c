/*
 * XREFs of MiReleaseInPageRefs @ 0x1400F1950
 * Callers:
 *     MiInvalidateCollidedIos @ 0x1400F16AC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 */

void __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int8 v2; // r9

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
  v2 = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (_bittest64((const signed __int64 *)(a1 + 16), 0xAu) & _bittest64((const signed __int64 *)(a1 + 40), 0x39u)) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v2);
    MiDereferenceControlAreaPfn(*(_QWORD *)(*(__int64 *)(a1 + 16) >> 16), *(__int64 *)(a1 + 16) >> 16, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFCFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v2);
  }
}
