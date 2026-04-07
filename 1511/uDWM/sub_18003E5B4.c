/*
 * XREFs of sub_18003E5B4 @ 0x18003E5B4
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x18003E37C (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     sub_18004BA94 @ 0x18004BA94 (sub_18004BA94.c)
 */

char __fastcall sub_18003E5B4(char a1)
{
  int v1; // eax
  char v2; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(pvData) = a1;
  v1 = dword_1800BE624;
  v2 = 1;
  if ( !dword_1800BE624 )
  {
    pvData = 0;
    if ( (unsigned __int8)sub_18004BA94() )
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
      dword_1800BE624 = 1;
      return v2;
    }
    v1 = 2;
    dword_1800BE624 = 2;
  }
  if ( v1 != 1 )
    return 0;
  return v2;
}
