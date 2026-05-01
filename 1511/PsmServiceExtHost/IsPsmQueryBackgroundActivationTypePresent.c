/*
 * XREFs of IsPsmQueryBackgroundActivationTypePresent @ 0x18002BA10
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800229E0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18002BBC0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPsmQueryBackgroundActivationTypePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180071760 == 1 )
    return 1;
  if ( dword_180071760 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_180071760 = 2 - (v1 != 0);
  return result;
}
