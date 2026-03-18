/*
 * XREFs of ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x14001144C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     IsImmersiveApplicationBandId @ 0x1400112F8 (IsImmersiveApplicationBandId.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?ComputeShowCommandSource@@YA?AW4ShowCommandSource@@H@Z @ 0x1401DD598 (-ComputeShowCommandSource@@YA-AW4ShowCommandSource@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402DCA30 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxGetShellShowWindowCommand(__int64 a1, __int64 *a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v5; // r14d
  char v8; // bp
  int v9; // ecx
  char v11; // r13
  char v12; // r12
  __int16 v13; // bx
  __int64 v14; // rdi
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 v23; // rdx
  bool v24; // bl
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  char v28; // bl
  bool v29; // bl
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int128 v33; // xmm6
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r12d
  char v38; // bl
  bool v39; // di
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *v43; // r9
  __int64 v44; // rdx
  bool v45; // di
  __int64 v46; // rax
  int v47; // edx
  int v48; // r8d
  char v49; // r12
  bool v50; // bl
  bool v51; // di
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  bool v55; // di
  bool v56; // r12
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rbx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  bool v65; // di
  bool v66; // r12
  bool v67; // di
  __int64 v68; // rbx
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  __int16 v72; // [rsp+30h] [rbp-E8h]
  char v73; // [rsp+40h] [rbp-D8h]
  bool v74; // [rsp+50h] [rbp-C8h]
  unsigned int v75[5]; // [rsp+60h] [rbp-B8h] BYREF
  int v76; // [rsp+74h] [rbp-A4h]
  __int128 v77; // [rsp+78h] [rbp-A0h]

  v5 = a3;
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x201) )
  {
    v8 = 1;
    v9 = *(_DWORD *)(a2[5] + 236);
    if ( v9 == 1 || (unsigned int)IsImmersiveApplicationBandId(v9) )
    {
      if ( IsTrayWindow(a2, 2LL) )
      {
        if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
          && (*(_DWORD *)(a4 + 20) & 0x20000) != 0 )
        {
          v11 = *(_BYTE *)(a4 + 24);
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
            || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v12 = 0;
          }
          v74 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v13 = *(_WORD *)(a4 + 24);
            v14 = *a2;
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v16) = v74;
            LOBYTE(v17) = v12;
            WPP_RECORDER_AND_TRACE_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v17,
              v16,
              *(_QWORD *)(UserSessionState + 69152),
              4,
              12,
              21,
              (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
              v14,
              v13);
          }
          if ( ((v11 - 1) & 0xFD) == 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
              || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v18 = 0;
            }
            v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
              LOBYTE(v21) = v19;
              LOBYTE(v22) = v18;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v22,
                v21,
                *(_QWORD *)(v20 + 69152),
                4,
                12,
                22,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                v11);
            }
            *((_DWORD *)a2 + 95) |= 2u;
            *(_DWORD *)a1 = 1;
            *(_BYTE *)(a1 + 4) = v11;
            goto LABEL_8;
          }
        }
        if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x200)
          && !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)1) )
        {
          if ( (_BYTE)v5 == 1 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v8 = 0;
            }
            v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
              LOBYTE(v26) = v24;
              LOBYTE(v27) = v8;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v27,
                v26,
                *(_QWORD *)(v25 + 69152),
                4,
                12,
                23,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
            }
            v28 = 3;
LABEL_49:
            *((_DWORD *)a2 + 95) |= 2u;
            *(_DWORD *)a1 = 2;
            *(_BYTE *)(a1 + 4) = v28;
            goto LABEL_8;
          }
          if ( (_BYTE)v5 == 4 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v8 = 0;
            }
            v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
              LOBYTE(v31) = v29;
              LOBYTE(v32) = v8;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v32,
                v31,
                *(_QWORD *)(v30 + 69152),
                4,
                12,
                24,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids);
            }
            v28 = 15;
            goto LABEL_49;
          }
          goto LABEL_6;
        }
        v33 = 0LL;
        v34 = ComputeShowCommandSource(v5);
        v37 = v34;
        if ( v34 == 4 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
            || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v38 = 0;
          }
          v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v40 = W32GetUserSessionState(v36, WPP_GLOBAL_Control);
            LOBYTE(v41) = v39;
            LOBYTE(v42) = v38;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v42,
              v41,
              *(_QWORD *)(v40 + 69152),
              4,
              12,
              25,
              (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
              v5);
          }
          memset_0(v75, 0, 0x68uLL);
          if ( !CallShell::xxxShowWindowPolicyHandler((CallShell *)a2, (struct tagWND *)v5, (unsigned int)v75, v43) )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v8 = 0;
            }
            v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
              goto LABEL_68;
            v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
            v73 = v5;
            v72 = 26;
LABEL_67:
            LOBYTE(v48) = v45;
            LOBYTE(v47) = v8;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v47,
              v48,
              *(_QWORD *)(v46 + 69152),
              3,
              12,
              v72,
              (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
              v73);
LABEL_68:
            *(_DWORD *)a1 = 0;
            goto LABEL_7;
          }
          v49 = v76;
          v50 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v50 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v44);
            LOBYTE(v53) = v51;
            LOBYTE(v54) = v50;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v54,
              v53,
              *(_QWORD *)(v52 + 69152),
              4,
              12,
              27,
              (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
              v49);
          }
          v35 = 15LL;
          if ( (v49 & 0xF) != 0 )
          {
            switch ( v49 & 0xF )
            {
              case 1:
                LOBYTE(v5) = -1;
                break;
              case 2:
                if ( (_BYTE)v5 != 8 )
                  v35 = 3LL;
                LOBYTE(v5) = v35;
                break;
              case 3:
                v33 = v77;
                LOBYTE(v5) = 19;
                break;
              default:
                if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
                  || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
                {
                  v8 = 0;
                }
                v45 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( !v8 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
                  goto LABEL_68;
                v46 = W32GetUserSessionState(WPP_GLOBAL_Control, 15LL);
                v73 = v5;
                v72 = 28;
                goto LABEL_67;
            }
          }
          if ( (v49 & 0x10) != 0 )
          {
            v55 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v57 = *a2;
              v58 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
              LOBYTE(v59) = v56;
              LOBYTE(v60) = v55;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v60,
                v59,
                *(_QWORD *)(v58 + 69152),
                4,
                12,
                29,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                v57);
            }
            *((_DWORD *)a2 + 95) |= 4u;
          }
          else
          {
            v65 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v61 = *a2;
              v62 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
              LOBYTE(v63) = v66;
              LOBYTE(v64) = v65;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v64,
                v63,
                *(_QWORD *)(v62 + 69152),
                4,
                12,
                30,
                (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
                v61);
            }
            *((_DWORD *)a2 + 95) &= ~4u;
          }
          v37 = 4;
        }
        else if ( !v34 )
        {
LABEL_123:
          *(_DWORD *)a1 = v37;
          *(_BYTE *)(a1 + 4) = v5;
          *(_WORD *)(a1 + 5) = 0;
          *(_BYTE *)(a1 + 7) = 0;
          *(_OWORD *)(a1 + 8) = v33;
          return a1;
        }
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v8 = 0;
        }
        v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v68 = *a2;
          v69 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
          LOBYTE(v70) = v67;
          LOBYTE(v71) = v8;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v71,
            v70,
            *(_QWORD *)(v69 + 69152),
            4,
            12,
            31,
            (__int64)&WPP_5e7e6b73f88c39f598e456a489ba10b5_Traceguids,
            v68);
        }
        *((_DWORD *)a2 + 95) |= 2u;
        goto LABEL_123;
      }
    }
  }
  if ( (_BYTE)v5 == 19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 412LL);
LABEL_6:
  *(_DWORD *)a1 = 0;
LABEL_7:
  *(_BYTE *)(a1 + 4) = v5;
LABEL_8:
  *(_WORD *)(a1 + 5) = 0;
  *(_BYTE *)(a1 + 7) = 0;
  *(_OWORD *)(a1 + 8) = 0LL;
  return a1;
}
