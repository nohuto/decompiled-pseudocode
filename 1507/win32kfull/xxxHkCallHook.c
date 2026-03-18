/*
 * XREFs of xxxHkCallHook @ 0x1C006CB30
 * Callers:
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 * Callees:
 *     fnHkINLPMSG @ 0x1C006CF90 (fnHkINLPMSG.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     fnHkINDWORD @ 0x1C00E1EC4 (fnHkINDWORD.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00E8704 (fnHkINLPCBTCREATESTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C00ED61C (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00EE5E8 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C00F1174 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0128488 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C02138C4 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0213A30 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0213BB0 (fnHkOPTINLPEVENTMSG.c)
 */

__int64 __fastcall xxxHkCallHook(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  int v4; // r11d
  __int64 v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rsi
  _DWORD *v10; // r15
  int v11; // ecx
  _QWORD *v12; // r14
  int v13; // edx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 *v18; // r12
  __int64 v19; // rdi
  _QWORD *v20; // r11
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // rax
  int v26; // r8d
  int v27; // ecx
  unsigned int v28; // ebx
  int v29; // ecx
  _QWORD *v30; // [rsp+50h] [rbp-58h]
  unsigned __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp+8h]

  v4 = a3;
  v7 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    if ( *(_DWORD *)(a1 + 68) != -1 )
      v9 += *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 8LL * *(int *)(a1 + 68) + 384);
    v10 = (_DWORD *)(a1 + 64);
    v11 = *(_DWORD *)(a1 + 64) & 2;
    if ( (*(_DWORD *)(a1 + 64) & 2) != 0 )
      v12 = (_QWORD *)(gpsi + 392LL);
    else
      v12 = (_QWORD *)(gpsi + 576LL);
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == 3 )
    {
LABEL_7:
      if ( v11 )
        LODWORD(v7) = 1;
      return fnHkINLPMSG((unsigned __int16)a2 | ((unsigned __int16)v13 << 16), v4, (_DWORD)a4, v9, v12[19], v7, a1 + 64);
    }
    else
    {
      if ( v13 == 4 )
      {
LABEL_13:
        if ( v13 == 4 )
        {
          v8 = a4;
          v16 = a4[4];
        }
        else
        {
          v30 = a4;
          v16 = a4[5];
        }
        v32 = v16;
        if ( !v16 || (*(_DWORD *)(v16 + 84) & 5) == 0 )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            v7 = *ThreadWin32Thread;
          v18 = *(unsigned __int64 **)(v7 + 440);
          if ( *(_DWORD *)(a1 + 48) == 4 )
          {
            v19 = v12[17];
            v20 = v30;
          }
          else
          {
            v19 = v12[18];
            v20 = v30;
            v18[13] = *v30;
          }
          v21 = *v18;
          v22 = *v18 & 0x10;
          v31 = v18[13];
          if ( a3 )
            v23 = v21 | 0x10;
          else
            v23 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
          *v18 = v23;
          if ( *(_DWORD *)(a1 + 48) == 4 )
          {
            v24 = *((_DWORD *)v8 + 4);
            if ( (v24 & 0x1FFFF) < 0x400 )
            {
              if ( (*v10 & 2) != 0 )
                v26 = 3;
              else
                v26 = 2;
              v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v24]])(
                      *(_QWORD *)(gSharedInfo[1]
                                + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*((_DWORD *)v8 + 6)),
                      v24,
                      v8[1],
                      *v8,
                      v9,
                      v19,
                      v26,
                      v32);
            }
            else
            {
              v25 = SfnDWORD(
                      *(_QWORD *)(gSharedInfo[1]
                                + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*((_DWORD *)v8 + 6)),
                      v24,
                      v8[1],
                      *v8,
                      v9,
                      v19);
            }
          }
          else
          {
            v28 = *((_DWORD *)v20 + 6);
            v29 = (unsigned __int16)*((_DWORD *)v20 + 8);
            if ( (v28 & 0x1FFFF) < 0x400 )
              v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, unsigned int, __int64))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v28]])(
                      *(_QWORD *)(gSharedInfo[1] + (unsigned int)(LODWORD(gSharedInfo[2]) * v29)),
                      v28,
                      v20[2],
                      v20[1],
                      v9,
                      v19,
                      (*(_BYTE *)v10 & 2 | 4u) >> 1,
                      v32);
            else
              v25 = SfnDWORD(
                      *(_QWORD *)(gSharedInfo[1] + (unsigned int)(LODWORD(gSharedInfo[2]) * v29)),
                      v28,
                      v20[2],
                      v20[1],
                      v9,
                      v19);
          }
          v7 = v25;
          *v18 ^= ((unsigned __int8)v22 ^ (unsigned __int8)*v18) & 0x10;
          v18[13] = v31;
        }
        return v7;
      }
      switch ( v13 )
      {
        case -1:
        case 6:
          goto LABEL_7;
        case 0:
          return fnHkOPTINLPEVENTMSG((unsigned __int16)a2 | ((unsigned __int16)v13 << 16), v4, (_DWORD)a4, v9, v12[19]);
        case 1:
          v14 = fnHkOPTINLPEVENTMSG(
                  (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                  *(_QWORD *)a1,
                  (_DWORD)a4,
                  v9,
                  v12[19]);
          *v10 &= ~4u;
          return v14;
        case 2:
        case 11:
          goto LABEL_34;
        case 5:
          if ( a2 == 3 )
          {
            LOBYTE(v7) = v11 != 0;
            v14 = fnHkINLPCBTCREATESTRUCT(((unsigned __int16)v13 << 16) | 3u, v4, (_DWORD)a4, v9, v7);
          }
          else if ( a2 )
          {
            if ( a2 == 5 )
            {
              v14 = fnHkINLPCBTACTIVATESTRUCT(((unsigned __int16)v13 << 16) | 5u, v4, (_DWORD)a4, v9, v12[19]);
            }
            else if ( a2 == 6 )
            {
LABEL_44:
              v14 = fnHkINLPMOUSEHOOKSTRUCTEX(
                      (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                      v4,
                      (_DWORD)a4,
                      v9,
                      v12[19],
                      a1 + 64);
            }
            else
            {
LABEL_34:
              v14 = fnHkINDWORD(
                      (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                      v4,
                      (_DWORD)a4,
                      v9,
                      v12[19],
                      a1 + 64);
            }
          }
          else
          {
            v27 = (unsigned __int16)v13 << 16;
LABEL_48:
            v14 = fnHkINLPRECT(v27, v4, (_DWORD)a4, v9, v12[19]);
          }
          break;
        case 7:
          goto LABEL_44;
        case 9:
          return fnHkINLPDEBUGHOOKSTRUCT(
                   (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                   v4,
                   (_DWORD)a4,
                   v9,
                   v12[19]);
        case 10:
          if ( a2 != 5 )
            goto LABEL_34;
          v27 = ((unsigned __int16)v13 << 16) | 5;
          goto LABEL_48;
        case 12:
          goto LABEL_13;
        case 13:
          return fnHkINLPKBDLLHOOKSTRUCT(
                   (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                   v4,
                   (_DWORD)a4,
                   v9,
                   v12[19]);
        case 14:
          return fnHkINLPMSLLHOOKSTRUCT(
                   (unsigned __int16)a2 | ((unsigned __int16)v13 << 16),
                   v4,
                   (_DWORD)a4,
                   v9,
                   v12[19]);
        default:
          return v7;
      }
    }
    return v14;
  }
  return 0LL;
}
