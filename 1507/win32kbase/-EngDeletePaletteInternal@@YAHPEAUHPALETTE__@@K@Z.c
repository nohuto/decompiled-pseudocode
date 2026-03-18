/*
 * XREFs of ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00B3B30
 * Callers:
 *     EngDeletePalette @ 0x1C0019290 (EngDeletePalette.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C005AB10 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall EngDeletePaletteInternal(HPALETTE a1, __int16 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  _DWORD *v4; // rcx
  int v5; // eax
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2 & 0x8000;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v4 = v7;
  if ( v7 )
  {
    v5 = v7[6];
    if ( (v5 & 0x100) == 0 && (!v3 || (v5 & 0x2000000) != 0) )
    {
      v7[6] = v5 & 0xFEFFFFFF;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v7);
      v4 = v7;
      v2 = 1;
    }
    if ( v4 )
      DEC_SHARE_REF_CNT(v4);
  }
  return v2;
}
