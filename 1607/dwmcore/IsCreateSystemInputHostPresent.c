/*
 * XREFs of IsCreateSystemInputHostPresent @ 0x1800BF14C
 * Callers:
 *     ?IsRunningOnDesktop@CInputManager@@AEAAHXZ @ 0x1800A81FC (-IsRunningOnDesktop@CInputManager@@AEAAHXZ.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800BF140 (ApiSetQueryApiSetPresence_0.c)
 */

char IsCreateSystemInputHostPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801ECF78 == 1 )
    return 1;
  if ( dword_1801ECF78 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"TV", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1801ECF78 = 2 - (v1 != 0);
  return result;
}
