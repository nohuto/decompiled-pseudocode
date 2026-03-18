/*
 * XREFs of EngEqualRgn @ 0x1C00BF3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreGetObjectOwner @ 0x1C0074F00 (GreGetObjectOwner.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C007DFDC (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 */

BOOL __stdcall EngEqualRgn(HANDLE hrgn1, HANDLE hrgn2)
{
  int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( (unsigned int)GreGetObjectOwner((int)hrgn1, 4) || (unsigned int)GreGetObjectOwner((int)hrgn2, 4) )
    return 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, (HRGN)hrgn1, 1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, (HRGN)hrgn2, 1);
  v4 = GreEqualRgn((struct RGNOBJAPI *)v7, (struct RGNOBJAPI *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v4;
}
