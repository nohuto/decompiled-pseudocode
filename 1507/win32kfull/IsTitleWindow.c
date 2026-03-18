/*
 * XREFs of IsTitleWindow @ 0x1C00EC25C
 * Callers:
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00EC108 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall IsTitleWindow(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = 0;
  if ( ((*(_BYTE *)(a1 + 55) & 0x10) != 0 || !a2)
    && ((*(_BYTE *)(a1 + 40) & 8) != 0 || (*(_BYTE *)(a1 + 54) & 3) != 0)
    && !IsRectEmptyInl((const struct tagRECT *)(a1 + 128))
    && ((*(_BYTE *)(v3 + 50) & 8) == 0 || (*(_BYTE *)(v3 + 51) & 0x20) != 0) )
  {
    return 1;
  }
  return v2;
}
