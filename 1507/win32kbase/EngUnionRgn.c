/*
 * XREFs of EngUnionRgn @ 0x1C00BDF90
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngUnionRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  INT v6; // ebx
  char v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  v6 = 0;
  if ( !(unsigned int)GreGetObjectOwner((int)hrgnResult, 4)
    && !(unsigned int)GreGetObjectOwner((int)hRgnA, 4)
    && !(unsigned int)GreGetObjectOwner((int)hRgnB, 4) )
  {
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 2);
  }
  EngModeState::~EngModeState((EngModeState *)&v8);
  return v6;
}
