/*
 * XREFs of IsPsmQueryBackgroundActivationTypePresent @ 0x180024C70
 * Callers:
 *     PsmInitializeServiceExtension3 @ 0x180022550 (PsmInitializeServiceExtension3.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180024E20 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPsmQueryBackgroundActivationTypePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180069760 == 1 )
    return 1;
  if ( dword_180069760 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_180069760 = 2 - (v1 != 0);
  return result;
}
