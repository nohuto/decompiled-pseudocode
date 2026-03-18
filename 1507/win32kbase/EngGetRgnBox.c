/*
 * XREFs of EngGetRgnBox @ 0x1C00BDD40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C000BED0 (GreGetRgnBox.c)
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  INT v4; // r8d
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
