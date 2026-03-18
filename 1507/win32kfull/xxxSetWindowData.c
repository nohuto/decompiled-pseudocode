/*
 * XREFs of xxxSetWindowData @ 0x1C0067F10
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C0067CE0 (NtUserSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C0080CF0 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C00FBAB4 (xxxSetWindowLongPtr.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     IsWindowShellCloaked @ 0x1C0043140 (IsWindowShellCloaked.c)
 *     LockWndMenu @ 0x1C004F214 (LockWndMenu.c)
 *     MapClientToServerPfn @ 0x1C0059BB8 (MapClientToServerPfn.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxInheritWindowMonitor @ 0x1C005BED4 (xxxInheritWindowMonitor.c)
 *     MapClientNeuterToClientPfn @ 0x1C005C9FC (MapClientNeuterToClientPfn.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsParentBandValid @ 0x1C006208C (IsParentBandValid.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxClientWOWGetProcModule @ 0x1C00E9350 (xxxClientWOWGetProcModule.c)
 *     ValidateOwnerDepth @ 0x1C00F285C (ValidateOwnerDepth.c)
 *     UnlockWndMenu @ 0x1C00FA890 (UnlockWndMenu.c)
 *     GetCPD @ 0x1C00FA93C (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C0128AEC (MapServerToClientPfn.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  int v7; // ecx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int16 v11; // ax
  unsigned __int8 v12; // r11
  __int64 v13; // r10
  __int64 CPD; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  char *v17; // r13
  __int64 v18; // r8
  int v19; // ebp
  _QWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int16 v24; // r10
  BOOL v25; // eax
  struct tagWND *v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned int WindowCloakState; // eax
  struct tagWND *v32; // rcx
  __int64 v33; // r8
  int *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rsi
  __int64 *v38; // rax
  __int64 v39; // rax
  unsigned __int8 v40; // cl
  char v41; // cl
  signed __int32 v42[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v43[3]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v44[3]; // [rsp+38h] [rbp-60h] BYREF
  int v45; // [rsp+50h] [rbp-48h] BYREF
  int v46; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  if ( a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) )
    {
      v40 = *((_BYTE *)a1 + 290);
      v8 = (v40 >> 2) & 1;
      if ( v5 )
        v41 = v40 | 4;
      else
        v41 = v40 & 0xFB;
      *((_BYTE *)a1 + 290) = v41;
      return v8;
    }
    goto LABEL_12;
  }
  if ( a2 == -21 )
  {
    v8 = *((_QWORD *)a1 + 32);
    *((_QWORD *)a1 + 32) = a3;
    return v8;
  }
  if ( ((a2 + 20) & 0xFFFFFFFB) == 0 )
    return (int)xxxSetWindowStyle(a1);
  switch ( a2 )
  {
    case -12:
      if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
      {
        v8 = *((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 24) = a3;
      }
      else
      {
        v37 = (_QWORD *)((char *)a1 + 192);
        v38 = (__int64 *)*((_QWORD *)a1 + 24);
        v8 = 0LL;
        if ( v38 )
          v8 = *v38;
        if ( a3 )
        {
          v39 = ValidateHmenu(a3);
          if ( v39 )
            LockWndMenu((__int64)a1, v37, v39);
          else
            return 0LL;
        }
        else
        {
          UnlockWndMenu(a1, (char *)a1 + 192);
        }
      }
      return v8;
    case -8:
      v17 = (char *)a1 + 88;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v17 = (char *)a1 + 104;
        v19 = 1;
      }
      else
      {
        v19 = 0;
      }
      v20 = *(_QWORD **)v17;
      v46 = v19;
      v22 = ValidateHwnd(v18);
      if ( !v22 && v5 )
        goto LABEL_40;
      if ( v19 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v22) )
          v22 = 0LL;
      }
      if ( !IsParentBandValid((__int64)a1, v22) )
      {
LABEL_40:
        v7 = 87;
        goto LABEL_13;
      }
      v24 = gatomBrokeredForeground;
      if ( v22 && GetProp((__int64)a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
        goto LABEL_12;
      if ( v19 )
      {
        if ( !v22 )
          goto LABEL_53;
        if ( GetProp(v22, v24, 1LL) )
          goto LABEL_12;
      }
      if ( v22 && (*(char *)(v22 + 44) < 0 || *(char *)(v22 + 43) < 0) )
        goto LABEL_12;
LABEL_53:
      if ( *(_QWORD *)v17 )
        v8 = **(_QWORD **)v17;
      else
        v8 = 0LL;
      v43[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v43;
      v43[1] = v22;
      if ( v22 )
        ++*(_DWORD *)(v22 + 8);
      if ( !v46 )
      {
        v36 = -(__int64)(xxxSetParentWorker(a1, v22) != 0);
        v8 &= v36;
        goto LABEL_78;
      }
      v44[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v44;
      v44[1] = v20;
      if ( v20 )
        ++*((_DWORD *)v20 + 2);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v22, (struct tagWND *)v20);
      v25 = IsParentBandValid((__int64)a1, v22);
      v26 = a1;
      if ( v25 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1, v22) )
        {
          v28 = gSharedInfo[2];
          v29 = gSharedInfo[1];
          v30 = v28 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v30 + v29 + 17) & 1) == 0 )
          {
            if ( !v22 )
            {
              HMAssignmentUnlock(v17);
              goto LABEL_72;
            }
            v27 = v28 * (unsigned int)(unsigned __int16)*(_DWORD *)v22;
            if ( (*(_BYTE *)(v27 + v29 + 17) & 1) == 0 )
            {
              HMAssignmentLock(v17, v22);
              WindowCloakState = GetWindowCloakState(v22);
              v32 = a1;
              if ( WindowCloakState )
              {
                v33 = WindowCloakState;
                v34 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked((__int64)a1, 1) )
                {
LABEL_72:
                  xxxInheritWindowMonitor(a1, v22, 1);
LABEL_76:
                  ThreadUnlock1(v30, v27);
LABEL_78:
                  ThreadUnlock1(v36, v35);
                  return v8;
                }
                v45 = 0;
                v34 = &v45;
                v33 = 2LL;
                v32 = a1;
              }
              zzzSetWindowCompositionCloak(v32, v34, v33);
              goto LABEL_72;
            }
          }
LABEL_75:
          v8 = 0LL;
          goto LABEL_76;
        }
        v26 = a1;
      }
      xxxHandleOwnerSwitch(v26, (struct tagWND *)v20, (struct tagWND *)v22);
      UserSetLastError(87);
      goto LABEL_75;
    case -6:
      v8 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = a3;
      return v8;
    case -4:
      if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) )
      {
        v11 = *((_WORD *)a1 + 33);
        if ( v11 >= 0 )
        {
          v12 = *((_BYTE *)a1 + 42);
          if ( (v12 & 4) != 0 )
          {
            v8 = MapServerToClientPfn(*((_QWORD *)a1 + 18), a4);
            if ( !v8 )
              return 0LL;
            goto LABEL_26;
          }
          if ( (v11 & 0x3FFF) == 0x2A5 )
          {
            v8 = *((_QWORD *)a1 + 18);
          }
          else
          {
            v8 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), *((_QWORD *)a1 + 18), a4);
            if ( v8 != v13 )
            {
LABEL_26:
              if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v9) = 7;
                v15 = HMValidateHandleNoRip(v5, v9);
                if ( v15 )
                {
                  v5 = *(_QWORD *)(v15 + 48);
                  a4 = *(_WORD *)(v15 + 56) & 2;
                }
              }
              v16 = MapClientToServerPfn(v5);
              if ( v16 )
              {
                SetOrClrWF(0, a1, 0x208u, 1);
                SetOrClrWF(1, a1, 0x204u, 1);
                *((_QWORD *)a1 + 18) = v16;
                _InterlockedOr(v42, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 0x208u, 1);
                if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
                  SetOrClrWF(0, a1, 0x204u, 1);
                *((_QWORD *)a1 + 18) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), v5, a4);
                _InterlockedOr(v42, 0);
                *((_WORD *)a1 + 32) = xxxClientWOWGetProcModule(*((_QWORD *)a1 + 18));
              }
              return v8;
            }
          }
          if ( a4 != ((v12 >> 3) & 1) )
          {
            v9 = 2 - (unsigned int)(a4 != 0);
            if ( (a4 != 0) != 2 )
            {
              CPD = GetCPD(a1, (unsigned int)v9 | 0x20, v8);
              if ( CPD )
                v8 = CPD;
            }
          }
          goto LABEL_26;
        }
      }
LABEL_12:
      v7 = 5;
      goto LABEL_13;
  }
  if ( a2 != -2 )
  {
    v7 = 1413;
LABEL_13:
    UserSetLastError(v7);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 41);
  *((_QWORD *)a1 + 41) = a3;
  return v8;
}
