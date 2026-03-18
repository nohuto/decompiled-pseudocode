/*
 * XREFs of FindQMsg @ 0x1400955A0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140095B80 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140096B60 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     FreeDdeXact @ 0x1402930F0 (FreeDdeXact.c)
 */

__int64 *__fastcall FindQMsg(__int64 a1, __int64 *a2, _QWORD *a3, unsigned int a4, unsigned int a5, int a6)
{
  __int64 *v6; // r12
  __int64 *v7; // r15
  __int64 **v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // r14
  unsigned int v21; // eax
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  int v28; // eax
  bool v29; // bp
  bool v30; // r14
  __int64 v31; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // di
  bool v36; // r14
  __int64 v37; // r15
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 UserSessionState; // rax
  __int64 *v44; // [rsp+70h] [rbp-48h]
  __int64 v45; // [rsp+C0h] [rbp+8h]

  v45 = a1;
  v6 = (__int64 *)*a2;
  v7 = 0LL;
  v9 = (__int64 **)a2;
  v44 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v6 )
        return v7;
      v10 = v6[2];
      v11 = 0LL;
      PsGetCurrentThreadWin32Thread(a1);
      a1 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
      if ( (unsigned __int64)(unsigned __int16)v10 < *(_QWORD *)(a1 + 8) )
        break;
LABEL_27:
      if ( !v6[2] )
        goto LABEL_8;
      if ( *((_DWORD *)v6 + 6) != 786 )
        goto LABEL_79;
      v14 = *v9;
      v15 = 0LL;
      if ( !*v9 )
        goto LABEL_34;
      do
      {
        v23 = *((_DWORD *)v14 + 6) == 786;
        v24 = v15 + 1;
        v14 = (__int64 *)*v14;
        if ( !v23 )
          v24 = v15;
        v15 = v24;
      }
      while ( v14 );
      if ( v24 > 1 )
      {
LABEL_79:
        v25 = v45;
      }
      else
      {
LABEL_34:
        v25 = v45;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v45 + 480) + 8LL), 0xFFFFFF7F);
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v45 + 480) + 4LL), 0xFFFFFF7F);
      }
      v26 = *(_QWORD *)(v25 + 464);
      if ( *(__int64 **)(v26 + 80) == v6 && *(_QWORD *)(v26 + 72) == v25 )
      {
        EtwTraceInputQueueUnLocked(v26, v14, v15);
        v35 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(v25 + 464) + 72LL);
          CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(WPP_GLOBAL_Control);
          if ( CurrentThreadWin32Thread )
            v41 = *CurrentThreadWin32Thread;
          else
            LOBYTE(v41) = 0;
          v42 = *(_QWORD *)(v25 + 464);
          UserSessionState = W32GetUserSessionState(v40, v39);
          WPP_RECORDER_AND_TRACE_SF_qqq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v35,
            v36,
            *(_QWORD *)(UserSessionState + 69152),
            4,
            18,
            31,
            (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
            v42,
            v41,
            v37);
          v25 = v45;
        }
        *(_QWORD *)(*(_QWORD *)(v25 + 464) + 72LL) = 0LL;
      }
      v27 = (__int64 *)v6[1];
      if ( v27 )
        *v27 = *v6;
      if ( *v6 )
        *(_QWORD *)(*v6 + 8) = v6[1];
      v9 = (__int64 **)a2;
      if ( (__int64 *)*a2 == v6 )
        *a2 = *v6;
      if ( (__int64 *)a2[1] == v6 )
        a2[1] = v6[1];
      v28 = *((_DWORD *)v6 + 25);
      if ( (v28 & 0x2000) == 0 && (v28 & 0x4000) == 0 && (v28 & 0x10000) == 0 )
      {
        --*((_DWORD *)a2 + 4);
        v29 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          WPP_RECORDER_AND_TRACE_SF_qiqdd(*((_QWORD *)WPP_GLOBAL_Control + 3), v29, v30, *(_QWORD *)(v31 + 69152));
          v9 = (__int64 **)a2;
        }
      }
      if ( v6 == v9[4] )
        v9[4] = 0LL;
      FreeQEntry((struct tagQMSG *)v6);
      v7 = v44;
LABEL_56:
      v6 = *v9;
    }
    v16 = W32GetUserSessionState(a1, v14);
    v19 = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19928) * (unsigned int)(unsigned __int16)v10
        + *(_QWORD *)(v16 + 19920);
    v20 = (_QWORD *)HMPkheFromPhe(v19);
    LOWORD(v10) = WORD1(v10) & 0x7FFF;
    if ( (WORD1(v10) & 0x7FFF) != *(_WORD *)(v19 + 26)
      && (_WORD)v10 != 0x7FFF
      && ((_WORD)v10 || !PsGetCurrentProcessWow64Process(a1, v14))
      || (*(_BYTE *)(v19 + 25) & 1) != 0
      || *(_BYTE *)(v19 + 24) != 1
      || (v11 = (_QWORD *)*v20) == 0LL )
    {
      v9 = (__int64 **)a2;
      goto LABEL_27;
    }
LABEL_8:
    if ( a6 )
    {
      v33 = a3 ? *a3 : 0LL;
      if ( v33 == v6[2] && *((_DWORD *)v6 + 6) == -2147482652 )
      {
        LOBYTE(v14) = 11;
        v34 = HMValidateHandleNoRip(v6[5], v14);
        a1 = v34;
        if ( v34 )
        {
          if ( (*(_DWORD *)(v34 + 64) & 0x200) != 0 )
          {
            FreeDdeXact((struct _HEAD *)v34);
            v9 = (__int64 **)a2;
            DelQEntry(a2, v6, 1LL);
            goto LABEL_56;
          }
        }
      }
    }
    if ( !a3 || a3 == v11 || a3 == (_QWORD *)1 && !v11 )
      break;
    while ( v11 )
    {
      a1 = *(unsigned __int8 *)(v11[5] + 31LL);
      LOBYTE(a1) = a1 & 0xC0;
      if ( (_BYTE)a1 != 64 )
        break;
      v11 = (_QWORD *)v11[13];
      if ( a3 == v11 )
      {
        v22 = 1;
        goto LABEL_21;
      }
    }
    v22 = 0;
LABEL_21:
    if ( v22 )
      break;
LABEL_22:
    v6 = (__int64 *)*v6;
    v9 = (__int64 **)a2;
  }
  v21 = *((_DWORD *)v6 + 6);
  if ( v21 >= 0x800003E1 && v21 <= 0x800003E8 )
    v21 &= ~0x80000000;
  a1 = a4;
  if ( a4 )
  {
    if ( a4 > a5 )
    {
      if ( v21 >= a5 && v21 <= a4 )
        goto LABEL_22;
    }
    else
    {
      if ( v21 < a4 )
        goto LABEL_22;
LABEL_59:
      if ( v21 > a5 )
        goto LABEL_22;
    }
  }
  else if ( a5 != -1 )
  {
    goto LABEL_59;
  }
  if ( a6 )
  {
    if ( !v7 )
      v7 = v6;
    v44 = v7;
    goto LABEL_22;
  }
  return v6;
}
