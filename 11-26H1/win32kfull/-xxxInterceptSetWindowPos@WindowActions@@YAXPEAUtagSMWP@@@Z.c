/*
 * XREFs of ?xxxInterceptSetWindowPos@WindowActions@@YAXPEAUtagSMWP@@@Z @ 0x140239A38
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptSetWindowPos(WindowActions *this, struct tagSMWP *a2)
{
  __int64 v2; // r14
  char v3; // si
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // r12
  char v9; // di
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  struct MOVESIZEDATA *v15; // rcx
  char v16; // di
  char v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  __int64 v22; // rax
  char v23; // di
  char v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // eax
  char v29; // di
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  int v34; // eax
  char v35; // di
  char v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  char v41; // di
  char v42; // bl
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  __int64 v46; // rax
  char v47; // di
  char v48; // bl
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // di
  int v53; // ebx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  int v57; // eax
  __int64 *v58; // rbx
  int v59; // edi
  struct tagTHREADINFO *v60; // rax
  __int16 v61; // [rsp+38h] [rbp-79h]
  int v62; // [rsp+58h] [rbp-59h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+60h] [rbp-51h] BYREF
  int v64; // [rsp+78h] [rbp-39h] BYREF
  int v65; // [rsp+7Ch] [rbp-35h]
  int v66; // [rsp+80h] [rbp-31h]
  int v67; // [rsp+84h] [rbp-2Dh]
  int v68; // [rsp+88h] [rbp-29h]
  int v69; // [rsp+8Ch] [rbp-25h]
  int v70; // [rsp+90h] [rbp-21h]
  __int64 v71; // [rsp+98h] [rbp-19h]
  int v72; // [rsp+C8h] [rbp+17h]
  int v73; // [rsp+CCh] [rbp+1Bh]

  v2 = *((_QWORD *)this + 5);
  v3 = 0;
  v62 = 0;
  v5 = 0;
  if ( *((int *)this + 7) <= 0 )
    return;
  do
  {
    v6 = HMValidateHandleNoSecure(*(_QWORD *)v2, 1);
    v8 = (struct tagWND *)v6;
    if ( !v6 || (*(_DWORD *)(v2 + 32) & 0x1000000) != 0 || (*(_DWORD *)(v6 + 384) & 0x10) == 0 )
      goto LABEL_110;
    ++v5;
    *(_QWORD *)v2 = 0LL;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v3 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v9 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v9 = 0;
    }
    if ( v3 || v9 )
    {
      v10 = *(_QWORD *)v6;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        36,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
        v10);
    }
    memset_0(&v64, 0, 0x60uLL);
    if ( (*(_DWORD *)(v2 + 32) & 0x10) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v64 = 16;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
      {
        v3 = 0;
        v16 = 0;
      }
      else
      {
        v16 = 1;
        v3 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v17 = 0;
      }
      if ( v16 || v17 )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 69152),
          5,
          4,
          37,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
      }
    }
    v21 = *(_DWORD *)(v2 + 32);
    if ( (v21 & 4) == 0 )
    {
      v22 = *(_QWORD *)(v2 + 8);
      v64 |= 8u;
      v71 = v22;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v23 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v24 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v24 = 0;
      }
      if ( v23 || v24 )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 69152),
          5,
          4,
          38,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v71);
      }
      v21 = *(_DWORD *)(v2 + 32);
      if ( (v21 & 0x200) != 0 )
        v65 |= 0x10u;
    }
    if ( (v21 & 2) == 0 )
    {
      v28 = *(_DWORD *)(v2 + 16);
      v64 |= 2u;
      v67 = v28;
      v68 = *(_DWORD *)(v2 + 20);
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v29 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v30 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v30 = 0;
      }
      if ( v29 || v30 )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69152),
          5,
          4,
          39,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v67,
          v68);
      }
    }
    if ( (*(_DWORD *)(v2 + 32) & 1) == 0 )
    {
      v34 = *(_DWORD *)(v2 + 24);
      v64 |= 4u;
      v69 = v34;
      v70 = *(_DWORD *)(v2 + 28);
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v35 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v36 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v36 = 0;
      }
      if ( v35 || v36 )
      {
        v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69152),
          5,
          4,
          40,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v69,
          v70);
      }
    }
    v40 = *(unsigned int *)(v2 + 32);
    if ( (*(_BYTE *)(*((_QWORD *)v8 + 5) + 31LL) & 0x10) != 0 )
    {
      if ( (v40 & 0x80u) == 0LL )
        goto LABEL_87;
      v64 |= 1u;
      v66 = 0;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v41 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v42 = 0;
      }
      if ( !v41 && !v42 )
        goto LABEL_87;
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
      v61 = 42;
    }
    else
    {
      if ( (v40 & 0x40) == 0 )
        goto LABEL_87;
      v64 |= 1u;
      v66 = 1;
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v41 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v42 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v42 = 0;
      }
      if ( !v41 && !v42 )
        goto LABEL_87;
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
      v61 = 41;
    }
    LOBYTE(v45) = v42;
    LOBYTE(v44) = v41;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v44,
      v45,
      *(_QWORD *)(v43 + 69152),
      5,
      4,
      v61,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
LABEL_87:
    if ( (*(_DWORD *)(v2 + 156) & 0x200) != 0 )
    {
      v46 = ValidateHmonitor(*(_QWORD *)(v2 + 128));
      v65 |= 0x400u;
      v40 = *(unsigned int *)(*(_QWORD *)(v46 + 40) + 44LL);
      v72 = *(_DWORD *)(*(_QWORD *)(v46 + 40) + 44LL);
      v73 = *(_DWORD *)(*(_QWORD *)(v46 + 40) + 48LL);
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v47 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v48 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v48 = 0;
      }
      if ( v47 || v48 )
      {
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
        LOBYTE(v50) = v48;
        LOBYTE(v51) = v47;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v51,
          v50,
          *(_QWORD *)(v49 + 69152),
          5,
          4,
          43,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v72,
          v73);
      }
    }
    if ( v64 )
    {
      v60 = PtiCurrent((__int64)v15);
      Win32HM_LockIntoThread<0>((__int64)v60, (__int64)v8, BugCheckParameter3);
      xxxSendMessage(v8, 0x346u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
      {
        v3 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v52 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v52 = 0;
      }
      if ( v3 || v52 )
      {
        v53 = *(_DWORD *)(v2 + 32);
        v54 = W32GetUserSessionState(WPP_GLOBAL_Control, v40);
        LOBYTE(v55) = v52;
        LOBYTE(v56) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v56,
          v55,
          *(_QWORD *)(v54 + 69152),
          5,
          4,
          44,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids,
          v53);
      }
      v3 = 0;
    }
LABEL_110:
    v57 = *((_DWORD *)this + 7);
    v2 += 168LL;
    ++v62;
  }
  while ( v62 < v57 );
  if ( v5 > 0 && v5 < v57 )
  {
    v58 = (__int64 *)*((_QWORD *)this + 5);
    v59 = 0;
    if ( v57 > 0 )
    {
      do
      {
        if ( *v58 )
        {
          if ( !HMValidateHandleNoSecure(*v58, 1) )
            *v58 = 0LL;
        }
        v58 += 21;
        ++v59;
      }
      while ( v59 < *((_DWORD *)this + 7) );
    }
  }
}
