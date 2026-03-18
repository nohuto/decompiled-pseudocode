/*
 * XREFs of xxxCallCtfHook @ 0x14003CF78
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14027BDC8 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x14003CDB4 (fnHkINDWORD.c)
 *     fnHkINLPCHARHOOKSTRUCT @ 0x14003D96C (fnHkINLPCHARHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x14003DCE4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x14021FE60 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxCallCtfHook(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  int v8; // r13d
  unsigned int v9; // r14d
  __int16 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edi
  int v22; // edi
  __int64 v23; // rax
  int v26; // edi
  __int64 UserSessionState; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // r9d
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35[3]; // [rsp+48h] [rbp-70h] BYREF
  int v36; // [rsp+60h] [rbp-58h]
  int v37; // [rsp+64h] [rbp-54h]

  v4 = (int)a1;
  v5 = 0;
  v8 = a2;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v34 = 0;
  v10 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) )
  {
    v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 19904);
    if ( *(_QWORD *)(v13 + 856) )
    {
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v13);
      v17 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
      if ( v17 != *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18696)
        && (_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 520), 0, 0) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(v17 + 488) )
        {
          v18 = *(__int64 **)(v17 + 496);
          v19 = *v18;
          v20 = (unsigned int)(*(_DWORD *)(v17 + 712) | *(_DWORD *)(*v18 + 16));
          if ( ((*(_WORD *)(v17 + 712) | *(_WORD *)(*v18 + 16)) & 0x400) == 0
            || (v32 = *(struct _KTHREAD **)v17,
                v37 = 0,
                v35[0] = (unsigned int)PsGetThreadId(v32),
                v36 = v8,
                v35[2] = a3,
                v35[1] = (__int64)a4,
                !(unsigned int)xxxCallHook(0LL, v4, (__int64)v35, 9)) )
          {
            v21 = v4 - 2;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v26 = v22 - 2;
                if ( v26 )
                {
                  if ( v26 != 2 )
                    return v5;
                  UserSessionState = W32GetUserSessionState(v19, v20);
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                         v9,
                                         a3,
                                         (_DWORD)a4,
                                         0,
                                         *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 856LL),
                                         (__int64)&v34);
                }
                else
                {
                  v33 = W32GetUserSessionState(v19, v20);
                  if ( v8 == 5 )
                    return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(
                                           v9,
                                           a3,
                                           (_DWORD)a4,
                                           0,
                                           *(_QWORD *)(*(_QWORD *)(v33 + 19904) + 856LL));
                  else
                    return (unsigned int)fnHkINDWORD(
                                           v9,
                                           a3,
                                           (__int64)a4,
                                           0LL,
                                           *(_QWORD *)(*(_QWORD *)(v33 + 19904) + 856LL),
                                           &v34);
                }
              }
              else
              {
                v23 = W32GetUserSessionState(v19, v20);
                return (unsigned int)fnHkINLPMSG(
                                       v9,
                                       a3,
                                       a4,
                                       0LL,
                                       *(_QWORD *)(*(_QWORD *)(v23 + 19904) + 856LL),
                                       0,
                                       &v34);
              }
            }
            else
            {
              v29 = *((_QWORD *)PtiCurrent(v19) + 59);
              if ( v29 )
                v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v29 + 48) + 32LL));
              if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
                LODWORD(a3) = (*(unsigned __int16 *)(v17 + 914) << 16) | 0xE7;
              v30 = W32GetUserSessionState(231LL, v28);
              return (unsigned int)fnHkINLPCHARHOOKSTRUCT(
                                     v9,
                                     a3,
                                     (_DWORD)a4,
                                     v31,
                                     *(_QWORD *)(*(_QWORD *)(v30 + 19904) + 856LL));
            }
          }
        }
      }
    }
  }
  return 0LL;
}
