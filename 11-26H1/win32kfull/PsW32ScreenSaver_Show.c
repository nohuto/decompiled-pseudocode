/*
 * XREFs of PsW32ScreenSaver_Show @ 0x1402D10B0
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?StartScreenSaver@@YAXH@Z @ 0x14019B2E4 (-StartScreenSaver@@YAXH@Z.c)
 */

void __fastcall PsW32ScreenSaver_Show(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 UserSessionState; // rax

  v4 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928)
    && (v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18928), *(_QWORD *)(v5 + 128))
    && (v6 = W32GetUserSessionState(v5, v2),
        !IsHungWindow(*(const struct tagTHREADINFO ***)(*(_QWORD *)(v6 + 18928) + 128LL))) )
  {
    v9 = *(_DWORD **)(W32GetUserSessionState(v7, v2) + 19904);
    if ( (*v9 & 0x200) != 0 )
      StartScreenSaver(1LL, v8);
    v10 = *(_DWORD **)(W32GetUserSessionState(v9, v8) + 19904);
    LOBYTE(v4) = (*v10 & 0x200) != 0;
    UserSessionState = W32GetUserSessionState(v10, v11);
    PostMessage(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18928) + 128LL), 274, 61760, v4);
  }
  else
  {
    StartScreenSaver(0LL, v2);
  }
}
