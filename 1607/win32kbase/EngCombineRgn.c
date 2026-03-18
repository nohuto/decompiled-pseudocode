/*
 * XREFs of EngCombineRgn @ 0x1C00787F0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  INT v8; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  v8 = 0;
  if ( !(unsigned int)GreGetObjectOwner(hrgnTrg, 4LL)
    && !(unsigned int)GreGetObjectOwner(hrgnSrc1, 4LL)
    && !(unsigned int)GreGetObjectOwner(hrgnSrc2, 4LL) )
  {
    v8 = GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
  EngModeState::~EngModeState((EngModeState *)v10);
  return v8;
}
