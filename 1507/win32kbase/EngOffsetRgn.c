/*
 * XREFs of EngOffsetRgn @ 0x1C00BDE30
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreOffsetRgn @ 0x1C0054700 (GreOffsetRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT v6; // r9d
  char v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( !(unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    GreOffsetRgn((HRGN)hrgn, x, y);
  EngModeState::~EngModeState((EngModeState *)&v8);
  return v6;
}
