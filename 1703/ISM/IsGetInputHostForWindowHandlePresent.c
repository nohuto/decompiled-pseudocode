/*
 * XREFs of IsGetInputHostForWindowHandlePresent @ 0x18009DEAC
 * Callers:
 *     RegisterManipulationThread @ 0x1800055D0 (RegisterManipulationThread.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18009E2C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetInputHostForWindowHandlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800D35F8 == 1 )
    return 1;
  if ( dword_1800D35F8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"LN", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800D35F8 = 2 - (v1 != 0);
  return result;
}
