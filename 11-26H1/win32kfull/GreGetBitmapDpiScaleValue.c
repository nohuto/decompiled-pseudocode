/*
 * XREFs of GreGetBitmapDpiScaleValue @ 0x14029582C
 * Callers:
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     NtGdiGetBitmapDpiScaleValue @ 0x14032A5D0 (NtGdiGetBitmapDpiScaleValue.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 */

__int64 __fastcall GreGetBitmapDpiScaleValue(HSURF a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  unsigned int v6; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v4, a1);
  v6 = 0;
  if ( !v5
    || (*(_DWORD *)(v5 + 116) & 0x800) == 0
    || (v1 = bFToL(COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(v5 + 660)), (int *)&v6, 6u), v2 = v6, !v1) )
  {
    v2 = 1;
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v2;
}
