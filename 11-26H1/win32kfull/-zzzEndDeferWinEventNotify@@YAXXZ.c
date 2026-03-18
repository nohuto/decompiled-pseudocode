/*
 * XREFs of ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     EditionEndDeferWinEventNotify @ 0x14001A860 (EditionEndDeferWinEventNotify.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x14005ABD0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005E9E0 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400831B0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxCreateCaret @ 0x14014C980 (xxxCreateCaret.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140179A14 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     NtUserSetImeOwnerWindow @ 0x140179ED0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     NtUserLockWindowUpdate @ 0x140279BF0 (NtUserLockWindowUpdate.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 *     NtUserSetShellWindowEx @ 0x1402BDEB0 (NtUserSetShellWindowEx.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x14001A9A0 (xxxFlushDeferredWindowEvents.c)
 */

void zzzEndDeferWinEventNotify(void)
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  tagDomLock *v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-38h]
  char v15; // [rsp+28h] [rbp-30h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  char v17; // [rsp+38h] [rbp-20h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+48h] [rbp-10h]

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v15 = 1;
  v17 = 0;
  v3 = &v15;
  v16 = W32GetUserSessionState(v2, v1) + 42384;
  v18 = 0LL;
  v5 = 0;
  v19 = 0;
  do
  {
    v6 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v6 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v6);
      else
        tagDomLock::LockShared(v6);
    }
    ++v5;
    v3 += 16;
  }
  while ( !v5 );
  v19 = 1;
  UserSessionState = W32GetUserSessionState(v6, v4);
  if ( (*(_DWORD *)(UserSessionState + 70592))-- == 1 )
  {
    v11 = W32GetUserSessionState(v9, v8);
    if ( *(_QWORD *)(v11 + 70600) != v11 + 70600 )
    {
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v12);
      if ( CurrentThreadWin32Thread )
      {
        if ( *CurrentThreadWin32Thread )
          xxxFlushDeferredWindowEvents();
      }
    }
  }
  if ( v19 && DomainLockRef )
  {
    if ( v15 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
