/*
 * XREFs of sub_180006A90 @ 0x180006A90
 * Callers:
 *     sub_18000235C @ 0x18000235C (sub_18000235C.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180007560 (ApiSetQueryApiSetPresence.c)
 */

char sub_180006A90()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18000C660 == 1 )
    return 1;
  if ( dword_18000C660 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_18000C660 = 2 - (v1 != 0);
  return result;
}
