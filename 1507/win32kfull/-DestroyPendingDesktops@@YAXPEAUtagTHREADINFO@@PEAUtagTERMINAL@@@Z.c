/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C00DD5A0 (_DestroyMenu.c)
 *     ClearWakeBit @ 0x1C00EA55C (ClearWakeBit.c)
 *     RemoteDisableScreen @ 0x1C012DEBC (RemoteDisableScreen.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     UnlockDesktopMenu @ 0x1C0132B10 (UnlockDesktopMenu.c)
 *     DwmAsyncShellWindowChange @ 0x1C0149F90 (DwmAsyncShellWindowChange.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  __int64 *i; // rdi
  __int64 v5; // r14
  void *v6; // rcx
  PVOID v7; // rdi
  __int64 k; // rdx
  __int64 j; // rcx
  _QWORD *m; // rdx
  _DWORD *v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagWND **v40; // rcx
  __int64 v41; // rbx
  _QWORD v42[3]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v43[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v44[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v45[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v46[4]; // [rsp+A8h] [rbp+17h] BYREF

  for ( i = (__int64 *)((char *)a2 + 48); ; i = (__int64 *)((char *)a2 + 48) )
  {
    v41 = *i;
    if ( !*i )
      break;
    PushW32ThreadLock(*i, v46, UserDereferenceObject);
    ObfReferenceObject((PVOID)v41);
    v5 = *(_QWORD *)(v41 + 24);
    PushW32ThreadLock(v5, v44, UserDereferenceObject);
    v6 = *(void **)(v41 + 24);
    if ( v6 )
      ObfReferenceObject(v6);
    LockObjectAssignment(i, *(_QWORD *)(v41 + 16));
    UnlockObjectAssignment(v41 + 16);
    if ( v41 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v5 + 32) & 1) != 0 )
      {
        v7 = grpdeskLogon;
        if ( gspdeskDisconnect
          && ((PVOID)v41 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 8) & 2) != 0) )
        {
          RemoteDisableScreen(grpdeskRitInput);
          goto LABEL_32;
        }
      }
      else
      {
        v7 = *(PVOID *)(v5 + 16);
        if ( v7 == (PVOID)v41 )
          v7 = *(PVOID *)(v41 + 16);
        if ( !v7 )
          ClearWakeBit((__int64)a1, 15367, 0);
      }
      PushW32ThreadLock((__int64)v7, v45, UserDereferenceObject);
      if ( v7 )
        ObfReferenceObject(v7);
      xxxSwitchDesktop(v5, (__int64)v7, 0);
      PopAndFreeW32ThreadLock((__int64)v45);
    }
    else if ( v41 == *((_QWORD *)a1 + 52) )
    {
      k = 0LL;
      for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(j + 24) == a2 && *(_QWORD *)(j + 16) )
        {
          for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 16) )
          {
            if ( k != v41 )
              goto LABEL_31;
          }
          if ( !v41 )
            k = 0LL;
          break;
        }
      }
LABEL_31:
      xxxSetThreadDesktop(0LL, k);
    }
