/*
 * XREFs of IsCreateAppChromePresent @ 0x180007710
 * Callers:
 *     ?IsMobileCore@@YA_NXZ @ 0x180001628 (-IsMobileCore@@YA_NXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800080F0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000D680 == 1 )
    return 1;
  if ( dword_18000D680 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000D680 = 2 - (v1 != 0);
  return result;
}
