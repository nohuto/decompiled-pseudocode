/*
 * XREFs of ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278
 * Callers:
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x14003D61C (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     NtUserCallNextHookEx @ 0x14003D690 (NtUserCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x14003D874 (-NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z.c)
 *     fnHkINLPCWPRETEXSTRUCT @ 0x14003DB30 (fnHkINLPCWPRETEXSTRUCT.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x14003DC5C (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x14003E004 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x14003E07C (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14003E310 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402AE348 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1402AE468 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 */

__int64 __fastcall xxxCallNextHookEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r14d
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v5 = a1;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  if ( !CurrentThreadWin32Thread[90] )
    return 0LL;
  v8 = (__int64 *)PsGetCurrentThreadWin32Thread(v7);
  if ( v8 )
    v11 = *v8;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v11 + 720);
  v13 = *(struct _ERESOURCE **)(W32GetUserSessionState(v10, v9) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v15, v14) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v16) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v16)
     || ExIsResourceAcquiredExclusiveLite(v13) != 1 && !ExIsResourceAcquiredSharedLite(v13)) )
  {
    __int2c();
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v12 + 40) )
    {
      v12 = *(_QWORD *)(v12 + 40);
      goto LABEL_19;
    }
    if ( (*(_DWORD *)(v12 + 64) & 1) != 0 )
      break;
    v17 = (_QWORD *)PsGetCurrentThreadWin32Thread(v16);
    if ( v17 )
      v17 = (_QWORD *)*v17;
    v16 = *(int *)(v12 + 48);
    v12 = *(_QWORD *)(v17[62] + 8 * v16 + 48);
    if ( !v12 )
      return xxxCallHook2(v12, v5, a2, a3, 0);
LABEL_19:
    if ( (*(_DWORD *)(v12 + 64) & 0x80u) == 0 )
      return xxxCallHook2(v12, v5, a2, a3, 0);
  }
  v12 = 0LL;
  return xxxCallHook2(v12, v5, a2, a3, 0);
}
