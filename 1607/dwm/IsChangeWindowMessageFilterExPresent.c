/*
 * XREFs of IsChangeWindowMessageFilterExPresent @ 0x1400036E8
 * Callers:
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400021C0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x140003DC0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsChangeWindowMessageFilterExPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_14000A730 == 1 )
    return 1;
  if ( dword_14000A730 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"8:", &v1) < 0 )
    return 0;
  result = v1;
  dword_14000A730 = 2 - (v1 != 0);
  return result;
}
