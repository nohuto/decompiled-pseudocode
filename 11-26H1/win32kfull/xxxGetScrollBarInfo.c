/*
 * XREFs of xxxGetScrollBarInfo @ 0x14018ED28
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1402B4840 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddddddddd @ 0x14018F394 (WPP_RECORDER_AND_TRACE_SF_qddddddddd.c)
 *     GetWndSBDisableFlags @ 0x14018F5C0 (GetWndSBDisableFlags.c)
 *     GetObjectIdString @ 0x14018F6B8 (GetObjectIdString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x14018F6F4 (WPP_RECORDER_AND_TRACE_SF_qsllll.c)
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(__int64 *a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r14d
  __int64 *v5; // rsi
  __int64 v6; // rdx
  struct MOVESIZEDATA *v7; // rcx
  char v8; // r13
  bool v9; // al
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r8d
  int v14; // edx
  int v15; // r9d
  int v16; // edi
  unsigned int v17; // edi
  int v18; // ecx
  char WndSBDisableFlags; // bl
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // r8d
  unsigned int v24; // r11d
  _QWORD *v25; // r9
  char v26; // al
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  bool v31; // al
  unsigned int *v32; // rcx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  bool v37; // di
  bool v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rcx
  int v44; // edx
  _QWORD *v45; // rbx
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  _BYTE v54[16]; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v55; // [rsp+B0h] [rbp-19h]
  unsigned int v56; // [rsp+B4h] [rbp-15h]
  unsigned int v57; // [rsp+B8h] [rbp-11h]
  unsigned int v58; // [rsp+BCh] [rbp-Dh]
  int v59; // [rsp+C4h] [rbp-5h]
  int v60; // [rsp+C8h] [rbp-1h]
  unsigned int v61; // [rsp+D0h] [rbp+7h]
  int v62; // [rsp+D4h] [rbp+Bh]
  bool v65; // [rsp+140h] [rbp+77h]
  bool v66; // [rsp+140h] [rbp+77h]
  bool v67; // [rsp+148h] [rbp+7Fh]
  bool v68; // [rsp+148h] [rbp+7Fh]

  v3 = a2;
  v5 = a1;
  memset_0(v54, 0, 0x40uLL);
  v7 = WPP_GLOBAL_Control;
  v8 = 1;
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v65 = v9;
  v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    UserSessionState = W32GetUserSessionState(v7, v6);
    GetObjectIdString(a2, v11, v12, *(_QWORD *)(UserSessionState + 69152));
    LOBYTE(v13) = v67;
    LOBYTE(v14) = v65;
    WPP_RECORDER_AND_TRACE_SF_qsllll(*((_QWORD *)WPP_GLOBAL_Control + 3), v14, v13, v15);
    v5 = a1;
    v3 = a2;
  }
  v16 = *a3;
  if ( *a3 == 60 )
  {
    *(_OWORD *)(a3 + 9) = 0LL;
    *(_QWORD *)(a3 + 13) = 0LL;
    if ( v3 == -5 )
    {
      v6 = v5[5];
      v17 = 1;
      if ( (*(_BYTE *)(v6 + 30) & 0x20) != 0 )
      {
        LOWORD(v18) = 0;
        if ( (*(_BYTE *)(v6 + 16) & 2) == 0 )
        {
          a3[9] = 0x10000;
          LOWORD(v18) = 0;
        }
LABEL_11:
        if ( (v18 & 0x8000) != 0 )
        {
          v37 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v39 = *v5;
            v40 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
            LOBYTE(v41) = v38;
            LOBYTE(v42) = v37;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v42,
              v41,
              *(_QWORD *)(v40 + 69152),
              4,
              9,
              13,
              (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
              v39);
          }
          return 1LL;
        }
LABEL_12:
        WndSBDisableFlags = GetWndSBDisableFlags(v5, v17);
        if ( (a3[9] & 0x10000) == 0 && (CalcSBStuff(v5, v54, v17), v20 = v5[5], (*(_BYTE *)(v20 + 26) & 0x40) != 0) )
        {
          v44 = *(_DWORD *)(v20 + 96) - *(_DWORD *)(v20 + 88);
          if ( !v17 )
          {
            v22 = v57;
            v23 = v44 - v56;
            v24 = v44 - v55;
            v21 = v58;
LABEL_16:
            if ( (WndSBDisableFlags & 1) != 0 )
            {
              a3[10] |= 1u;
              a3[11] |= 1u;
            }
            if ( (WndSBDisableFlags & 2) != 0 )
            {
              a3[14] |= 1u;
              a3[13] |= 1u;
            }
            if ( (WndSBDisableFlags & 3) == 3 )
              a3[9] |= 1u;
            v25 = v5 + 5;
            v26 = *(_BYTE *)(v5[5] + 22);
            if ( (v26 & 0x10) == 0 )
              goto LABEL_23;
            if ( v3 == -5 )
            {
              if ( (v26 & 0x20) == 0 )
              {
LABEL_23:
                if ( (a3[9] & 0x10000) == 0 )
                {
                  if ( v17 )
                  {
                    a3[1] = v22;
                    a3[2] = v23;
                    a3[3] = v21;
                    a3[4] = v24;
                  }
                  else
                  {
                    a3[2] = v22;
                    v22 = v23;
                    a3[1] = v23;
                    a3[3] = v24;
                    a3[4] = v21;
                  }
                  v27 = *(_DWORD *)(*v25 + 88LL);
                  v28 = *(_DWORD *)(*v25 + 92LL);
                  a3[3] += v27;
                  a3[4] += v28;
                  a3[2] += v28;
                  v29 = v27 + v22;
                  v30 = v59;
                  v21 = v61;
                  a3[1] = v29;
                  a3[5] = v30 - v23;
                  a3[6] = v62 - v23;
                  a3[7] = v21 - v23;
                  if ( v62 == v30 )
                    a3[11] |= 0x8000u;
                  if ( (_DWORD)v21 == v60 )
                    a3[13] |= 0x8000u;
                }
                v31 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v32 = &WPP_RECORDER_INITIALIZED;
                v66 = v31;
                v68 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v32) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  v33 = W32GetUserSessionState(v32, v21);
                  LOBYTE(v34) = v68;
                  LOBYTE(v35) = v66;
                  WPP_RECORDER_AND_TRACE_SF_qddddddddd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v35,
                    v34,
                    *(_QWORD *)(v33 + 69152));
                }
                return 1LL;
              }
              v25 = v5 + 5;
            }
            v45 = v5 + 5;
            if ( (v26 & 1) != 0 )
            {
              a3[10] |= 8u;
              v45 = v25;
            }
            v25 = v5 + 5;
            if ( (*(_BYTE *)(v5[5] + 22) & 2) != 0 )
            {
              a3[11] |= 8u;
              v25 = v45;
            }
            if ( (*(_BYTE *)(*v25 + 22LL) & 4) != 0 )
              a3[13] |= 8u;
            if ( (*(_BYTE *)(*v25 + 22LL) & 8) != 0 )
            {
              a3[14] |= 8u;
              v25 = v5 + 5;
            }
            goto LABEL_23;
          }
          v22 = v44 - v58;
          v21 = v44 - v57;
        }
        else
        {
          v21 = v58;
          v22 = v57;
        }
        v23 = v55;
        v24 = v56;
        goto LABEL_16;
      }
LABEL_10:
      a3[9] |= 0x8000u;
      v18 = a3[9];
      goto LABEL_11;
    }
    if ( v3 == -6 )
    {
      v43 = v5[5];
      v17 = 0;
      if ( (*(_BYTE *)(v43 + 30) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(v43 + 16) & 4) == 0 )
          a3[9] = 0x10000;
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v52) = v50;
      LOBYTE(v53) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v53,
        v52,
        *(_QWORD *)(v51 + 69152),
        2,
        9,
        12,
        (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
        v3);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v47 = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v49,
        v48,
        *(_QWORD *)(v47 + 69152),
        2,
        9,
        11,
        (__int64)&WPP_e5d9e509e5ea359fb1405ea7b7a41ed0_Traceguids,
        v16);
    }
  }
  UserSetLastError(87);
  return 0LL;
}
