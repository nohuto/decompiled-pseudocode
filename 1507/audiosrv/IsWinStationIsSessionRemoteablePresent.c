/*
 * XREFs of IsWinStationIsSessionRemoteablePresent @ 0x1800445D0
 * Callers:
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180040F58 (-GetTsAudioProtocol@@YAIK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800448A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWinStationIsSessionRemoteablePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800E8168 == 1 )
    return 1;
  if ( dword_1800E8168 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800E8168 = 2 - (v1 != 0);
  return result;
}
