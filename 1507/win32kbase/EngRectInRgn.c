/*
 * XREFs of EngRectInRgn @ 0x1C00BDEA0
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C000B8D0 (GreRectInRegion.c)
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngRectInRgn(HANDLE hrgn, LPRECT prcl)
{
  BOOL v4; // r8d
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    GreRectInRegion((HRGN)hrgn, &prcl->left);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
