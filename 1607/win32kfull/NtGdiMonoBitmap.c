/*
 * XREFs of NtGdiMonoBitmap @ 0x1C02B3F10
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C003A79C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
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
