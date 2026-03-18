/*
 * XREFs of IsCreateAppChromePresent @ 0x140003DA0
 * Callers:
 *     wWinMain @ 0x140001B70 (wWinMain.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140003E00 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateAppChromePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000A780 == 1 )
    return 1;
  if ( dword_14000A780 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000A780 = 2 - (v1 != 0);
  return result;
}
