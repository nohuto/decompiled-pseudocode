/*
 * XREFs of sub_180006C30 @ 0x180006C30
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180007560 (ApiSetQueryApiSetPresence.c)
 */

char sub_180006C30()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C678 == 1 )
    return 1;
  if ( dword_18000C678 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C678 = 2 - (v1 != 0);
  return result;
}
