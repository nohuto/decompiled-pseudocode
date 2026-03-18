/*
 * XREFs of EngCopyRgn @ 0x1C00BDC00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  INT v4; // ebx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  v4 = 0;
  if ( !(unsigned int)GreGetObjectOwner((int)hrgnDst, 4) && !(unsigned int)GreGetObjectOwner((int)hrgnSrc, 4) )
    v4 = GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
