/*
 * XREFs of IsCreateSystemInputHostPresent @ 0x1800997F0
 * Callers:
 *     ?UseDesktopInputStack@CInputManager@@AEAAHXZ @ 0x18008A750 (-UseDesktopInputStack@CInputManager@@AEAAHXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180099740 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateSystemInputHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180193040 == 1 )
    return 1;
  if ( dword_180193040 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"TV", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_180193040 = 2 - (v1 != 0);
  return result;
}
