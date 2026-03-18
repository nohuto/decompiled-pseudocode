/*
 * XREFs of xxxSetWindowData @ 0x14004C92C
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x140085220 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x140085C90 (xxxSetWindowLong.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14004B768 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     IsParentBandValid @ 0x14012E59C (IsParentBandValid.c)
 *     GetCPD @ 0x140150018 (GetCPD.c)
 *     MapClientToServerPfn @ 0x1401505B0 (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1401506CC (MapClientNeuterToClientPfn.c)
 *     MapServerToClientPfn @ 0x140150F40 (MapServerToClientPfn.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x140179B8C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x14021CB3C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ValidateOwnerDepth @ 0x140224504 (ValidateOwnerDepth.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v22; // rcx
  unsigned __int8 v23; // al
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // r13
  __int64 v30; // rsi
  unsigned __int64 **v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 *v36; // rsi
  struct tagWND *v37; // r15
  int v38; // eax
  struct tagWND *v39; // rcx
  int v40; // eax
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 UserSessionState; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 *v53; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v55; // rdx
  struct tagWND *TopLevelHostForComponent; // r15
  __int64 v57; // rdx
  __int64 CPD; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 **v63; // [rsp+30h] [rbp-40h] BYREF
  __int64 v64; // [rsp+38h] [rbp-38h]
  ULONG_PTR v65[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v66[4]; // [rsp+50h] [rbp-20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v66);
  if ( a2 == -2 )
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 240);
    *(_QWORD *)(v10 + 240) = a3;
    goto LABEL_12;
  }
  if ( a2 != -4 )
  {
    switch ( a2 )
    {
      case -16:
        goto LABEL_29;
      case -21:
        v20 = *((_QWORD *)a1 + 5);
        v11 = *(_QWORD *)(v20 + 216);
        *(_QWORD *)(v20 + 216) = a3;
        goto LABEL_12;
      case -40:
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( CurrentProcessWin32Process == *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) )
        {
          v22 = *((_QWORD *)a1 + 5);
          v23 = *(_BYTE *)(v22 + 232);
          v11 = ((unsigned __int64)v23 >> 5) & 1;
          if ( a3 )
            v24 = v23 | 0x20;
          else
            v24 = v23 & 0xDF;
          *(_BYTE *)(v22 + 232) = v24;
          goto LABEL_12;
        }
        break;
      case -8:
        v25 = *((_QWORD *)a1 + 3);
        v26 = 0LL;
        v27 = 0LL;
        if ( v25 )
        {
          v28 = *(_QWORD *)(v25 + 8);
          if ( v28 )
            v27 = *(_QWORD *)(v28 + 24);
        }
        v29 = *((_QWORD *)a1 + 13);
        if ( v29 == v27 )
          BugCheckParameter3[0] = *((_QWORD *)a1 + 15);
        else
          BugCheckParameter3[0] = *((_QWORD *)a1 + 13);
        v30 = 120LL;
        if ( v29 != v27 )
          v30 = 104LL;
        v31 = (unsigned __int64 **)((char *)a1 + v30);
        v63 = v31;
        v33 = ValidateHwnd(a3);
        if ( !v33 && a3 )
          goto LABEL_70;
        if ( v29 == v27 )
        {
          v45 = PsGetCurrentProcessWin32Process(v32);
          v46 = v45;
          if ( v45 )
            v46 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v45 >> 64) & v45;
          if ( (unsigned int)ShouldSetNoOwner(v46, v33) )
            v33 = 0LL;
        }
        if ( !(unsigned int)IsParentBandValid(a1, v33) )
        {
LABEL_70:
          v41 = 87;
          goto LABEL_64;
        }
        if ( !v33
          || (UserSessionState = W32GetUserSessionState(v35, v34),
              !GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41394), 1u))
          && (v29 != v27
           || (v50 = W32GetUserSessionState(v49, v48), !GetProp(v33, *(unsigned __int16 *)(v50 + 41394), 1u)))
          && (v51 = *(_QWORD *)(v33 + 40), *(char *)(v51 + 20) >= 0)
          && *(char *)(v51 + 19) >= 0
          && ((*(_DWORD *)(v33 + 384) & 0x10) != 0 || (*((_DWORD *)a1 + 96) & 0x10) == 0) )
        {
          v36 = *v31;
          if ( v36 )
            v11 = *v36;
          else
            v11 = 0LL;
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v65, v33);
          if ( v29 != v27 )
          {
            v11 &= -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v33, 0LL, 0) != 0LL);
            goto LABEL_87;
          }
          v37 = (struct tagWND *)BugCheckParameter3[0];
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
            BugCheckParameter3,
            BugCheckParameter3[0]);
          xxxHandleOwnerSwitch(a1, (struct tagWND *)v33, v37);
          v38 = IsParentBandValid(a1, v33);
          v39 = a1;
          if ( !v38 || (v40 = ValidateOwnerDepth(a1, v33), v39 = a1, !v40) )
          {
            xxxHandleOwnerSwitch(v39, v37, (struct tagWND *)v33);
            UserSetLastError(87);
LABEL_85:
            v11 = 0LL;
LABEL_86:
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
LABEL_87:
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v65);
            goto LABEL_12;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          {
LABEL_58:
            if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1282LL);
            if ( v33 && (*(_BYTE *)(_HMPheFromObject(v33) + 25) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1283LL);
            goto LABEL_85;
          }
          if ( v33 )
          {
            if ( (*(_BYTE *)(_HMPheFromObject(v33) + 25) & 1) != 0 )
              goto LABEL_58;
            v64 = v33;
            HMAssignmentLock(&v63, 0LL);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v33);
            if ( WindowCloakStateComponentUIAware )
            {
              zzzSetWindowCompositionCloak(a1, WindowCloakStateComponentUIAware);
            }
            else
            {
              TopLevelHostForComponent = a1;
              if ( (unsigned int)CoreWindowProp::IsComponent(a1, v55) )
                TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1, v57);
              if ( TopLevelHostForComponent
                && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0 )
              {
                zzzUpdateWindowCompositionCloak(a1, 1LL, 2LL);
              }
            }
          }
          else
          {
            HMAssignmentUnlock(v63);
          }
          v52 = *((_QWORD *)a1 + 15);
          if ( v52 )
            v26 = *(_QWORD *)(v52 + 48);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = v26;
          v63 = (unsigned __int64 **)((char *)a1 + 120);
          v64 = v52;
          HMAssignmentLock(&v63, 0LL);
          xxxInheritWindowMonitor(a1, (struct tagWND *)v33, 0);
          goto LABEL_86;
        }
        break;
      case -12:
        v42 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v42 + 31) & 0xC0) == 0x40 )
        {
          v11 = *(_QWORD *)(v42 + 320);
          *(_QWORD *)(v42 + 320) = a3;
        }
        else
        {
          v53 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
          v11 = 0LL;
          if ( v53 )
            v11 = *v53;
          if ( a3 )
          {
            v60 = ValidateHmenu(a3, 1LL);
            v66[2] = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)v66, v60);
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v66) )
              v11 = 0LL;
            else
              LockWndMenuWorker(a1, 0, v66);
          }
          else
          {
            UnlockWndMenuWorker(a1, 0);
          }
        }
        goto LABEL_12;
      case -20:
LABEL_29:
        v11 = (int)xxxSetWindowStyle(a1);
        goto LABEL_12;
      case -6:
        v59 = *((_QWORD *)a1 + 5);
        v11 = *(_QWORD *)(v59 + 32);
        *(_QWORD *)(v59 + 32) = a3;
LABEL_12:
        v9 = v11;
        goto LABEL_13;
      default:
        UserSetLastError(1413);
        v9 = 0LL;
LABEL_13:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v66);
        return v9;
    }
LABEL_63:
    v41 = 5;
LABEL_64:
    UserSetLastError(v41);
    goto LABEL_40;
  }
  v13 = *((_QWORD *)a1 + 2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 520), 0, 0) & 1) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1022LL);
    goto LABEL_63;
  }
  v14 = PsGetCurrentProcessWin32Process(v13);
  v15 = v14;
  if ( v14 )
    v15 = -(__int64)(*(_QWORD *)v14 != 0LL) & v14;
  if ( v15 != *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) )
    goto LABEL_63;
  v16 = *((_QWORD *)a1 + 5);
  v17 = *(unsigned __int16 *)(v16 + 42);
  if ( (v17 & 0x8000u) != 0LL )
    goto LABEL_63;
  v11 = *(_QWORD *)(v16 + 120);
  if ( (*(_BYTE *)(v16 + 18) & 4) == 0 )
  {
    if ( (v17 & 0xFFFF2FFF) == 0x2A5
      || (v18 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), v11, a4),
          v16 = *((_QWORD *)a1 + 5),
          v11 = v18,
          v18 == *(_QWORD *)(v16 + 120)) )
    {
      if ( a4 != ((*(unsigned __int8 *)(v16 + 18) >> 3) & 1) )
      {
        CPD = GetCPD(a1, 34 - (unsigned int)(a4 != 0), v11);
        if ( CPD )
          v11 = CPD;
      }
    }
    goto LABEL_23;
  }
  v11 = MapServerToClientPfn(*(_QWORD *)(v16 + 120), a4);
  if ( v11 )
  {
LABEL_23:
    if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
    {
      LOBYTE(v17) = 7;
      v43 = HMValidateHandleNoRip(a3, v17);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v43 + 40);
        a3 = *(_QWORD *)(v44 + 16);
        a4 = *(_WORD *)(v44 + 24) & 2;
      }
    }
    v19 = MapClientToServerPfn(a3);
    if ( v19 )
    {
      SetOrClrWF(0LL, a1, 520LL, 1LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v19;
    }
    else
    {
      SetOrClrWF(a4 != 0, a1, 520LL, 1LL);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
        SetOrClrWF(0LL, a1, 516LL, 1LL);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
    }
    _InterlockedOr(v61, 0);
    goto LABEL_12;
  }
LABEL_40:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v66);
  return 0LL;
}
