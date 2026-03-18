/*
 * XREFs of EngOffsetRgn @ 0x1C00CB610
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0036A90 (GreOffsetRgn.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT v6; // r9d
  char v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    GreOffsetRgn((HRGN)hrgn, x, y);
  EngModeState::~EngModeState((EngModeState *)&v8);
  return v6;
}
