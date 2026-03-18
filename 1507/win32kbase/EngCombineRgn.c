/*
 * XREFs of EngCombineRgn @ 0x1C0083FA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngCombineRgn(HANDLE hrgnTrg, HANDLE hrgnSrc1, HANDLE hrgnSrc2, INT iMode)
{
  INT v8; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  EngModeState::EngModeState((EngModeState *)v10);
  v8 = 0;
  if ( !(unsigned int)GreGetObjectOwner((int)hrgnTrg, 4)
    && !(unsigned int)GreGetObjectOwner((int)hrgnSrc1, 4)
    && !(unsigned int)GreGetObjectOwner((int)hrgnSrc2, 4) )
  {
    v8 = GreCombineRgn((HRGN)hrgnTrg, (HRGN)hrgnSrc1, (HRGN)hrgnSrc2, iMode);
  }
  EngModeState::~EngModeState((EngModeState *)v10);
  return v8;
}
