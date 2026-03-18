/*
 * XREFs of xxxSetWindowData @ 0x1C00A11FC
 * Callers:
 *     xxxSetWindowLong @ 0x1C009B210 (xxxSetWindowLong.c)
 *     xxxSetWindowLongPtr @ 0x1C00A1014 (xxxSetWindowLongPtr.c)
 * Callees:
 *     xxxInheritWindowMonitor @ 0x1C00712C4 (xxxInheritWindowMonitor.c)
 *     IsParentBandValid @ 0x1C0075D10 (IsParentBandValid.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A1F54 (MapClientNeuterToClientPfn.c)
 *     xxxClientWOWGetProcModule @ 0x1C00A1FA8 (xxxClientWOWGetProcModule.c)
 *     MapClientToServerPfn @ 0x1C00A2060 (MapClientToServerPfn.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     LockWndMenu @ 0x1C00BB48C (LockWndMenu.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     IsWindowShellCloaked @ 0x1C00DC56C (IsWindowShellCloaked.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     ValidateOwnerDepth @ 0x1C011D580 (ValidateOwnerDepth.c)
 *     UnlockWndMenu @ 0x1C01270C8 (UnlockWndMenu.c)
 *     GetCPD @ 0x1C012881C (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C013019C (MapServerToClientPfn.c)
 */

__int64 __fastcall xxxSetWindowData(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int16 v12; // ax
  unsigned __int8 v13; // r11
  __int64 v14; // r10
  __int64 CPD; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  char *v18; // r13
  __int64 v19; // r8
  int v20; // ebp
  _QWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int16 v28; // r10
  BOOL v29; // eax
  __int64 v30; // rdx
  struct tagWND *v31; // rcx
  __int64 v32; // rdx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int WindowCloakState; // eax
  struct tagWND *v37; // rcx
  __int64 v38; // r8
  int *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char *v42; // rsi
  __int64 *v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // cl
  char v46; // cl
  signed __int32 v47[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v48[3]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v49[3]; // [rsp+38h] [rbp-60h] BYREF
  int v50; // [rsp+50h] [rbp-48h] BYREF
  int v51; // [rsp+A8h] [rbp+10h]

  v5 = a3;
  if ( (_DWORD)a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
    {
      v45 = *((_BYTE *)a1 + 290);
      v8 = (v45 >> 2) & 1;
      if ( v5 )
        v46 = v45 | 4;
      else
        v46 = v45 & 0xFB;
      *((_BYTE *)a1 + 290) = v46;
      return v8;
    }
    goto LABEL_12;
  }
  if ( (_DWORD)a2 == -21 )
  {
    v8 = *((_QWORD *)a1 + 32);
    *((_QWORD *)a1 + 32) = a3;
    return v8;
  }
  if ( (((_DWORD)a2 + 20) & 0xFFFFFFFB) == 0 )
    return (int)xxxSetWindowStyle(a1);
  switch ( (_DWORD)a2 )
  {
    case 0xFFFFFFF4:
      if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
      {
        v8 = *((_QWORD *)a1 + 24);
        *((_QWORD *)a1 + 24) = a3;
      }
      else
      {
        v42 = (char *)a1 + 192;
        v43 = (__int64 *)*((_QWORD *)a1 + 24);
        v8 = 0LL;
        if ( v43 )
          v8 = *v43;
        if ( a3 )
        {
          v44 = ValidateHmenu(a3);
          if ( v44 )
            LockWndMenu(a1, v42, v44);
          else
            return 0LL;
        }
        else
        {
          UnlockWndMenu(a1);
        }
      }
      return v8;
    case 0xFFFFFFF8:
      v18 = (char *)a1 + 88;
      if ( *((_QWORD *)a1 + 11) == GetDesktopWindow((__int64)a1) )
      {
        v18 = (char *)a1 + 104;
        v20 = 1;
      }
      else
      {
        v20 = 0;
      }
      v21 = *(_QWORD **)v18;
      v51 = v20;
      v24 = ValidateHwnd(v19);
      if ( !v24 && v5 )
        goto LABEL_40;
      if ( v20 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23, v22);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v24, v26, v27) )
          v24 = 0LL;
      }
      if ( !IsParentBandValid((__int64)a1, v24) )
      {
LABEL_40:
        v7 = 87LL;
        goto LABEL_13;
      }
      v28 = gatomBrokeredForeground;
      if ( v24 && GetProp((__int64)a1, (unsigned __int16)gatomBrokeredForeground, 1LL) )
        goto LABEL_12;
      if ( v20 )
      {
        if ( !v24 )
          goto LABEL_53;
        if ( GetProp(v24, v28, 1LL) )
          goto LABEL_12;
      }
      if ( v24 && (*(char *)(v24 + 44) < 0 || *(char *)(v24 + 43) < 0) )
        goto LABEL_12;