LABEL_32:
    if ( (PVOID)v41 == gspdeskShouldBeForeground )
    {
      for ( m = *(_QWORD **)(v5 + 16); m; m = (_QWORD *)m[2] )
      {
        if ( m != grpdeskLogon && m != gspdeskDisconnect )
          break;
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, m);
    }
    v11 = (_DWORD *)*((_QWORD *)a1 + 52);
    v12 = *((_QWORD *)a1 + 65);
    PushW32ThreadLock((__int64)v11, v43, UserDereferenceObject);
    if ( v11 )
      ObfReferenceObject(v11);
    xxxSetThreadDesktop(0LL, v41);
    HMAssignmentUnlock(v41 + 80);
    HMAssignmentUnlock(v41 + 88);
    HMAssignmentUnlock(v41 + 176);
    *(_DWORD *)(v41 + 32) &= 0xFFFFFA3F;
    v13 = *(_QWORD *)(v41 + 48);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu(v13);
    }
    v14 = *(_QWORD *)(v41 + 56);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu(v14);
    }
    v15 = *(_QWORD *)(v41 + 64);
    if ( v15 && UnlockDesktopMenu() )
      DestroyMenu(v15);
    v16 = *(_QWORD *)(v41 + 72);
    if ( v16 && UnlockDesktopMenu() )
      DestroyMenu(v16);
    v17 = *(_QWORD *)(v41 + 8);
    if ( v17 )
    {
      if ( *(struct tagWND **)(v17 + 16) == gspwndFullScreen )
        HMAssignmentUnlock(&gspwndFullScreen);
      v18 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 160LL);
      if ( v18 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v18) )
        {
          v23 = (void *)ReferenceDwmApiPort(v20, v19, v21, v22);
          DwmAsyncShellWindowChange(v23);
        }
        HMAssignmentUnlock(*(_QWORD *)(v41 + 8) + 160LL);
      }
      v24 = (_QWORD *)(*(_QWORD *)(v41 + 8) + 176LL);
      if ( *v24 )
        HMAssignmentUnlock(v24);
      v25 = (_QWORD *)(*(_QWORD *)(v41 + 8) + 200LL);
      if ( *v25 )
        HMAssignmentUnlock(v25);
      v26 = (_QWORD *)(*(_QWORD *)(v41 + 8) + 184LL);
      if ( *v26 )
        HMAssignmentUnlock(v26);
      v27 = (_QWORD *)(*(_QWORD *)(v41 + 8) + 192LL);
      if ( *v27 )
        HMAssignmentUnlock(v27);
      v28 = (_QWORD *)(*(_QWORD *)(v41 + 8) + 208LL);
      if ( *v28 )
        HMAssignmentUnlock(v28);
    }
    v29 = *(_QWORD *)(v41 + 96);
    if ( v29 && HMAssignmentUnlock(v41 + 96) )
      xxxDestroyWindow(v29);
    v30 = *(_QWORD *)(v41 + 104);
    if ( v30 && HMAssignmentUnlock(v41 + 104) )
      xxxDestroyWindow(v30);
    v31 = *(_QWORD *)(v41 + 304);
    if ( v31 )
    {
      Win32FreePool(v31);
      *(_QWORD *)(v41 + 304) = 0LL;
    }
    v32 = *((_QWORD *)a2 + 1);
    if ( v32 )
    {
      v33 = v32 + 24;
      if ( *(_QWORD *)(v32 + 24) == v41 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v34 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v34 = *(_QWORD *)(v34 + 8);
              if ( !v34 )
                break;
              if ( *(_QWORD *)(v34 + 16) )
              {
                v35 = *(_QWORD *)(v34 + 16);
                goto LABEL_87;
              }
            }
          }
        }
        else
        {
          v35 = *(_QWORD *)(v5 + 16);
LABEL_87:
          if ( v35 )
          {
            LockObjectAssignment(v33, v35);
            goto LABEL_91;
          }
        }
        if ( a2 == gTermIO )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_91:
    v36 = *(_QWORD *)(v41 + 8);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 16);
      if ( v37 )
      {
        if ( (*(_BYTE *)(v37 + 55) & 0x10) != 0 )
        {
          v42[0] = *((_QWORD *)a1 + 47);
          *((_QWORD *)a1 + 47) = v42;
          v42[1] = v37;
          ++*(_DWORD *)(v37 + 8);
          xxxSetWindowPosAndBand((struct tagWND *)v37, 0LL, 0, 0, 0, 0, 1183, 0);
          ThreadUnlock1(v39, v38);
        }
        xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL));
        if ( v41 != grpdeskRitInput )
        {
          v40 = (struct tagWND **)(*(_QWORD *)(v41 + 8) + 16LL);
          goto LABEL_99;
        }
        *(_DWORD *)(v41 + 32) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v40 = &gspwndShouldBeForeground;
LABEL_99:
          HMAssignmentUnlock(v40);
        }
        *(_DWORD *)(v41 + 32) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v11 || (v11[8] & 6) == 0 )
      xxxSetThreadDesktop(v12, (__int64)v11);
    PopAndFreeW32ThreadLock((__int64)v43);
    PopAndFreeW32ThreadLock((__int64)v44);
    PopAndFreeW32ThreadLock((__int64)v46);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
}
