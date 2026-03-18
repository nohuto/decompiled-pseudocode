/*
 * XREFs of DxEngSelectPaletteToSurface @ 0x1C00EB124
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0013D4C (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSelectPaletteToSurface(__int64 a1, HPALETTE a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a2);
  v4 = v9;
  if ( a1 )
  {
    if ( !v9 )
      return v3;
    v5 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    v6 = *(_QWORD **)(v5 + 120);
    *(_QWORD *)(v5 + 120) = v4;
    XEPALOBJ::vRefPalette((XEPALOBJ *)&v9, v7);
    if ( v6 )
    {
      v3 = *v6;
      v9 = v6;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
    }
  }
  if ( v4 )
    DEC_SHARE_REF_CNT(v4);
  return v3;
}
