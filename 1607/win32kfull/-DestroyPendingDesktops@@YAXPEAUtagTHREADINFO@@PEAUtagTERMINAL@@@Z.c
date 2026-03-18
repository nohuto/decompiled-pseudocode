/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     _DestroyMenu @ 0x1C006AE40 (_DestroyMenu.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     DwmAsyncShellWindowChange @ 0x1C0093E64 (DwmAsyncShellWindowChange.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     RemoteDisableScreen @ 0x1C00EC3F0 (RemoteDisableScreen.c)
 *     ClearWakeBit @ 0x1C010E3F0 (ClearWakeBit.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     UnlockDesktopMenu @ 0x1C0134ED4 (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2, __int64 a3, __int64 a4)
{
  __int64 *i; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 k; // rdx
  __int64 j; // rcx
  _QWORD *m; // rdx
  _DWORD *v20; // rsi
  void *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdi
  struct tagMENU *v27; // rdi
  struct tagMENU *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rcx
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  _QWORD v57[3]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v58[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v59[3]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v60[3]; // [rsp+90h] [rbp-1h] BYREF
  _QWORD v61[4]; // [rsp+A8h] [rbp+17h] BYREF

  for ( i = (__int64 *)((char *)a2 + 48); ; i = (__int64 *)((char *)a2 + 48) )
  {
    v56 = *i;
    if ( !*i )
      break;
    PushW32ThreadLock(*i, v61, UserDereferenceObject, a4);
    ObfReferenceObject((PVOID)v56);
    v7 = *(_QWORD *)(v56 + 24);
    PushW32ThreadLock(v7, v60, UserDereferenceObject, v8);
    v9 = *(void **)(v56 + 24);
    if ( v9 )
      ObfReferenceObject(v9);
    LockObjectAssignment(i, *(_QWORD *)(v56 + 16));
    UnlockObjectAssignment(v56 + 16);
    if ( v56 == grpdeskRitInput )
    {
      if ( (*(_DWORD *)(v7 + 32) & 1) != 0 )
      {
        v13 = grpdeskLogon;
        if ( gspdeskDisconnect
          && ((PVOID)v56 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 8) & 2) != 0) )
        {
          RemoteDisableScreen(grpdeskRitInput, v10, v11, v12);
          goto LABEL_32;
        }
      }
      else
      {
        v13 = *(PVOID *)(v7 + 16);
        if ( v13 == (PVOID)v56 )
          v13 = *(PVOID *)(v56 + 16);
        if ( !v13 )
          ClearWakeBit((__int64)a1, 15367, 0);
      }
      PushW32ThreadLock((__int64)v13, v58, UserDereferenceObject, v12);
      if ( v13 )
        ObfReferenceObject(v13);
      xxxSwitchDesktop(v7, (__int64)v13, 0, 0);
      PopAndFreeW32ThreadLock((__int64)v58, v14, v15, v16);
    }
    else if ( v56 == *((_QWORD *)a1 + 51) )
    {
      k = 0LL;
      for ( j = grpWinStaList; j; j = *(_QWORD *)(j + 8) )
      {
        if ( (*(_DWORD *)(j + 32) & 0x10) == 0 && *(struct tagTERMINAL **)(j + 24) == a2 && *(_QWORD *)(j + 16) )
        {
          for ( k = *(_QWORD *)(j + 16); k; k = *(_QWORD *)(k + 16) )
          {
            if ( k != v56 )
              goto LABEL_31;
          }
          if ( !v56 )
            k = 0LL;
          break;
        }
      }
LABEL_31:
      xxxSetThreadDesktop(0LL, k);
    }
LABEL_32:
    if ( (PVOID)v56 == gspdeskShouldBeForeground )
    {
      for ( m = *(_QWORD **)(v7 + 16); m; m = (_QWORD *)m[2] )
      {
        if ( m != grpdeskLogon && m != gspdeskDisconnect )
          break;
      }
      LockObjectAssignment(&gspdeskShouldBeForeground, m);
    }
    v20 = (_DWORD *)*((_QWORD *)a1 + 51);
    v21 = (void *)*((_QWORD *)a1 + 64);
    PushW32ThreadLock((__int64)v20, v59, UserDereferenceObject, v12);
    if ( v20 )
      ObfReferenceObject(v20);
    xxxSetThreadDesktop(0LL, v56);
    HMAssignmentUnlock(v56 + 80);
    HMAssignmentUnlock(v56 + 88);
    HMAssignmentUnlock(v56 + 176);
    *(_DWORD *)(v56 + 32) &= 0xFFFFFA3F;
    v25 = *(_QWORD *)(v56 + 48);
    if ( v25 )
    {
      *(_DWORD *)(v25 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v25);
    }
    v26 = *(_QWORD *)(v56 + 56);
    if ( v26 )
    {
      *(_DWORD *)(v26 + 40) &= ~0x80u;
      if ( UnlockDesktopMenu() )
        DestroyMenu((struct tagMENU *)v26);
    }
    v27 = *(struct tagMENU **)(v56 + 64);
    if ( v27 && UnlockDesktopMenu() )
      DestroyMenu(v27);
    v28 = *(struct tagMENU **)(v56 + 72);
    if ( v28 && UnlockDesktopMenu() )
      DestroyMenu(v28);
    v29 = *(_QWORD *)(v56 + 8);
    if ( v29 )
    {
      if ( *(struct tagWND **)(v29 + 16) == gspwndFullScreen )
        HMAssignmentUnlock(&gspwndFullScreen);
      v30 = *(_QWORD *)(*(_QWORD *)(v56 + 8) + 160LL);
      if ( v30 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v30) )
        {
          v35 = (void *)ReferenceDwmApiPort(v32, v31, v33, v34);
          DwmAsyncShellWindowChange(v35, 0LL, *(_QWORD *)(v56 + 40));
        }
        HMAssignmentUnlock(*(_QWORD *)(v56 + 8) + 160LL);
      }
      v36 = (_QWORD *)(*(_QWORD *)(v56 + 8) + 176LL);
      if ( *v36 )
        HMAssignmentUnlock(v36);
      v37 = (_QWORD *)(*(_QWORD *)(v56 + 8) + 184LL);
      if ( *v37 )
        HMAssignmentUnlock(v37);
      v38 = (_QWORD *)(*(_QWORD *)(v56 + 8) + 192LL);
      if ( *v38 )
        HMAssignmentUnlock(v38);
    }
    v39 = *(_QWORD **)(v56 + 96);
    if ( v39 && HMAssignmentUnlock(v56 + 96) )
      xxxDestroyWindow(v39);
    v40 = *(_QWORD **)(v56 + 104);
    if ( v40 && HMAssignmentUnlock(v56 + 104) )
      xxxDestroyWindow(v40);
    v41 = *(_QWORD *)(v56 + 256);
    if ( v41 )
    {
      Win32FreePool(v41, v22, v23);
      *(_QWORD *)(v56 + 256) = 0LL;
    }
    v42 = *((_QWORD *)a2 + 1);
    if ( v42 )
    {
      v43 = v42 + 24;
      if ( *(_QWORD *)(v42 + 24) == v56 )
      {
        if ( (*(_DWORD *)a2 & 2) != 0 )
        {
          v44 = grpWinStaList;
          if ( grpWinStaList )
          {
            while ( 1 )
            {
              v44 = *(_QWORD *)(v44 + 8);
              if ( !v44 )
                break;
              if ( *(_QWORD *)(v44 + 16) )
              {
                v22 = *(_QWORD *)(v44 + 16);
                goto LABEL_83;
              }
            }
          }
        }
        else
        {
          v22 = *(_QWORD *)(v7 + 16);
LABEL_83:
          if ( v22 )
          {
            LockObjectAssignment(v43, v22);
            goto LABEL_87;
          }
        }
        if ( a2 == gTermIO )
          xxxCleanupMotherDesktopWindow(a2);
      }
    }
LABEL_87:
    v45 = *(_QWORD *)(v56 + 8);
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 16);
      if ( v46 )
      {
        if ( (*(_BYTE *)(v46 + 55) & 0x10) != 0 )
        {
          v57[0] = *((_QWORD *)a1 + 46);
          *((_QWORD *)a1 + 46) = v57;
          v57[1] = v46;
          ++*(_DWORD *)(v46 + 8);
          xxxSetWindowPosAndBand((struct tagWND *)v46, 0, 0, 0, 0, 0, 1183, 0);
          ThreadUnlock1(v48, v47);
        }
        xxxDestroyWindow(*(_QWORD **)(*(_QWORD *)(v56 + 8) + 16LL));
        if ( v56 != grpdeskRitInput )
        {
          v49 = (__int64 *)(*(_QWORD *)(v56 + 8) + 16LL);
          goto LABEL_95;
        }
        *(_DWORD *)(v56 + 32) |= 1u;
        if ( gspwndShouldBeForeground )
        {
          v49 = &gspwndShouldBeForeground;
LABEL_95:
          HMAssignmentUnlock(v49);
        }
        *(_DWORD *)(v56 + 32) |= 2u;
      }
    }
    if ( (*(_DWORD *)a2 & 2) == 0 || !v20 || (v20[8] & 6) == 0 )
      xxxSetThreadDesktop(v21, (__int64)v20);
    PopAndFreeW32ThreadLock((__int64)v59, v22, v23, v24);
    PopAndFreeW32ThreadLock((__int64)v60, v50, v51, v52);
    PopAndFreeW32ThreadLock((__int64)v61, v53, v54, v55);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
}
