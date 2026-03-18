/*
 * XREFs of EngGetRgnData @ 0x1C0084E00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0011090 (GreGetObjectOwner.c)
 *     GreGetRegionData @ 0x1C0084E70 (GreGetRegionData.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BDBB8 (--0EngModeState@@QEAA@XZ.c)
 *     ??1EngModeState@@QEAA@XZ @ 0x1C00BDBEC (--1EngModeState@@QEAA@XZ.c)
 */

DWORD __stdcall EngGetRgnData(HANDLE hrgn, DWORD nCount, LPRGNDATA lpRgnData)
{
  DWORD v4; // r9d
  char v6; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( !(unsigned int)GreGetObjectOwner((int)hrgn, 4) )
    GreGetRegionData((HRGN)hrgn);
  EngModeState::~EngModeState((EngModeState *)&v6);
  return v4;
}
