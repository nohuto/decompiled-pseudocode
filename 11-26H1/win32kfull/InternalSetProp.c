/*
 * XREFs of InternalSetProp @ 0x14000FF58
 * Callers:
 *     FeedbackSetWindowSetting @ 0x14000FAA4 (FeedbackSetWindowSetting.c)
 *     SetRedrawProp @ 0x14000FC8C (SetRedrawProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14000FF0C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x1400305B4 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14013E810 (NtUserShutdownBlockReasonCreate.c)
 *     SetDisplayAffinity @ 0x1401FF0D8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x14020FB58 (_SetTargetingWindowValue.c)
 *     NtUserfnDDEINIT @ 0x140210450 (NtUserfnDDEINIT.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140264534 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     _SetBrokeredForeground @ 0x140265774 (_SetBrokeredForeground.c)
 *     NtUserSetProp @ 0x14027A1C0 (NtUserSetProp.c)
 *     NtUserSetProp2 @ 0x14027A270 (NtUserSetProp2.c)
 *     FeedbackClearWindowSetting @ 0x140288980 (FeedbackClearWindowSetting.c)
 *     _SetTouchWindowFlags @ 0x14029356C (_SetTouchWindowFlags.c)
 *     UserAssociateHwnd @ 0x1402A483C (UserAssociateHwnd.c)
 *     NtUserSetAppImeLevel @ 0x1402BB9C0 (NtUserSetAppImeLevel.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402CA8A4 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1402CC4A8 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     UserGetGlobalAtomTableOfWindow @ 0x14000FCE0 (UserGetGlobalAtomTableOfWindow.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     SetSharedPropForFilteredProcesses @ 0x140293814 (SetSharedPropForFilteredProcesses.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetProp(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  tagObjLock *v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rcx
  int v15; // esi
  tagObjLock **v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // ebx
  __int64 v20; // rax
  int v21; // ebx
  __int64 GlobalAtomTableOfWindow; // rax
  __int64 v23; // [rsp+20h] [rbp-59h]
  __int128 v24; // [rsp+30h] [rbp-49h] BYREF
  char v25; // [rsp+40h] [rbp-39h]
  char v26; // [rsp+48h] [rbp-31h]
  _KAPC_STATE ApcState; // [rsp+50h] [rbp-29h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  v23 = W32GetUserSessionState(a1, a2) + 42384;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v10, v9) == 1 )
  {
    v26 = 1;
    UserSessionState = W32GetUserSessionState(v12, v11);
    v14 = 0LL;
    if ( v4 != UserSessionState + 42480 )
      v14 = v4;
    *(_QWORD *)&v24 = v14;
    v15 = 0;
    v16 = (tagObjLock **)&v24;
    do
    {
      v12 = *v16;
      if ( *v16 )
        tagObjLock::LockExclusive(v12);
      ++v15;
      ++v16;
    }
    while ( !v15 );
    v25 = 1;
  }
  v17 = W32GetUserSessionState(v12, v11);
  if ( !*(_WORD *)(v17 + 69108) )
  {
    GlobalAtomTableOfWindow = UserGetGlobalAtomTableOfWindow(a1);
    if ( GlobalAtomTableOfWindow )
      *(_WORD *)(v17 + 69108) = UserFindAtomFromAtomTable(
                                  GlobalAtomTableOfWindow,
                                  L"Microsoft.Windows.WindowFactory.ViewId");
  }
  if ( (a4 & 1) != 0 )
    goto LABEL_12;
  LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(v17 + 69108) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = a3;
LABEL_12:
    v18 = RealInternalSetProp(*(_QWORD *)(a1 + 144), a2, a3, a4, v23, 0);
    if ( v25 && v26 )
    {
      if ( (_QWORD)v24 )
        tagObjLock::UnLockExclusive((tagObjLock *)v24);
    }
    return v18;
  }
  if ( (*(_DWORD *)(a1 + 384) & 1) == 0 )
    goto LABEL_12;
  v20 = *(_QWORD *)(a1 + 16);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**(PRKPROCESS **)(v20 + 456), &ApcState);
  v21 = SetSharedPropForFilteredProcesses(a1, a2, a3);
  KeUnstackDetachProcess(&ApcState);
  if ( v21 != 1 )
    goto LABEL_12;
  if ( v25 && v26 && (_QWORD)v24 )
    tagObjLock::UnLockExclusive((tagObjLock *)v24);
  return 1LL;
}
