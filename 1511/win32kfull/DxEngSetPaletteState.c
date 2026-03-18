/*
 * XREFs of DxEngSetPaletteState @ 0x1C007F560
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C007F000 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007F5A0 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSetPaletteState(HPALETTE a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = a3;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v5, a1);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 24) |= 0x8000u;
    v3 = 1;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v5);
  return v3;
}
