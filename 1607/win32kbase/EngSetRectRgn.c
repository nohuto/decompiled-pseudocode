/*
 * XREFs of EngSetRectRgn @ 0x1C0078890
 * Callers:
 *     <none>
 * Callees:
 *     GreSetRectRgn @ 0x1C0039670 (GreSetRectRgn.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL v9; // r10d
  _BYTE v11[24]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v11);
  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    GreSetRectRgn((HRGN)hrgn, left, top, right, bottom);
  EngModeState::~EngModeState((EngModeState *)v11);
  return v9;
}
