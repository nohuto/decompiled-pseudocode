/*
 * XREFs of IsQueryUserTokenPresent @ 0x180024B74
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180024E20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsQueryUserTokenPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180069754 == 1 )
    return 1;
  if ( dword_180069754 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_180069754 = 2 - (v1 != 0);
  return result;
}
