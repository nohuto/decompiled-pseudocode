/*
 * XREFs of sub_180006C84 @ 0x180006C84
 * Callers:
 *     sub_180001548 @ 0x180001548 (sub_180001548.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180007560 (ApiSetQueryApiSetPresence.c)
 */

char sub_180006C84()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C67C == 1 )
    return 1;
  if ( dword_18000C67C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"DF", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C67C = 2 - (v1 != 0);
  return result;
}
