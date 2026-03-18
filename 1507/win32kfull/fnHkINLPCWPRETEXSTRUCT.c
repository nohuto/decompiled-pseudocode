/*
 * XREFs of fnHkINLPCWPRETEXSTRUCT @ 0x1C02356C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 */

__int64 fnHkINLPCWPRETEXSTRUCT()
{
  __int64 v0; // rcx
  __int64 Valid; // rax

  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v0 = *(_QWORD *)(gptiCurrent + 616LL);
  if ( v0 && (Valid = PhkNextValid(v0)) != 0 && *(_DWORD *)(Valid + 48) != 12 )
    return 0LL;
  else
    return xxxCallNextHookEx(0);
}
