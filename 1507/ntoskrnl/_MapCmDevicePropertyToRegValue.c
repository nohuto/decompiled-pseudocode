/*
 * XREFs of _MapCmDevicePropertyToRegValue @ 0x140019DB8
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall MapCmDevicePropertyToRegValue(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx

  if ( a2 <= 16 )
  {
    if ( a2 == 16 )
      return L"Capabilities";
    if ( a2 > 9 )
    {
      v5 = a2 - 10;
      if ( !v5 )
        return L"Driver";
      v6 = v5 - 1;
      if ( !v6 )
        return L"ConfigFlags";
      v8 = v6 - 1;
      if ( !v8 )
        return L"Mfg";
      v13 = v8 - 1;
      if ( !v13 )
        return L"FriendlyName";
      if ( v13 == 1 )
        return L"LocationInformation";
    }
    else
    {
      if ( a2 == 9 )
        return L"ClassGUID";
      v2 = a2 - 1;
      if ( !v2 )
        return L"DeviceDesc";
      v3 = v2 - 1;
      if ( !v3 )
        return L"HardwareID";
      v7 = v3 - 1;
      if ( !v7 )
        return L"CompatibleIDs";
      v12 = v7 - 2;
      if ( !v12 )
        return L"Service";
      if ( v12 == 3 )
        return L"Class";
    }
    return 0LL;
  }
  if ( a2 <= 27 )
  {
    if ( a2 == 27 )
      return L"Exclusive";
    v9 = a2 - 17;
    if ( !v9 )
      return L"UINumber";
    v10 = v9 - 1;
    if ( !v10 )
      return L"UpperFilters";
    v11 = v10 - 1;
    if ( !v11 )
      return L"LowerFilters";
    v14 = v11 - 5;
    if ( !v14 )
      return L"Security";
    if ( v14 == 2 )
      return L"DeviceType";
    return 0LL;
  }
  switch ( a2 )
  {
    case 37:
      return L"ContainerID";
    case 28:
      return L"DeviceCharacteristics";
    case 34:
      return L"RemovalPolicy";
  }
  if ( a2 != 30 )
    return 0LL;
  return L"UINumberDescFormat";
}
