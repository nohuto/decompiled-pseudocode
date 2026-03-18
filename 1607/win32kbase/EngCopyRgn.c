/*
 * XREFs of EngCopyRgn @ 0x1C00CB3E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  INT v4; // ebx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  v4 = 0;
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgnDst, 4)
    && !(unsigned int)GreGetObjectOwner((unsigned int)hrgnSrc, 4) )
  {
    v4 = GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
  }
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
