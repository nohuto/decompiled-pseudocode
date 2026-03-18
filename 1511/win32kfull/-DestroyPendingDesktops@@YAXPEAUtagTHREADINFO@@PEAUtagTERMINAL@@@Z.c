/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D037C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     ClearWakeBit @ 0x1C00643C0 (ClearWakeBit.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     _DestroyMenu @ 0x1C006E710 (_DestroyMenu.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     RemoteDisableScreen @ 0x1C009DB54 (RemoteDisableScreen.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     DwmAsyncShellWindowChange @ 0x1C00D21C8 (DwmAsyncShellWindowChange.c)
 *     UnlockDesktopMenu @ 0x1C0113BF8 (UnlockDesktopMenu.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 *i; // rdi
  __int64 v5; // r14
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v9; // rdi
  __int64 k; // rdx
  __int64 j; // rcx
  _QWORD *m; // rdx
  _DWORD *v13; // rsi
  void *v14; // r12
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdi
  struct tagMENU *v21; // rdi
  struct tagMENU *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagWND **v44; // rcx
  __int64 v45; // rbx
  _QWORD v46[3]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v47[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v48[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v49[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v50[4]; // [rsp+A8h] [rbp+17h] BYREF

  for ( i = (__int64 *)((char *)a2 + 48); ; i = (__int64 *)((char *)a2 + 48) )
  {
    v45 = *i;
    if ( !*i )
      break;
    PushW32ThreadLock(*i, v50, UserDereferenceObject);
    ObfReferenceObject((PVOID)v45);
    v5 = *(_QWORD *)(v45 + 24);
    PushW32ThreadLock(v5, v48, UserDereferenceObject);
    v6 = *(void **)(v45 + 24);
    if ( v6 )
      ObfReferenceObject(v6);
    LockObjectAssignment(i, *(_QWORD *)(v45 + 16));
    UnlockObjectAssignment(v45 + 16);
    if ( v45 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
      {
        v9 = grpdeskLogon;
        if ( gspdeskDisconnect
          && ((PVOID)v45 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 8) & 2) != 0) )
        {
          RemoteDisableScreen(grpdeskRitInput);
          goto LABEL_32;
        }
      }
      else
      {
        v9 = *(PVOID *)(v5 + 16);
        if ( v9 == (PVOID)v45 )
          v9 = *(PVOID *)(v45 + 16);
        if ( !v9 )
          ClearWakeBit((__int64)a1, 15367, 0);
      }
      PushW32ThreadLock((__int64)v9, v49, UserDereferenceObject);
      if ( v9 )
        ObfReferenceObject(v9);
      xxxSwitchDesktop(v5, (__int64)v9, 0);
      PopAndFreeW32ThreadLock((__int64)v49);
    }
    else if ( v45 == *((_QWORD *)a1 + 51) )
    {
      k = 0LL;
      for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(j + 24) == a2 && *(_QWORD *)(j + 16) )
        {
          for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 16) )
          {
            if ( k != v45 )
              goto LABEL_31;
          }
          if ( !v45 )
            k = 0LL;
          break;
        }
      }
LABEL_31:
      xxxSetThreadDesktop(0LL, k, v7, v8);
    }
LABEL_32:
    if ( (PVOID)v45 == gspdeskShouldBeForeground )
    {
      for ( m = *(_QWORD **)(v5 + 16); m; m = (_QWORD *)m[2] )
      {
        if ( m != grpdeskLogon && m != gspdeskDisconnect )
          break;
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, m);
    }
    v13 = (_DWORD *)*((_QWORD *)a1 + 51);
    v14 = (void *)*((_QWORD *)a1 + 64);
    PushW32ThreadLock((__int64)v13, v47, UserDereferenceObject);
    if ( v13 )
      ObfReferenceObject(v13);
    xxxSetThreadDesktop(0LL, v45, v15, v16);
    HMAssignmentUnlock(v45 + 80);
    HMAssignmentUnlock(v45 + 88);
    HMAssignmentUnlock(v45 + 176);
    *(_DWORD *)(v45 + 32) &= 0xFFFFFA3F;
    v19 = *(_QWORD *)(v45 + 48);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v19);
    }
    v20 = *(_QWORD *)(v45 + 56);
    if ( v20 )
    {
      *(_DWORD *)(v20 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v20);
    }
    v21 = *(struct tagMENU **)(v45 + 64);
    if ( v21 && UnlockDesktopMenu() )
      DestroyMenu(v21);
    v22 = *(struct tagMENU **)(v45 + 72);
    if ( v22 && UnlockDesktopMenu() )
      DestroyMenu(v22);
    v23 = *(_QWORD *)(v45 + 8);
    if ( v23 )
    {
      if ( *(struct tagWND **)(v23 + 16) == gspwndFullScreen )
        HMAssignmentUnlock(&gspwndFullScreen);
      v24 = *(_QWORD *)(*(_QWORD *)(v45 + 8) + 160LL);
      if ( v24 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v24) )
        {
          v29 = (void *)ReferenceDwmApiPort(v26, v25, v27, v28);
          DwmAsyncShellWindowChange(v29);
        }
        HMAssignmentUnlock(*(_QWORD *)(v45 + 8) + 160LL);
      }
      v30 = (_QWORD *)(*(_QWORD *)(v45 + 8) + 176LL);
      if ( *v30 )
        HMAssignmentUnlock(v30);
      v31 = (_QWORD *)(*(_QWORD *)(v45 + 8) + 184LL);
      if ( *v31 )
        HMAssignmentUnlock(v31);
      v32 = (_QWORD *)(*(_QWORD *)(v45 + 8) + 192LL);
      if ( *v32 )
        HMAssignmentUnlock(v32);
    }
    v33 = *(_QWORD **)(v45 + 96);
    if ( v33 && HMAssignmentUnlock(v45 + 96) )
      xxxDestroyWindow(v33);
    v34 = *(_QWORD **)(v45 + 104);
    if ( v34 && HMAssignmentUnlock(v45 + 104) )
      xxxDestroyWindow(v34);
    v35 = *(_QWORD *)(v45 + 256);
    if ( v35 )
    {
      Win32FreePool(v35);
      *(_QWORD *)(v45 + 256) = 0LL;
    }
    v36 = *((_QWORD *)a2 + 1);
    if ( v36 )
    {
      v37 = v36 + 24;
      if ( *(_QWORD *)(v36 + 24) == v45 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v38 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v38 = *(_QWORD *)(v38 + 8);
              if ( !v38 )
                break;
              if ( *(_QWORD *)(v38 + 16) )
              {
                v39 = *(_QWORD *)(v38 + 16);
                goto LABEL_83;
              }
            }
          }
        }
        else
        {
          v39 = *(_QWORD *)(v5 + 16);
LABEL_83:
          if ( v39 )
          {
            LockObjectAssignment(v37, v39);
            goto LABEL_87;
          }
        }
        if ( a2 == gTermIO )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_87:
    v40 = *(_QWORD *)(v45 + 8);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 16);
      if ( v41 )
      {
        if ( (*(_BYTE *)(v41 + 55) & 0x10) != 0 )
        {
          v46[0] = *((_QWORD *)a1 + 46);
          *((_QWORD *)a1 + 46) = v46;
          v46[1] = v41;
          ++*(_DWORD *)(v41 + 8);
          xxxSetWindowPosAndBand((struct tagWND *)v41, 0, 0, 0, 0, 0, 1183, 0);
          ThreadUnlock1(v43, v42);
        }
        xxxDestroyWindow(*(_QWORD **)(*(_QWORD *)(v45 + 8) + 16LL));
        if ( v45 != grpdeskRitInput )
        {
          v44 = (struct tagWND **)(*(_QWORD *)(v45 + 8) + 16LL);
          goto LABEL_95;
        }
        *(_DWORD *)(v45 + 32) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v44 = &gspwndShouldBeForeground;
LABEL_95:
          HMAssignmentUnlock(v44);
        }
        *(_DWORD *)(v45 + 32) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v13 || (v13[8] & 6) == 0 )
      xxxSetThreadDesktop(v14, (__int64)v13, v17, v18);
    PopAndFreeW32ThreadLock((__int64)v47);
    PopAndFreeW32ThreadLock((__int64)v48);
    PopAndFreeW32ThreadLock((__int64)v50);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
}
