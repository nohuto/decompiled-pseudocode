/*
 * XREFs of xxxProcessHidInput @ 0x14001EB20
 * Callers:
 *     ProcessHidRawInput @ 0x14001F510 (ProcessHidRawInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1401AC778 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1401D1848 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     IsDeviceInputAllowed @ 0x1401D3570 (IsDeviceInputAllowed.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140259E5C (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z @ 0x140270360 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagWND@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1, void *a2, unsigned int a3)
{
  char v3; // si
  __int64 v4; // r14
  int v5; // r12d
  char v9; // di
  char v10; // bl
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  struct MOVESIZEDATA *v15; // rcx
  __int64 v16; // rdx
  char v17; // di
  __int16 v18; // bx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // si
  struct MOVESIZEDATA *v25; // rcx
  char v26; // di
  char v27; // bl
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rcx
  struct tagPROCESS_HID_REQUEST *v33; // rbx
  __int64 v34; // rax
  struct tagWND *v35; // rbx
  __int64 v36; // rdi
  const struct tagUIPI_INFO *v37; // r8
  UIPrivilegeIsolation *v38; // rcx
  char v39; // r15
  char v40; // r14
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int16 v44; // bx
  __int16 v45; // di
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  struct tagPROCESS_HID_TABLE *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct tagPROCESS_HID_REQUEST *v57; // rax
  struct tagWND *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  bool v63; // zf
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  const struct tagUIPI_INFO *v67; // r8
  __int64 v68; // rcx
  int v69; // ebx
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rsi
  const struct tagUIPI_INFO *v77; // r8
  UIPrivilegeIsolation *v78; // rcx
  bool v79; // al
  char v80; // r14
  __int64 v81; // rbx
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  __int64 v85; // rax
  int v86; // [rsp+20h] [rbp-A8h]
  int v87; // [rsp+60h] [rbp-68h]
  __int64 v88; // [rsp+68h] [rbp-60h]
  __int64 v89; // [rsp+70h] [rbp-58h]
  __int64 v90; // [rsp+80h] [rbp-48h] BYREF
  int v91; // [rsp+88h] [rbp-40h]
  char v93; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0;
  v87 = 1;
  v4 = 0LL;
  v88 = 0LL;
  v5 = 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v10 = 0;
  }
  if ( v9 || v10 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      5,
      20,
      15,
      (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
      (char)a1);
  }
  result = IsDeviceInputAllowed(a1);
  if ( (_DWORD)result )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v93);
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    {
      v3 = 1;
    }
    v16 = 0LL;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v17 = 0;
    }
    if ( v3 || v17 )
    {
      v18 = *(_WORD *)(*((_QWORD *)a1 + 55) + 44LL);
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v3;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69152),
        5,
        20,
        16,
        (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
        v18,
        a3);
    }
    v24 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v15, v16) + 18928) )
    {
      v31 = W32GetUserSessionState(v23, v22);
      v4 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v31 + 18928)) + 456);
      v88 = v4;
      v33 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v4 + 824));
      if ( v33 )
      {
        v34 = W32GetUserSessionState(v32, v22);
        v35 = (struct tagWND *)*((_QWORD *)v33 + 4);
        v36 = *(_QWORD *)(v34 + 18928);
        if ( !v35 || (v36 = *(_QWORD *)(*((_QWORD *)v35 + 2) + 464LL), *(char *)(*((_QWORD *)v35 + 5) + 20LL) >= 0) )
        {
          if ( (*((_DWORD *)a1 + 42) & 0x20) == 0
            || (*(_DWORD *)(*((_QWORD *)a1 + 57) + 368LL) & 0x10) != 0
            || (!(unsigned __int8)IsInputThread()
              ? (v38 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent() + 57) + 864LL))
              : (v38 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
                UIPrivilegeIsolation::CheckAccess(v38, (const struct tagUIPI_INFO *)(v36 + 472), v37)) )
          {
            if ( (unsigned int)PostHidInput(a1, a2, a3, v35, 0LL) )
            {
              v5 = 1;
              v87 = 0;
            }
          }
        }
      }
      else
      {
        v25 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v39 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v40 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v40 = 0;
        }
        if ( v39 || v40 )
        {
          v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
          v42 = *(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(v41 + 18928)) + 456);
          v43 = *((_QWORD *)a1 + 55);
          v44 = *(_WORD *)(v43 + 40);
          v45 = *(_WORD *)(v43 + 42);
          v48 = W32GetUserSessionState(v47, v46);
          LOBYTE(v49) = v40;
          LOBYTE(v50) = v39;
          WPP_RECORDER_AND_TRACE_SF_DDq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v50,
            v49,
            *(_QWORD *)(v48 + 69152),
            v86,
            20,
            18,
            (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
            v45,
            v44,
            v42);
          v24 = 0;
        }
        v4 = v88;
      }
    }
    else
    {
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v26 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v27 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v27 = 0;
      }
      if ( v26 || v27 )
      {
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69152),
          5,
          20,
          17,
          (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids);
      }
    }
    v51 = *(struct tagPROCESS_HID_TABLE **)(W32GetUserSessionState(v25, v22) + 224);
    v54 = W32GetUserSessionState(v53, v52);
    while ( 1 )
    {
      result = v54 + 224;
      if ( v51 == (struct tagPROCESS_HID_TABLE *)result )
      {
LABEL_102:
        if ( v5 )
        {
          result = *((unsigned int *)a1 + 46);
          if ( (result & 0x40) == 0 )
          {
            v85 = W32GetUserSessionState(v56, v55);
            result = CInputGlobals::UpdateInputGlobals(
                       *(_QWORD *)(v85 + 3056),
                       (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                       4LL);
          }
        }
        if ( !v93 )
          return UserSessionSwitchLeaveCritWithNonPaged();
        return result;
      }
      if ( *((int *)v51 + 20) > 0 )
      {
        v57 = HidIsRequestedByThisProcess(a1, v51);
        if ( v57 )
        {
          v56 = *((unsigned int *)v57 + 5);
          if ( (v56 & 1) != 0 && ((v56 & 2) == 0 || v87) )
          {
            v55 = *((_QWORD *)v57 + 5);
            if ( v55 )
            {
              (*((void (__fastcall **)(struct DEVICEINFO *))v57 + 5))(a1);
              goto LABEL_100;
            }
            v58 = (struct tagWND *)*((_QWORD *)v57 + 4);
            if ( *(_QWORD *)(*((_QWORD *)v58 + 2) + 456LL) != v4 )
            {
              v56 = *(_QWORD *)(W32GetUserSessionState(v56, 0LL) + 19176);
              if ( *((_QWORD *)v58 + 3) == v56 )
              {
                v59 = *((_QWORD *)v58 + 5);
                if ( *(char *)(v59 + 20) >= 0 && *(char *)(v59 + 19) >= 0 )
                  break;
              }
            }
          }
        }
      }
LABEL_100:
      v51 = *(struct tagPROCESS_HID_TABLE **)v51;
      v54 = W32GetUserSessionState(v56, v55);
      v4 = v88;
    }
    v60 = *((_QWORD *)a1 + 56);
    v61 = *(unsigned __int16 *)(v60 + 16);
    v62 = *(unsigned __int16 *)(v60 + 18);
    if ( (_WORD)v61 == 12 )
    {
      v63 = (_WORD)v62 == 1;
    }
    else
    {
      if ( (_WORD)v61 != 1 )
      {
        if ( (unsigned __int16)v61 >= 0xFF00u )
          goto LABEL_88;
        goto LABEL_74;
      }
      v63 = (_WORD)v62 == 9;
    }
    if ( v63 )
    {
LABEL_88:
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v80 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v24 = 1;
      }
      if ( v80 || v24 )
      {
        v81 = *(_QWORD *)(*((_QWORD *)v58 + 2) + 464LL);
        v82 = W32GetUserSessionState(WPP_GLOBAL_Control, v62);
        LOBYTE(v83) = v24;
        LOBYTE(v84) = v80;
        WPP_RECORDER_AND_TRACE_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v84,
          v83,
          *(_QWORD *)(v82 + 69152),
          5,
          20,
          19,
          (__int64)&WPP_daaec9a2452c30258aeab0c9883363ec_Traceguids,
          (char)v58,
          v81);
      }
      result = PostHidInput(a1, a2, a3, v58, 1uLL);
      v24 = 0;
      if ( !(_DWORD)result )
        goto LABEL_102;
      v5 = 1;
      goto LABEL_100;
    }
LABEL_74:
    if ( *(_QWORD *)(W32GetUserSessionState(v61, v62) + 18928) )
    {
      v66 = W32GetUserSessionState(v65, v64);
      if ( !UIPrivilegeIsolation::CheckAccess(
              (UIPrivilegeIsolation *)(*(_QWORD *)(*((_QWORD *)v58 + 2) + 464LL) + 472LL),
              (const struct tagUIPI_INFO *)(*(_QWORD *)(v66 + 18928) + 472LL),
              v67) )
      {
        v65 = *(_QWORD *)(*((_QWORD *)v58 + 2) + 456LL);
        if ( *(int *)(v65 + 12) >= 0 )
        {
          v68 = *(_QWORD *)(W32GetUserSessionState(v65, v64) + 18928);
          v69 = *(_DWORD *)(v68 + 480);
          v89 = *(_QWORD *)(v68 + 472);
          v71 = W32GetUserSessionState(v68, v70);
          v72 = *((_QWORD *)v58 + 2);
          v90 = v89;
          v73 = *(_QWORD *)(v71 + 18928);
          v91 = v69;
          EtwTraceUIPIInputError(v72, 0LL, v73, &v90, 5);
          goto LABEL_100;
        }
      }
    }
    v74 = W32GetUserSessionState(v65, v64) + 56;
    RIMLockShared(v74);
    if ( (*((_DWORD *)a1 + 42) & 0x2000) != 0 )
    {
      v75 = *(_QWORD *)(*((_QWORD *)a1 + 46) + 88LL);
      if ( !v75
        || *(int *)(v75 + 12) >= 0
        && ((v76 = *(_QWORD *)(*((_QWORD *)v58 + 2) + 464LL), !(unsigned __int8)IsInputThread())
         || (*((_DWORD *)a1 + 46) & 0x80u) == 0
          ? (v78 = (UIPrivilegeIsolation *)(*((_QWORD *)PtiCurrent() + 57) + 864LL))
          : (v78 = (UIPrivilegeIsolation *)(*((_QWORD *)a1 + 57) + 952LL)),
            v79 = UIPrivilegeIsolation::CheckAccess(v78, (const struct tagUIPI_INFO *)(v76 + 472), v77),
            v24 = 0,
            !v79) )
      {
        RIMUnlockShared(v74);
        goto LABEL_100;
      }
    }
    RIMUnlockShared(v74);
    goto LABEL_88;
  }
  return result;
}
