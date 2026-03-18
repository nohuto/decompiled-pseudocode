/*
 * XREFs of EngUnionRgn @ 0x1C00CB770
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngUnionRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  INT v6; // ebx
  char v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  v6 = 0;
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgnResult, 4)
    && !(unsigned int)GreGetObjectOwner((unsigned int)hRgnA, 4)
    && !(unsigned int)GreGetObjectOwner((unsigned int)hRgnB, 4) )
  {
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 2);
  }
  EngModeState::~EngModeState((EngModeState *)&v8);
  return v6;
}
