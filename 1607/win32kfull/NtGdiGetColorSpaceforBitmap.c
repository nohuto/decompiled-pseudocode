/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x1C02B5770
 * Callers:
 *     <none>
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0033D44 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetColorSpaceforBitmap(HSURF a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  _BYTE v4[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  SURFREF::SURFREF((SURFREF *)v4, a1);
  if ( v5 && (unsigned int)SURFACE::bDIBSection(v5) )
    v1 = *(_QWORD *)(v2 + 208);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v1;
}
