/*
 * XREFs of DxEngSetPaletteState @ 0x1C00EB1A8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EAC10 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EB1E4 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSetPaletteState(HPALETTE a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v3 = v6;
  v4 = 0;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 24) |= 0x8000u;
    v4 = 1;
    DEC_SHARE_REF_CNT(v3);
  }
  return v4;
}
