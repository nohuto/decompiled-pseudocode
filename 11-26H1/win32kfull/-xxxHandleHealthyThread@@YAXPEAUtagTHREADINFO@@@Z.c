/*
 * XREFs of ?xxxHandleHealthyThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401B8BC8
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140023380 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     EditionxxxHandleGhostOnThreadDestroyed @ 0x1401F1D40 (EditionxxxHandleGhostOnThreadDestroyed.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1401B8CFC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402CAD94 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleHealthyThread(struct tagTHREADINFO *a1, __int64 a2)
{
  int i; // eax
  unsigned int v4; // r14d
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagTHREADINFO **v11; // rbx

  for ( i = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0);
        i < 0;
        i = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)a1 + 130, 0x7FFFFFFFu);
    v4 = 0;
    W32GetUserSessionState(a1, a2);
    do
    {
      v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19920);
      UserSessionState = W32GetUserSessionState(v7, v6);
      v9 = 5LL * v4;
      v10 = *(_QWORD *)(UserSessionState + 19864);
      if ( *(_BYTE *)(v5 + 32LL * v4 + 24) == 1 )
      {
        v11 = *(struct tagTHREADINFO ***)(v10 + 40LL * v4);
        if ( v11[2] == a1 && IsWindowGhosted(*(const struct tagWND **)(v10 + 40LL * v4)) )
          xxxHandleHealthyWindow((struct tagWND *)v11);
      }
      ++v4;
    }
    while ( v4 <= *(_DWORD *)(W32GetUserSessionState(v9, v10) + 19848) );
  }
}
