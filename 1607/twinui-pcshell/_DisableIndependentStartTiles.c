/*
 * XREFs of _DisableIndependentStartTiles @ 0x18001AEF0
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x18001AF78 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     _EnableTestHooks @ 0x18001AE94 (_EnableTestHooks.c)
 */

bool __fastcall DisableIndependentStartTiles(char a1)
{
  int v1; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(pvData) = a1;
  v1 = dword_18004CB80;
  if ( !dword_18004CB80 )
  {
    pvData = 0;
    if ( EnableTestHooks() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
        L"DisableIndependentStartTiles",
        0x10u,
        0LL,
        &pvData,
        &pcbData);
    }
    v1 = (pvData != 1) + 1;
    dword_18004CB80 = v1;
  }
  return v1 == 1;
}
