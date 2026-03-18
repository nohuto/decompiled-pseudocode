/*
 * XREFs of PhkNextValid @ 0x14003926C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     fnHkINLPCWPEXSTRUCT @ 0x14003D3D0 (fnHkINLPCWPEXSTRUCT.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x14003DB30 (fnHkINLPCWPRETEXSTRUCT.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1401BE578 (PhkFirstGlobalValid.c)
 *     ?zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z @ 0x1402A3C28 (-zzzUnhookWindowsHook@@YAHHP6A_JXZ@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall PhkNextValid(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *CurrentThreadWin32Thread; // rax

  v2 = a1;
  v3 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v5, v4) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v7, v6) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v7, v8)
     || ExIsResourceAcquiredExclusiveLite(v3) != 1 && !ExIsResourceAcquiredSharedLite(v3)) )
  {
    __int2c();
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v2 + 40) )
    {
      v2 = *(_QWORD *)(v2 + 40);
      goto LABEL_14;
    }
    if ( (*(_DWORD *)(v2 + 64) & 1) != 0 )
      return 0LL;
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
    v7 = *(int *)(v2 + 48);
    v2 = *(_QWORD *)(CurrentThreadWin32Thread[62] + 8 * v7 + 48);
    if ( !v2 )
      return v2;
LABEL_14:
    if ( (*(_DWORD *)(v2 + 64) & 0x80u) == 0 )
      return v2;
  }
}
