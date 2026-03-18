/*
 * XREFs of xxxHkCallHook @ 0x1C0084730
 * Callers:
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 * Callees:
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0084BE0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     fnHkINLPMSG @ 0x1C0084D00 (fnHkINLPMSG.c)
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     fnHkINDWORD @ 0x1C01068A8 (fnHkINDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C010FDF0 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C01122D8 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0113614 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0115264 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C01285A8 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C020C194 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C020C338 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C020C4EC (fnHkOPTINLPEVENTMSG.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r13
  __int64 v8; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // r15
  int v13; // ecx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 *v20; // r12
  __int64 v21; // rbx
  _QWORD *v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // rax
  unsigned int v26; // r10d
  int v27; // r8d
  __int64 v28; // rax
  unsigned __int16 v29; // dx
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // edi
  int v33; // ecx
  __int64 v34; // [rsp+50h] [rbp-78h]
  _QWORD *v35; // [rsp+58h] [rbp-70h]
  unsigned __int64 v36; // [rsp+58h] [rbp-70h]
  unsigned int v37; // [rsp+D0h] [rbp+8h]
  int v38; // [rsp+D8h] [rbp+10h]

  v38 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  v35 = 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    if ( *(_DWORD *)(a1 + 68) != -1 )
    {
      a2 = *(int *)(a1 + 68);
      a1 = gptiCurrent;
      v8 += *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 8 * a2 + 376);
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
    v37 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(CurrentProcessWin32Process + 280));
    v12 = (_DWORD *)(v5 + 64);
    v13 = *(_DWORD *)(v5 + 64) & 2;
    if ( v13 )
      v14 = (_QWORD *)(gpsi + 392LL);
    else
      v14 = (_QWORD *)(gpsi + 576LL);
    v15 = *(unsigned int *)(v5 + 48);
    if ( (_DWORD)v15 == 3 )
    {
LABEL_7:
      if ( v13 )
        LODWORD(v6) = 1;
      v16 = fnHkINLPMSG((unsigned __int16)v38 | ((unsigned __int16)v15 << 16), a3, (_DWORD)a4, v8, v14[19], v6, v5 + 64);
    }
    else
    {
      if ( (_DWORD)v15 == 4 )
      {
LABEL_13:
        if ( (_DWORD)v15 == 4 )
        {
          v7 = a4;
          v18 = a4[4];
        }
        else
        {
          v35 = a4;
          v18 = a4[5];
        }
        v34 = v18;
        if ( !v18 || (*(_DWORD *)(v18 + 84) & 5) == 0 )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v10, v11);
          if ( ThreadWin32Thread )
            v6 = *ThreadWin32Thread;
          v20 = *(unsigned __int64 **)(v6 + 432);
          if ( *(_DWORD *)(v5 + 48) == 4 )
          {
            v21 = v14[17];
            v22 = v35;
          }
          else
          {
            v21 = v14[18];
            v22 = v35;
            v20[13] = *v35;
          }
          v23 = *v20;
          v24 = *v20 & 0x10;
          v36 = v20[13];
          if ( a3 )
            v25 = v23 | 0x10;
          else
            v25 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
          *v20 = v25;
          if ( *(_DWORD *)(v5 + 48) == 4 )
          {
            v26 = *((_DWORD *)v7 + 4);
            if ( (v26 & 0x1FFFF) >= 0x400 )
            {
              v28 = SfnDWORD(
                      *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1)
                                + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*((_DWORD *)v7 + 6)),
                      v26,
                      v7[1],
                      *v7,
                      v8,
                      v21);
            }
            else
            {
              if ( (*v12 & 2) != 0 )
                v27 = 3;
              else
                v27 = 2;
              v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v26]])(
                      *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1)
                                + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*((_DWORD *)v7 + 6)),
                      v26,
                      v7[1],
                      *v7,
                      v8,
                      v21,
                      v27,
                      v34);
            }
          }
          else
          {
            v32 = *((_DWORD *)v22 + 6);
            v33 = (unsigned __int16)*((_DWORD *)v22 + 8);
            if ( (v32 & 0x1FFFF) < 0x400 )
              v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v32]])(
                      *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(*((_DWORD *)&gSharedInfo + 4) * v33)),
                      v32,
                      v22[2],
                      v22[1],
                      v8,
                      v21,
                      (*(_BYTE *)v12 & 2 | 4u) >> 1,
                      v34);
            else
              v28 = SfnDWORD(
                      *(_QWORD *)(*((_QWORD *)&gSharedInfo + 1) + (unsigned int)(*((_DWORD *)&gSharedInfo + 4) * v33)),
                      v32,
                      v22[2],
                      v22[1],
                      v8,
                      v21);
          }
          v6 = v28;
          *v20 ^= ((unsigned __int8)v24 ^ (unsigned __int8)*v20) & 0x10;
          v20[13] = v36;
        }
        goto LABEL_11;
      }
      v10 = 0x1C0000000uLL;
      switch ( (int)v15 )
      {
        case -1:
        case 6:
          goto LABEL_7;
        case 0:
          v16 = fnHkOPTINLPEVENTMSG((unsigned __int16)v38 | ((unsigned __int16)v15 << 16), a3, (_DWORD)a4, v8, v14[19]);
          break;
        case 1:
          v16 = fnHkOPTINLPEVENTMSG(
                  (unsigned __int16)v38 | ((unsigned __int16)v15 << 16),
                  *(_QWORD *)v5,
                  (_DWORD)a4,
                  v8,
                  v14[19]);
          *v12 &= ~4u;
          break;
        case 2:
          v29 = v38;
          goto LABEL_34;
        case 5:
          v29 = v38;
          if ( v38 == 3 )
          {
            if ( v13 )
              LODWORD(v6) = 1;
            v16 = fnHkINLPCBTCREATESTRUCT((*(unsigned __int16 *)(v5 + 48) << 16) | 3u, a3, (_DWORD)a4, v8, v6);
          }
          else if ( v38 )
          {
            if ( v38 == 5 )
            {
              v16 = fnHkINLPCBTACTIVATESTRUCT((*(unsigned __int16 *)(v5 + 48) << 16) | 5u, a3, (_DWORD)a4, v8, v14[19]);
            }
            else if ( v38 == 6 )
            {
LABEL_47:
              v16 = fnHkINLPMOUSEHOOKSTRUCTEX(
                      v29 | (*(unsigned __int16 *)(v5 + 48) << 16),
                      a3,
                      (_DWORD)a4,
                      v8,
                      v14[19],
                      v5 + 64);
            }
            else
            {
LABEL_34:
              v30 = *(unsigned __int16 *)(v5 + 48);
LABEL_35:
              v16 = fnHkINDWORD(v29 | (unsigned int)(v30 << 16), a3, (_DWORD)a4, v8, v14[19], v5 + 64);
            }
          }
          else
          {
            v31 = *(unsigned __int16 *)(v5 + 48) << 16;
LABEL_53:
            v16 = fnHkINLPRECT(v31, a3, (_DWORD)a4, v8, v14[19]);
          }
          break;
        case 7:
          v29 = v38;
          goto LABEL_47;
        case 9:
          v16 = fnHkINLPDEBUGHOOKSTRUCT(
                  (unsigned __int16)v38 | ((unsigned __int16)v15 << 16),
                  a3,
                  (_DWORD)a4,
                  v8,
                  v14[19]);
          break;
        case 10:
          v29 = v38;
          if ( v38 != 5 )
            goto LABEL_34;
          v31 = (*(unsigned __int16 *)(v5 + 48) << 16) | 5;
          goto LABEL_53;
        case 11:
          v30 = (unsigned __int16)v15;
          v29 = v38;
          goto LABEL_35;
        case 12:
          goto LABEL_13;
        case 13:
          v16 = fnHkINLPKBDLLHOOKSTRUCT(
                  (unsigned __int16)v38 | ((unsigned __int16)v15 << 16),
                  a3,
                  (_DWORD)a4,
                  v8,
                  v14[19]);
          break;
        case 14:
          v16 = fnHkINLPMSLLHOOKSTRUCT(
                  (unsigned __int16)v38 | ((unsigned __int16)v15 << 16),
                  a3,
                  (_DWORD)a4,
                  v8,
                  v14[19]);
          break;
        default:
          goto LABEL_11;
      }
    }
    v6 = v16;
LABEL_11:
    W32SetCurrentThreadDpiAwarenessContext(v37);
    return v6;
  }
  return 0LL;
}
