/*
 * XREFs of EngGetRgnBox @ 0x1C00CB520
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRgnBox @ 0x1C00749E0 (GreGetRgnBox.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  INT v4; // r8d
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
