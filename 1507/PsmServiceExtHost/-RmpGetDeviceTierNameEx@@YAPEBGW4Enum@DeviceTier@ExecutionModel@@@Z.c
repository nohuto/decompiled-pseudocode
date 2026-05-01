/*
 * XREFs of ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x1800203A4
 * Callers:
 *     ?GetDeviceTierName@ResourceManager@ExecutionModel@@UEAAPEBGXZ @ 0x18001F720 (-GetDeviceTierName@ResourceManager@ExecutionModel@@UEAAPEBGXZ.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x1800202B4 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall RmpGetDeviceTierNameEx(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( a1 > 3 )
    return L"Tier4";
  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return L"Tier2";
    v2 = v1 - 1;
    if ( !v2 )
      return L"Tier3";
    if ( v2 == 1 )
      return L"Tier4";
  }
  return L"Tier1";
}
