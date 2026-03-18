/*
 * XREFs of NtGdiGetColorSpaceforBitmap @ 0x140333690
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1400A4624 (-bDIBSection@SURFACE@@QEAAHXZ.c)
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
    v1 = *(_QWORD *)(v2 + 200);
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v4);
  return v1;
}
