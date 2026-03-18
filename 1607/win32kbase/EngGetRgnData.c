/*
 * XREFs of EngGetRgnData @ 0x1C00786C0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRegionData @ 0x1C0078730 (GreGetRegionData.c)
 *     GreGetObjectOwner @ 0x1C0078980 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB390 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00CB3C4 (--1EngModeState@@QEAA@XZ.c)
 */

DWORD __stdcall EngGetRgnData(HANDLE hrgn, DWORD nCount, LPRGNDATA lpRgnData)
{
  DWORD v4; // r9d
  char v6; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    GreGetRegionData((HRGN)hrgn);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
