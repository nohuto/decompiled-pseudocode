/*
 * XREFs of NtUserCallNextHookEx @ 0x14003D690
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x14003D61C (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x14003D874 (-NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x14003DC5C (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x14003E004 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x14003E07C (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14003E310 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402AE348 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1402AE468 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagMSLLHOOKSTRUCT *a3, int a4)
{
  __int64 v8; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  struct tagRECT *v19; // r8
  unsigned __int64 v20; // rdx
  unsigned int v21; // ecx

  EnterCrit(0LL, 0LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v8);
  v10 = 0LL;
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v11 + 720);
  if ( v12 )
  {
    v12 = *(unsigned int *)(v12 + 48);
    if ( (int)v12 > 7 )
    {
      v16 = v12 - 9;
      if ( !v16 )
      {
        v14 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_10;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v19 = (struct tagRECT *)a3;
        v20 = a2;
        if ( a1 != 5 )
          goto LABEL_33;
        v21 = 5;
        goto LABEL_35;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v12 = (unsigned int)(v18 - 2);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 != 1 )
            goto LABEL_11;
          v14 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
        }
        else
        {
          v14 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
        }
        goto LABEL_10;
      }
    }
    else
    {
      switch ( (_DWORD)v12 )
      {
        case 7:
          goto LABEL_23;
        case 3:
LABEL_7:
          v13 = (__int64 *)PsGetCurrentThreadWin32Thread(v12);
          if ( v13 )
            v10 = *v13;
          v14 = NtUserfnHkINLPMSG(*(_DWORD *)(*(_QWORD *)(v10 + 720) + 48LL), a1, a2, a3);
          goto LABEL_10;
        case 5:
          if ( a1 )
          {
            switch ( a1 )
            {
              case 3u:
                v14 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
                goto LABEL_10;
              case 5u:
                v14 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
                goto LABEL_10;
              case 6u:
LABEL_23:
                v14 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
LABEL_10:
                v10 = v14;
                goto LABEL_11;
            }
            goto LABEL_32;
          }
          v19 = (struct tagRECT *)a3;
          v20 = a2;
          v21 = 0;
LABEL_35:
          v14 = NtUserfnHkINLPRECT(v21, v20, v19);
          goto LABEL_10;
        case 0xFFFFFFFF:
          goto LABEL_7;
      }
      if ( (_DWORD)v12 != 2 )
      {
        if ( (_DWORD)v12 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
    }
LABEL_32:
    v19 = (struct tagRECT *)a3;
    v20 = a2;
LABEL_33:
    v14 = xxxCallNextHookEx(a1, v20, (__int64)v19);
    goto LABEL_10;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
