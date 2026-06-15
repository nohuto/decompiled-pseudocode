/*
 * XREFs of IsWTSQuerySessionInformationWPresent @ 0x1800381A0
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002B564 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180038BC0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWTSQuerySessionInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800CAD28 == 1 )
    return 1;
  if ( dword_1800CAD28 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800CAD28 = 2 - (v1 != 0);
  return result;
}
