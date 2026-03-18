/*
 * XREFs of EngRectInRgn @ 0x1C00CB680
 * Callers:
 *     <none>
 * Callees:
 *     GreRectInRegion @ 0x1C0074D50 (GreRectInRegion.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngRectInRgn(HANDLE hrgn, LPRECT prcl)
{
  BOOL v4; // r8d
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    GreRectInRegion((HRGN)hrgn, (struct _RECTL *)prcl);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
