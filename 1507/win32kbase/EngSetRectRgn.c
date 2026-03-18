/*
 * XREFs of EngSetRectRgn @ 0x1C0010FA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreSetRectRgn @ 0x1C0042B20 (GreSetRectRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngSetRectRgn(HANDLE hrgn, INT left, INT top, INT right, INT bottom)
{
  BOOL v6; // r10d
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v8);
  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    GreSetRectRgn((HRGN)hrgn, bottom);
  EngModeState::~EngModeState((EngModeState *)v8);
  return v6;
}
