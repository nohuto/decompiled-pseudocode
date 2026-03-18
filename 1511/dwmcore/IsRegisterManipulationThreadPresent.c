/*
 * XREFs of IsRegisterManipulationThreadPresent @ 0x1800BC140
 * Callers:
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800BC3E0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterManipulationThreadPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801A0C50 == 1 )
    return 1;
  if ( dword_1801A0C50 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801A0C50 = 2 - (v1 != 0);
  return result;
}
