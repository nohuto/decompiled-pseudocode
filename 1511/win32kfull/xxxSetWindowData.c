/*
 * XREFs of xxxSetWindowData @ 0x1C0057B34
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C0057954 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00E43F0 (xxxSetWindowLong.c)
 * Callees:
 *     IsParentBandValid @ 0x1C004FAE0 (IsParentBandValid.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxInheritWindowMonitor @ 0x1C006CD18 (xxxInheritWindowMonitor.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     IsWindowShellCloaked @ 0x1C008B18C (IsWindowShellCloaked.c)
 *     LockWndMenu @ 0x1C00CBF10 (LockWndMenu.c)
 *     xxxClientWOWGetProcModule @ 0x1C00EE868 (xxxClientWOWGetProcModule.c)
 *     ValidateOwnerDepth @ 0x1C00F9BC4 (ValidateOwnerDepth.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     UnlockWndMenu @ 0x1C0104018 (UnlockWndMenu.c)
 *     GetCPD @ 0x1C0104AFC (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C010F710 (MapServerToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C011D63C (MapClientToServerPfn.c)
 *     MapClientNeuterToClientPfn @ 0x1C011E4C4 (MapClientNeuterToClientPfn.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v9; // rdx
  __int16 v10; // ax
  unsigned __int8 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r12
  unsigned __int8 v14; // cl
  char v15; // cl
  char *v16; // r13
  __int64 DesktopWindow; // rax
  int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // r15d
  int v21; // ebp
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int16 v26; // r10
  BOOL v27; // eax
  __int64 v28; // rdx
  struct tagWND *v29; // rcx
  unsigned int WindowCloakState; // eax
  struct tagWND *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 CPD; // rax
  int *v38; // rdx
  __int64 v39; // r8
  int v40; // ecx
  char *v41; // rsi
  __int64 *v42; // rax
  __int64 v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v45[3]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v46[3]; // [rsp+38h] [rbp-60h] BYREF
  int v47; // [rsp+50h] [rbp-48h] BYREF
  int v48; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  if ( a2 == -16 )
    return (int)xxxSetWindowStyle(a1);
  if ( a2 == -2 )
  {
    v7 = *((_QWORD *)a1 + 41);
    *((_QWORD *)a1 + 41) = a3;
    return v7;
  }
  if ( a2 != -4 )
  {
    switch ( a2 )
    {
      case -12:
        if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
        {
          v7 = *((_QWORD *)a1 + 24);
          *((_QWORD *)a1 + 24) = a3;
        }
        else
        {
          v41 = (char *)a1 + 192;
          v42 = (__int64 *)*((_QWORD *)a1 + 24);
          v7 = 0LL;
          if ( v42 )
            v7 = *v42;
          if ( a3 )
          {
            v43 = ValidateHmenu(a3);
            if ( v43 )
              LockWndMenu(a1, v41, v43);
            else
              return 0LL;
          }
          else
          {
            UnlockWndMenu(a1, (char *)a1 + 192);
          }
        }
        return v7;
      case -21:
        v7 = *((_QWORD *)a1 + 32);
        *((_QWORD *)a1 + 32) = a3;
        return v7;
      case -20:
        return (int)xxxSetWindowStyle(a1);
      case -40:
        if ( PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
        {
          v14 = *((_BYTE *)a1 + 290);
          v7 = (v14 >> 2) & 1;
          if ( v5 )
            v15 = v14 | 4;
          else
            v15 = v14 & 0xFB;
          *((_BYTE *)a1 + 290) = v15;
          return v7;
        }
        goto LABEL_79;
    }
    if ( a2 != -8 )
    {
      if ( a2 == -6 )
      {
        v7 = *((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 7) = a3;
        return v7;
      }
      v40 = 1413;
      goto LABEL_81;
    }
    v16 = (char *)a1 + 88;
    DesktopWindow = GetDesktopWindow((__int64)a1);
    v20 = v18 + 9;
    if ( *(_QWORD *)v16 == DesktopWindow )
    {
      v16 = (char *)a1 + 104;
      v21 = v18 + 9;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)v16;
    v48 = v21;
    v24 = ValidateHwnd(v19);
    if ( !v24 && v5 )
      goto LABEL_80;
    if ( v21 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
      if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v24) )
        v24 = 0LL;
    }
    if ( !IsParentBandValid((__int64)a1, v24) )
    {
LABEL_80:
      v40 = 87;
      goto LABEL_81;
    }
    v26 = gatomBrokeredForeground;
    if ( !v24 || !GetProp((__int64)a1, (unsigned __int16)gatomBrokeredForeground, v20) )
    {
      if ( !v21 )
        goto LABEL_45;
      if ( !v24 )
      {
LABEL_46:
        if ( *(_QWORD *)v16 )
          v7 = **(_QWORD **)v16;
        else
          v7 = 0LL;
        v45[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v45;
        v45[1] = v24;
        if ( v24 )
          *(_DWORD *)(v24 + 8) += v20;
        if ( !v48 )
        {
          v35 = -(__int64)(xxxSetParentWorker(a1) != 0);
          v7 &= v35;
          goto LABEL_60;
        }
        v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v46;
        v46[1] = v22;
        if ( v22 )
          *(_DWORD *)(v22 + 8) += v20;
        xxxHandleOwnerSwitch(a1, (struct tagWND *)v24, (struct tagWND *)v22);
        v27 = IsParentBandValid((__int64)a1, v24);
        v29 = a1;
        if ( v27 )
        {
          if ( (unsigned int)ValidateOwnerDepth(a1, v28) )
          {
            if ( v24 )
            {
              HMAssignmentLock(v16, v24);
              WindowCloakState = GetWindowCloakState(v24);
              v31 = a1;
              if ( WindowCloakState )
              {
                v39 = WindowCloakState;
                v38 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked(a1, v20) )
                {
LABEL_58:
                  xxxInheritWindowMonitor(a1);
LABEL_59:
                  ThreadUnlock1(v33, v32);
LABEL_60:
                  ThreadUnlock1(v35, v34);
                  return v7;
                }
                v47 = 0;
                v38 = &v47;
                v39 = 2LL;
                v31 = a1;
              }
              zzzSetWindowCompositionCloak(v31, v38, v39);
              goto LABEL_58;
            }
            HMAssignmentUnlock(v16);
            goto LABEL_58;
          }
          v29 = a1;
        }
        xxxHandleOwnerSwitch(v29, (struct tagWND *)v22, (struct tagWND *)v24);
        UserSetLastError(87);
        v7 = 0LL;
        goto LABEL_59;
      }
      if ( !GetProp(v24, v26, v20) )
      {
LABEL_45:
        if ( !v24 || *(char *)(v24 + 44) >= 0 && *(char *)(v24 + 43) >= 0 )
          goto LABEL_46;
      }
    }
LABEL_79:
    v40 = 5;
LABEL_81:
    UserSetLastError(v40);
    return 0LL;
  }
  if ( PsGetCurrentProcessWin32Process(a1) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
    goto LABEL_79;
  v10 = *((_WORD *)a1 + 33);
  if ( v10 < 0 )
    goto LABEL_79;
  v11 = *((_BYTE *)a1 + 42);
  if ( (v11 & 4) == 0 )
  {
    if ( (v10 & 0x3FFF) == 0x2A5 )
    {
      v7 = *((_QWORD *)a1 + 18);
      goto LABEL_15;
    }
    v7 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), *((_QWORD *)a1 + 18), a4);
    if ( v7 == v12 )
    {
LABEL_15:
      if ( a4 != ((v11 >> 3) & 1) )
      {
        v9 = 2 - (unsigned int)(a4 != 0);
        if ( (a4 != 0) != 2 )
        {
          CPD = GetCPD(a1, (unsigned int)v9 | 0x20, v7);
          if ( CPD )
            v7 = CPD;
        }
      }
    }
LABEL_16:
    if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
    {
      LOBYTE(v9) = 7;
      v36 = HMValidateHandleNoRip(v5, v9);
      if ( v36 )
      {
        v5 = *(_QWORD *)(v36 + 48);
        a4 = *(_WORD *)(v36 + 56) & 2;
      }
    }
    v13 = MapClientToServerPfn(v5);
    if ( v13 )
    {
      SetOrClrWF(0LL, a1, 520LL, 1LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      *((_QWORD *)a1 + 18) = v13;
      _InterlockedOr(v44, 0);
    }
    else
    {
      SetOrClrWF(a4 != 0, a1, 520LL, 1LL);
      if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
        SetOrClrWF(0LL, a1, 516LL, 1LL);
      *((_QWORD *)a1 + 18) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), v5, a4);
      _InterlockedOr(v44, 0);
      *((_WORD *)a1 + 32) = xxxClientWOWGetProcModule(*((_QWORD *)a1 + 18));
    }
    return v7;
  }
  v7 = MapServerToClientPfn(*((_QWORD *)a1 + 18), a4);
  if ( v7 )
    goto LABEL_16;
  return 0LL;
}
