/*
 * XREFs of ?RmpGetDeviceTierNameEx@@YAPEBGW4Enum@DeviceTier@ExecutionModel@@@Z @ 0x1800050A0
 * Callers:
 *     ?Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z @ 0x180004EB8 (-Init@ResourceManagerClientProxy@@IEAAJPEBGH@Z.c)
 *     ?RmpGetDeviceTier@@YA?AW4Enum@DeviceTier@ExecutionModel@@XZ @ 0x180004FB0 (-RmpGetDeviceTier@@YA-AW4Enum@DeviceTier@ExecutionModel@@XZ.c)
 *     ?GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@ExecutionModel@@@Z @ 0x18000A6E8 (-GetResourceSetTypeConverter@ResourceManagerProxy@@QEAAJPEAPEAVResourceSetTypeToInfoConverter@Ex.c)
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
