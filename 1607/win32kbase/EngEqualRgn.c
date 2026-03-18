/*
 * XREFs of EngEqualRgn @ 0x1C00CB460
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C0081D74 (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngEqualRgn(HANDLE hrgn1, HANDLE hrgn2)
{
  int v4; // ebx
  _BYTE v6[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[56]; // [rsp+58h] [rbp-40h] BYREF
  char v8; // [rsp+B0h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  v4 = 0;
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn1, 4)
    && !(unsigned int)GreGetObjectOwner((unsigned int)hrgn2, 4) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, (HRGN)hrgn1, 1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, (HRGN)hrgn2, 1, 0);
    v4 = GreEqualRgn((struct RGNOBJAPI *)v7, (struct RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  }
  EngModeState::~EngModeState((EngModeState *)&v8);
  return v4;
}
