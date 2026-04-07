/*
 * XREFs of _DisableIndependentStartTiles @ 0x1800427CC
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180042594 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     _EnableTestHooks @ 0x18004CCB4 (_EnableTestHooks.c)
 */

char __fastcall DisableIndependentStartTiles(char a1)
{
  int v1; // eax
  char v2; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(pvData) = a1;
  v1 = dword_1800B7DAC;
  v2 = 1;
  if ( !dword_1800B7DAC )
  {
    pvData = 0;
    if ( (unsigned __int8)EnableTestHooks() )
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
    if ( pvData == 1 )
    {
      dword_1800B7DAC = 1;
      return v2;
    }
    v1 = 2;
    dword_1800B7DAC = 2;
  }
  if ( v1 != 1 )
    return 0;
  return v2;
}
