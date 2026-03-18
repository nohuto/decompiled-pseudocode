/*
 * XREFs of InternalRemoveProp @ 0x14000FD98
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x14004E2F8 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14013E810 (NtUserShutdownBlockReasonCreate.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x1401B8ED8 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     SetDisplayAffinity @ 0x1401FF0D8 (SetDisplayAffinity.c)
 *     _SetTargetingWindowValue @ 0x14020FB58 (_SetTargetingWindowValue.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x140210060 (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     UserRemoveWindowedSwapChain @ 0x1402249C0 (UserRemoveWindowedSwapChain.c)
 *     NtUserModifyWindowTouchCapability @ 0x140235A40 (NtUserModifyWindowTouchCapability.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAX@Z @ 0x140236620 (-DDEImpDecRefInitWorker@@YAXPEAX@Z.c)
 *     NtUserShutdownReasonDestroy @ 0x140249670 (NtUserShutdownReasonDestroy.c)
 *     NtUserRemoveProp @ 0x140279DB0 (NtUserRemoveProp.c)
 *     _SetTouchWindowFlags @ 0x14029356C (_SetTouchWindowFlags.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140295DBC (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     UserAssociateHwnd @ 0x1402A483C (UserAssociateHwnd.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1402CCB9C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     ?lock@?$ObjectLockBase@UtagObjLock@@@?$DomainExclusiveBase@$$V@?$DomainSharedBase@$$V@@AEAAXXZ @ 0x14000FEB0 (-lock@-$ObjectLockBase@UtagObjLock@@@-$DomainExclusiveBase@$$V@-$DomainSharedBase@$$V@@AEAAXXZ.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

__int64 __fastcall InternalRemoveProp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  char v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+40h] [rbp-28h]
  char v19; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 144);
  v16 = 0;
  v18 = 0;
  v15 = W32GetUserSessionState(a1, a2) + 42384;
  v17 = 0LL;
  v19 = 0;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(v8, v7) == 1 )
  {
    v19 = 1;
    UserSessionState = W32GetUserSessionState(v10, v9);
    v12 = 0LL;
    if ( v3 != UserSessionState + 42480 )
      v12 = v3;
    *(_QWORD *)&v17 = v12;
    DomainSharedBase<>::DomainExclusiveBase<>::ObjectLockBase<tagObjLock>::lock(&v15);
  }
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 && (_WORD)a2 == *(_WORD *)(W32GetUserSessionState(v10, v9) + 69108) )
  {
    LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  }
  v13 = RealInternalRemoveProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( v18 && v19 && (_QWORD)v17 )
    tagObjLock::UnLockExclusive((tagObjLock *)v17);
  return v13;
}
