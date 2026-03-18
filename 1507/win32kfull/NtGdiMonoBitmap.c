/*
 * XREFs of NtGdiMonoBitmap @ 0x1C02B1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C0013B04 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiMonoBitmap(HSURF a1)
{
  unsigned int IsMonochrome; // ebx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF

  SURFREF::SURFREF((SURFREF *)v3, a1);
  IsMonochrome = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 120);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v5);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v3);
  return IsMonochrome;
}
