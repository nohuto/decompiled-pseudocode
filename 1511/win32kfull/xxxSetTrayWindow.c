/*
 * XREFs of xxxSetTrayWindow @ 0x1C00803EC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     xxxRemoveFullScreen @ 0x1C0068C7C (xxxRemoveFullScreen.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 */

__int64 __fastcall xxxSetTrayWindow(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 *v6; // rdi

  v2 = 0;
  if ( a2 == (__int64 *)1 )
  {
    v6 = *(__int64 **)(a1 + 88);
    if ( v6 )
      v4 = *v6;
    else
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
    if ( a2 )
      v4 = *a2;
    HMAssignmentLock(a1 + 88, a2);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) )
    PostShellHookMessagesEx(*(_WORD *)(gpDispInfo + 208LL) != 0 ? 32772 : 4, v4, 0LL);
  result = *(_QWORD *)(gptiCurrent + 416LL);
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(result + 24)) & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_WORD *)(gpDispInfo + 208LL) != 0;
    return xxxCallHook(4LL, v4, v2);
  }
  return result;
}
