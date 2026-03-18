/*
 * XREFs of EngDeleteRgn @ 0x1C0011020
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0 (NtOpenCompositionSurfaceDirtyRegion.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+70h] [rbp+8h] BYREF

  EngModeState::EngModeState((EngModeState *)&v3);
  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1, 0);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
  EngModeState::~EngModeState((EngModeState *)&v3);
}
