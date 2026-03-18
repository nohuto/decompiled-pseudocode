/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x140238BF0
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1402CB320 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  ULONG_PTR *v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax

  v5 = (ULONG_PTR *)a3;
  EtwTraceChangeDisplayModeBroadcast(0LL);
  UserSessionState = W32GetUserSessionState(v9, v8);
  result = xxxBroadcastMessageEx(
             *(struct tagWND ***)(*(_QWORD *)(a1 + 8) + 24LL),
             0x7Eu,
             *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19904) + 6996LL),
             v5,
             1u,
             0LL,
             1,
             a4);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(struct tagWND ***)(*(_QWORD *)(a1 + 8) + 24LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a4);
    return xxxBroadcastMessageEx(*(struct tagWND ***)(*(_QWORD *)(a1 + 8) + 24LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a4);
  }
  return result;
}
