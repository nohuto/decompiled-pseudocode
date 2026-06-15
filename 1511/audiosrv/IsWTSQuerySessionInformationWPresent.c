/*
 * XREFs of IsWTSQuerySessionInformationWPresent @ 0x180048884
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18003EF58 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180048AA0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWTSQuerySessionInformationWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E6178 == 1 )
    return 1;
  if ( dword_1800E6178 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E6178 = 2 - (v1 != 0);
  return result;
}
