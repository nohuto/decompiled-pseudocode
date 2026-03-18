/*
 * XREFs of InternalBeginDeferWindowPos @ 0x140179454
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x140049010 (xxxSetWindowPosAndBand.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x140178774 (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1401791D4 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowRgn @ 0x140179368 (xxxSetWindowRgn.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402ED554 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402FAF24 (xxxArrangeIconicWindows.c)
 * Callees:
 *     AllocateCvr @ 0x1401795D0 (AllocateCvr.c)
 */

_OWORD *__fastcall InternalBeginDeferWindowPos(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 66792) & 0x20000000) == 0 )
  {
    v8 = (_OWORD *)(UserSessionState + 63240);
    if ( (signed int)v2 <= *((_DWORD *)v8 + 8) )
    {
      v9 = W32GetUserSessionState(v7, v6);
      *(_DWORD *)(v9 + 66792) |= 0x20000000u;
      *v8 = 0LL;
      v8[1] = 0LL;
      return v8;
    }
  }
  v11 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v8 = (_OWORD *)v11;
  if ( v11 )
  {
    if ( (unsigned int)AllocateCvr(v11, v2) )
      return v8;
    Win32FreePool(v8);
  }
  return 0LL;
}
