/*
 * XREFs of PhkFirstValid @ 0x14003954C
 * Callers:
 *     xxxCallMouseHook @ 0x14003D5A4 (xxxCallMouseHook.c)
 *     xxxPointerCallHook @ 0x1401360C4 (xxxPointerCallHook.c)
 *     EditionKeyEventLLHook @ 0x140172CB0 (EditionKeyEventLLHook.c)
 *     EditionLLMouseButtonHook @ 0x140173290 (EditionLLMouseButtonHook.c)
 *     EditionLLMouseWheelHook @ 0x1401734E0 (EditionLLMouseWheelHook.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_C.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1401BE41C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402A3C28 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _QWORD *CurrentThreadWin32Thread; // rax

  v2 = (int)a2;
  v4 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v8, v7) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v9, v7)
     || ExIsResourceAcquiredExclusiveLite(v4) != 1 && !ExIsResourceAcquiredSharedLite(v4)) )
  {
    __int2c();
  }
  v10 = v2;
  v11 = *(_QWORD *)(a1 + 8 * v2 + 960);
  if ( (v11 || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8 * v10 + 48)) != 0) && (*(_DWORD *)(v11 + 64) & 0x80u) != 0 )
  {
    v12 = *(struct _ERESOURCE **)(W32GetUserSessionState(v10, v7) + 42336);
    if ( !*(_DWORD *)(W32GetUserSessionState(v14, v13) + 19792)
      && (unsigned int)GET_USERCRIT_DISPOSITION(v16, v15) != 2
      && (!(unsigned int)GET_USERCRIT_DISPOSITION(v16, v17)
       || ExIsResourceAcquiredExclusiveLite(v12) != 1 && !ExIsResourceAcquiredSharedLite(v12)) )
    {
      __int2c();
    }
    do
    {
      if ( *(_QWORD *)(v11 + 40) )
      {
        v11 = *(_QWORD *)(v11 + 40);
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 64) & 1) != 0 )
          return 0LL;
        CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v16);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
        v16 = *(int *)(v11 + 48);
        v11 = *(_QWORD *)(CurrentThreadWin32Thread[62] + 8 * v16 + 48);
        if ( !v11 )
          return v11;
      }
    }
    while ( (*(_DWORD *)(v11 + 64) & 0x80u) != 0 );
  }
  return v11;
}
