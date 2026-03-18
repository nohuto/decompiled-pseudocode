/*
 * XREFs of EngDeleteRgn @ 0x1C0074EB0
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C004D2B0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0028010 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  struct HOBJ__ **v2[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI(v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
}
