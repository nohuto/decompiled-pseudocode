/*
 * XREFs of IsWaitForInputIdlePresent @ 0x180006DE4
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180007AE0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsWaitForInputIdlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C650 == 1 )
    return 1;
  if ( dword_18000C650 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L":<", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C650 = 2 - (v1 != 0);
  return result;
}
