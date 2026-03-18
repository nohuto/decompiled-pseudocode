/*
 * XREFs of ?IsEquivalent@CDirectFlipInfo@@QEAA_NPEAV1@@Z @ 0x180128FC8
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDirectFlipInfo::IsEquivalent(CDirectFlipInfo *this, struct CDirectFlipInfo *a2)
{
  return *((_QWORD *)this + 3) == *((_QWORD *)a2 + 3)
      && *((_QWORD *)this + 4) == *((_QWORD *)a2 + 4)
      && *((_QWORD *)this + 8) == *((_QWORD *)a2 + 8);
}
