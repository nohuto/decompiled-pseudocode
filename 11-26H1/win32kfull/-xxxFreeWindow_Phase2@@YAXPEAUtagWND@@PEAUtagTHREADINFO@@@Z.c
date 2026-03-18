/*
 * XREFs of ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     SfnDWORD @ 0x140039C80 (SfnDWORD.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140046B9C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     IsSysShadow @ 0x140083EE4 (IsSysShadow.c)
 *     xxxRemoveShadow @ 0x140084278 (xxxRemoveShadow.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     ClearDelegationCapture @ 0x1401CAD60 (ClearDelegationCapture.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1401D90DC (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1401E877C (xxxClientFreeWindowClassExtraBytes.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401F1D14 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     CleanupShadow @ 0x1402411A4 (CleanupShadow.c)
 *     xxxDDETrackWindowDying @ 0x1402CDDE4 (xxxDDETrackWindowDying.c)
 *     ?xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z @ 0x1402EF590 (-xxxOnTrackingWindowDestroyed@@YAXPEAUtagTHREADINFO@@PEAUtagDESKTOP@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall xxxFreeWindow_Phase2(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  Scrollbar::NonClient *v11; // rcx
  ULONG_PTR v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct tagWND **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND **v18; // rcx
  struct tagWND **v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct tagWND **v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 Prop; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rdi
  __int64 v39; // rax
  struct tagINPUT_MESSAGE_SOURCE *v40; // [rsp+20h] [rbp-78h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v42[16]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+8h] BYREF

  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 130LL, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
  SetOrClrWF(0LL, a1, 1088LL, 0LL);
  v4 = *(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 42LL);
  v5 = v4 & 0x2FFF;
  if ( ((unsigned __int16)v4 & 0x2FFFu) >= 0x29A && (v4 & 0x4000) == 0 )
  {
    if ( v5 > 0x2A0u )
    {
      if ( v5 > 0x2AAu )
        goto LABEL_12;
    }
    else if ( v5 != 666 )
    {
      UserSessionState = W32GetUserSessionState(v4, 666LL);
      v40 = 0LL;
      (*(void (__fastcall **)(struct tagWND *, __int64, _QWORD, _QWORD))(UserSessionState
                                                                       + 8LL * (((_BYTE)v5 + 6) & 0x1F)
                                                                       + 70904))(
        a1,
        112LL,
        0LL,
        0LL);
LABEL_12:
      *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x4000u;
      goto LABEL_13;
    }
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 130, 0, 0) & 1) == 0 )
    {
      if ( v5 == 666 )
        v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 666LL) + 19904) + 7592LL);
      else
        v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, 666LL) + 19904) + 8 * (v4 & 0x2FFF) - 4608);
      SfnDWORD((__int64 *)a1, 112, 0LL, 0LL, 0LL, v7);
    }
    goto LABEL_12;
  }
LABEL_13:
  *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) |= 0x8000u;
  v8 = *((_QWORD *)a1 + 5);
  v9 = *(_QWORD *)(v8 + 296);
  if ( v9 )
  {
    if ( v9 != -1 )
    {
      *(_QWORD *)(v8 + 296) = 0LL;
      if ( (*(_DWORD *)(PsGetCurrentProcess(0x8000LL) + 500) & 0x40000008) == 0
        && (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 130, 0, 0) & 1) == 0 )
      {
        xxxClientFreeWindowClassExtraBytes(a1, v9);
      }
    }
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = 0;
  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v11) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 336LL) = 0;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( v12 )
  {
    v10 = v12 + 200;
    if ( *(struct tagWND **)(v12 + 200) == a1 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( *(char *)(v13 + 19) < 0 || *(char *)(v13 + 20) < 0 )
        v12 = 0LL;
      BugCheckParameter3[0] = v10;
      BugCheckParameter3[1] = v12;
      HMAssignmentLock(BugCheckParameter3, 0LL);
      *(_OWORD *)BugCheckParameter3 = *(_OWORD *)LockPointer(
                                                   v42,
                                                   *((_QWORD *)a1 + 15) + 200LL,
                                                   *(_QWORD *)(*((_QWORD *)a1 + 15) + 200LL));
      HMAssignmentLock(BugCheckParameter3, 0LL);
    }
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v11, v10) + 19904) & 4) != 0 && a1 == *((struct tagWND **)a2 + 102) )
    HMAssignmentUnlock((char *)a2 + 816);
  if ( *((struct tagWND **)a2 + 198) == a1 )
    HMAssignmentUnlock((char *)a2 + 1584);
  if ( *((struct tagWND **)a2 + 207) == a1 )
    HMAssignmentUnlock((char *)a2 + 1656);
  if ( *((struct tagWND **)a2 + 208) == a1 )
    HMAssignmentUnlock((char *)a2 + 1664);
  v15 = (struct tagWND **)*((_QWORD *)a2 + 58);
  if ( a1 == v15[15] )
  {
    tagQ::UnlockFocusWnd((tagQ *)v15);
    if ( *((_QWORD *)a2 + 58) == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18928) )
      zzzInputFocusLostWindowEvent(a1, 10LL);
  }
  v18 = (struct tagWND **)(*((_QWORD *)a2 + 58) + 136LL);
  if ( a1 == *v18 )
    HMAssignmentUnlock(v18);
  v19 = (struct tagWND **)*((_QWORD *)a2 + 58);
  if ( a1 == v19[16] )
    tagQ::SetActiveWindow((tagQ *)v19, 0LL);
  v20 = *((_QWORD *)a2 + 58);
  if ( a1 == *(struct tagWND **)(v20 + 144) )
    ClearDelegationCapture();
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState(v20, v14) + 63480) )
  {
    v23 = W32GetUserSessionState(v22, v21);
    HMAssignmentUnlock(v23 + 63480);
  }
  v24 = (struct tagWND **)*((_QWORD *)a1 + 3);
  if ( v24 && a1 == v24[24] )
  {
    v43 = 0LL;
    NotifyShell::HitTestPartUpdate((NotifyShell *)v24, a1, 0LL, (int)&v43, v40);
    xxxOnTrackingWindowDestroyed(a2, *((struct tagDESKTOP **)a1 + 3));
    HMAssignmentUnlock(*((_QWORD *)a1 + 3) + 192LL);
    *(_DWORD *)(*((_QWORD *)a1 + 3) + 48LL) &= 0xFFFFFC3F;
  }
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 58) + 112LL) )
    xxxReleaseCapture();
  if ( (unsigned int)IsSysShadow(a1) )
    CleanupShadow(a1);
  else
    xxxRemoveShadow(a1);
  DestroyWindowSmIcon(a1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 272LL) = 0LL;
  v27 = *((_QWORD *)a1 + 18);
  if ( v27 && *(_QWORD *)(v27 + 24) )
  {
    v28 = W32GetUserSessionState(v26, v25);
    Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v28 + 41376), 1u);
    v32 = Prop;
    if ( Prop )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, Prop, BugCheckParameter3);
      xxxDDETrackWindowDying(v33, v32);
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3);
    }
    v34 = W32GetUserSessionState(v31, v30);
    v35 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v34 + 41380), 1u);
    v38 = (void *)v35;
    if ( v35 )
    {
      *(_WORD *)(v35 + 88) = 0;
      if ( !*(_WORD *)(v35 + 90) )
      {
        SeDeleteClientSecurity(v35 + 16);
        Win32FreePool(v38);
      }
    }
    v39 = W32GetUserSessionState(v37, v36);
    InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v39 + 41402), 1u);
    DeleteStringPropertyAtoms(a1);
  }
  if ( (*((_DWORD *)a1 + 96) & 2) != 0 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
    PostIAMShellHookMessage(0x12u, *(_QWORD *)a1);
}