LABEL_53:
      if ( *(_QWORD *)v18 )
        v8 = **(_QWORD **)v18;
      else
        v8 = 0LL;
      v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v48;
      v48[1] = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( !v51 )
      {
        v41 = -(__int64)(xxxSetParentWorker(a1) != 0);
        v8 &= v41;
        goto LABEL_78;
      }
      v49[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v49;
      v49[1] = v21;
      if ( v21 )
        ++*((_DWORD *)v21 + 2);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v24, (struct tagWND *)v21);
      v29 = IsParentBandValid((__int64)a1, v24);
      v31 = a1;
      if ( v29 )
      {
        if ( (unsigned int)ValidateOwnerDepth(a1, v30) )
        {
          v33 = gSharedInfo[2];
          v34 = gSharedInfo[1];
          v35 = v33 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
          if ( (*(_BYTE *)(v35 + v34 + 17) & 1) == 0 )
          {
            if ( !v24 )
            {
              HMAssignmentUnlock(v18);
              goto LABEL_72;
            }
            v32 = v33 * (unsigned int)(unsigned __int16)*(_DWORD *)v24;
            if ( (*(_BYTE *)(v32 + v34 + 17) & 1) == 0 )
            {
              HMAssignmentLock(v18, v24);
              WindowCloakState = GetWindowCloakState(v24);
              v37 = a1;
              if ( WindowCloakState )
              {
                v38 = WindowCloakState;
                v39 = 0LL;
              }
              else
              {
                if ( !(unsigned int)IsWindowShellCloaked(a1, 1LL) )
                {
LABEL_72:
                  xxxInheritWindowMonitor(a1, (struct tagWND *)v24, 1, 0);
LABEL_76:
                  ThreadUnlock1(v35, v32);
LABEL_78:
                  ThreadUnlock1(v41, v40);
                  return v8;
                }
                v50 = 0;
                v39 = &v50;
                v38 = 2LL;
                v37 = a1;
              }
              zzzSetWindowCompositionCloak(v37, v39, v38);
              goto LABEL_72;
            }
          }
LABEL_75:
          v8 = 0LL;
          goto LABEL_76;
        }
        v31 = a1;
      }
      xxxHandleOwnerSwitch(v31, (struct tagWND *)v21, (struct tagWND *)v24);
      UserSetLastError(87LL);
      goto LABEL_75;
    case 0xFFFFFFFA:
      v8 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = a3;
      return v8;
    case 0xFFFFFFFC:
      if ( PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
      {
        v12 = *((_WORD *)a1 + 33);
        if ( v12 >= 0 )
        {
          v13 = *((_BYTE *)a1 + 42);
          if ( (v13 & 4) != 0 )
          {
            v8 = MapServerToClientPfn(*((_QWORD *)a1 + 18), a4);
            if ( !v8 )
              return 0LL;
            goto LABEL_26;
          }
          if ( (v12 & 0x3FFF) == 0x2A5 )
          {
            v8 = *((_QWORD *)a1 + 18);
          }
          else
          {
            v8 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), *((_QWORD *)a1 + 18), a4);
            if ( v8 != v14 )
            {
LABEL_26:
              if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
              {
                LOBYTE(v9) = 7;
                v16 = HMValidateHandleNoRip(v5, v9, v10);
                if ( v16 )
                {
                  v5 = *(_QWORD *)(v16 + 48);
                  a4 = *(_WORD *)(v16 + 56) & 2;
                }
              }
              v17 = MapClientToServerPfn(v5);
              if ( v17 )
              {
                SetOrClrWF(0, a1, 0x208u, 1);
                SetOrClrWF(1, a1, 0x204u, 1);
                *((_QWORD *)a1 + 18) = v17;
                _InterlockedOr(v47, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, a1, 0x208u, 1);
                if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
                  SetOrClrWF(0, a1, 0x204u, 1);
                *((_QWORD *)a1 + 18) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 19), v5, a4);
                _InterlockedOr(v47, 0);
                *((_WORD *)a1 + 32) = xxxClientWOWGetProcModule(*((_QWORD *)a1 + 18));
              }
              return v8;
            }
          }
          if ( a4 != ((v13 >> 3) & 1) )
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
      v7 = 5LL;
      goto LABEL_13;
  }
  if ( (_DWORD)a2 != -2 )
  {
    v7 = 1413LL;
LABEL_13:
    UserSetLastError(v7);
    return 0LL;
  }
  v8 = *((_QWORD *)a1 + 41);
  *((_QWORD *)a1 + 41) = a3;
  return v8;
}
