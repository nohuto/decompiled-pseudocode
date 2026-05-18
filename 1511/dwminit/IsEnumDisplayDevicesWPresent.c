/*
 * XREFs of IsEnumDisplayDevicesWPresent @ 0x180006EE0
 * Callers:
 *     ?GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z @ 0x1800024E4 (-GetPrimaryDisplayDeviceInfo@@YA_NPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180007AE0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsEnumDisplayDevicesWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C660 == 1 )
    return 1;
  if ( dword_18000C660 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C660 = 2 - (v1 != 0);
  return result;
}
