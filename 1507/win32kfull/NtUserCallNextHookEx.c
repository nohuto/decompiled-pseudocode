/*
 * XREFs of NtUserCallNextHookEx @ 0x1C0068CE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C0068E80 (-NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x1C02179A8 (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C02179EC (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0217C60 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C0217D30 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0217D9C (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x1C0217DF8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C0217E64 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 *     ?NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z @ 0x1C0217EC4 (-NtUserfnHkOPTINLPEVENTMSG@@YA_JK_KPEAUtagEVENTMSG@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  struct tagRECT *v13; // r8
  unsigned __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  EnterCrit(1LL);
  v10 = 0LL;
  v11 = *(_QWORD *)(gptiCurrent + 616LL);
  if ( !v11 )
    goto LABEL_34;
  v9 = *(unsigned int *)(v11 + 48);
  if ( (int)v9 > 7 )
  {
    v16 = v9 - 9;
    if ( !v16 )
    {
      v12 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
      goto LABEL_33;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v9 = (unsigned int)(v18 - 2);
        if ( !(_DWORD)v9 )
        {
          v12 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
          goto LABEL_33;
        }
        if ( (_DWORD)v9 == 1 )
        {
          v12 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
          goto LABEL_33;
        }
        goto LABEL_34;
      }
    }
    else
    {
      v13 = (struct tagRECT *)a3;
      v14 = a2;
      if ( a1 == 5 )
      {
        v15 = 5;
        goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( (_DWORD)v9 == 7 )
    goto LABEL_22;
  if ( (_DWORD)v9 == -1 )
  {
LABEL_11:
    v12 = NtUserfnHkINLPMSG(v9, a1, a2, a3);
LABEL_33:
    v10 = v12;
    goto LABEL_34;
  }
  if ( (int)v9 < 0 )
    goto LABEL_34;
  if ( (int)v9 <= 1 )
  {
    v12 = NtUserfnHkOPTINLPEVENTMSG(a1, a2, a3);
    goto LABEL_33;
  }
  switch ( (_DWORD)v9 )
  {
    case 2:
LABEL_16:
      v12 = xxxCallNextHookEx(a1);
      goto LABEL_33;
    case 3:
      goto LABEL_11;
    case 5:
      if ( a1 )
      {
        if ( a1 == 3 )
        {
          v12 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
          goto LABEL_33;
        }
        if ( a1 == 5 )
        {
          v12 = NtUserfnHkINLPCBTACTIVATESTRUCT(5u, a2, a3);
          goto LABEL_33;
        }
        if ( a1 != 6 )
          goto LABEL_16;
LABEL_22:
        v12 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
        goto LABEL_33;
      }
      v13 = (struct tagRECT *)a3;
      v14 = a2;
      v15 = 0;
LABEL_20:
      v12 = NtUserfnHkINLPRECT(v15, v14, v13);
      goto LABEL_33;
    case 6:
      goto LABEL_11;
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
