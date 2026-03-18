/*
 * XREFs of zzzPostInertiaMessage @ 0x1C022A498
 * Callers:
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EC130 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 __fastcall zzzPostInertiaMessage(unsigned int a1, __int64 a2, struct tagPOINT a3, struct tagPOINT a4)
{
  __int64 v7; // rax

  if ( a1 - 571 <= 1 )
  {
    if ( (*(_DWORD *)(a2 + 136) & 0x10) != 0 )
      return xxxRouteSyntheticTouchpadToMT(a1, a3, a4, *(_QWORD *)(a2 + 8));
    v7 = ValidateHwnd(*(_QWORD *)(a2 + 120));
    if ( v7 )
    {
      if ( *(char *)(v7 + 44) >= 0 && *(char *)(v7 + 43) >= 0 )
      {
        if ( !__CFSHR__(*(_DWORD *)(a2 + 136), 2) )
          return PostMessage(v7, a1, *(_QWORD *)(a2 + 8), LOWORD(a3.x) | (unsigned __int64)(LOWORD(a3.y) << 16));
        if ( *(_QWORD *)(v7 + 312) )
        {
          if ( __CFSHR__(*(_DWORD *)(a2 + 136), 2) )
            return PostThreadMessage(*(_QWORD *)(v7 + 312));
          return PostMessage(v7, a1, *(_QWORD *)(a2 + 8), LOWORD(a3.x) | (unsigned __int64)(LOWORD(a3.y) << 16));
        }
      }
    }
  }
  return 0LL;
}
