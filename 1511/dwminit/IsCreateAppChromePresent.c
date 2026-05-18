/*
 * XREFs of IsCreateAppChromePresent @ 0x1800070D4
 * Callers:
 *     ?IsMobileCore@@YA_NXZ @ 0x180001688 (-IsMobileCore@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180007AE0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C67C == 1 )
    return 1;
  if ( dword_18000C67C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C67C = 2 - (v1 != 0);
  return result;
}
