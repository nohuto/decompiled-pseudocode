/*
 * XREFs of DxEngSelectPaletteToSurface @ 0x1C007F4E0
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041764 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSelectPaletteToSurface(__int64 a1, HPALETTE a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a2);
  if ( a1 )
  {
    v4 = v8;
    if ( v8 )
    {
      v5 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
      v6 = *(_QWORD **)(v5 + 120);
      *(_QWORD *)(v5 + 120) = v4;
      XEPALOBJ::vRefPalette((XEPALOBJ *)&v8);
      if ( v6 )
      {
        v3 = *v6;
        v9 = v6;
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
      }
    }
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  return v3;
}
