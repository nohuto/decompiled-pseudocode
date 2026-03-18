/*
 * XREFs of xxxMNStartMenuState @ 0x1402D09E8
 * Callers:
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x14017579C (MNFreePopup.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     MNAllocPopup @ 0x140244270 (MNAllocPopup.c)
 *     MNMarkDelayedFreePopup @ 0x140289C9C (MNMarkDelayedFreePopup.c)
 *     MNAllocMenuState @ 0x140290298 (MNAllocMenuState.c)
 *     NullifyLookasideRef @ 0x140294154 (NullifyLookasideRef.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 */

struct tagMENUSTATE *__fastcall xxxMNStartMenuState(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  void *v14; // rax
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct tagWND *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  bool v28; // cf
  struct tagMENUSTATE *v29; // rbx
  __int64 *v30[2]; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-10h] BYREF
  struct tagWND *v32; // [rsp+48h] [rbp-8h]
  struct tagMENUSTATE *v33; // [rsp+88h] [rbp+38h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, 0LL);
  v7 = PtiCurrent(v6);
  if ( *((_QWORD *)v7 + 80) )
    goto LABEL_16;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v8 + 30) & 8) != 0 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v8 = *((_QWORD *)a1 + 5);
    }
    while ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 128LL);
  }
  if ( !a1 )
    goto LABEL_16;
  v9 = safe_cast_fnid_to_PMENUWND((__int64)a1);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 8) || *(_QWORD *)(v9 + 16) )
      goto LABEL_16;
  }
  v11 = *((_QWORD *)a1 + 5);
  if ( ((*(_BYTE *)(v11 + 31) & 0xC0) == 0x40 || !*((_QWORD *)a1 + 21)) && (*(_BYTE *)(v11 + 30) & 8) == 0 )
    goto LABEL_16;
  v12 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( *((_QWORD *)v12 + 80) )
    goto LABEL_16;
  if ( v12 != v7 )
  {
    PostTransformableMessage(a1, 0x112u, v3, a3, 1);
LABEL_16:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v30);
    return 0LL;
  }
  v14 = MNAllocPopup(0LL, v10);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v30, (__int64)v14);
  if ( !*v30[0] )
    goto LABEL_16;
  v15 = (struct tagTHREADINFO **)MNAllocMenuState(v30);
  if ( !v15 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, *v30[0]);
    MNFreePopup((__int64 **)&BugCheckParameter3);
    v16 = *v30[0];
    if ( v16 == W32GetUserSessionState(v18, v17) + 65784 )
    {
      UserSessionState = W32GetUserSessionState(v20, v19);
      *(_DWORD *)(UserSessionState + 66792) &= ~0x800000u;
      v24 = W32GetUserSessionState(v23, v22);
      NullifyLookasideRef(*(_QWORD *)(v24 + 65872));
    }
    else
    {
      FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU>(v30);
    }
    goto LABEL_16;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v33, v15);
  **(_DWORD **)v30[0] |= 1u;
  **(_DWORD **)v30[0] |= 2u;
  v32 = a1;
  BugCheckParameter3 = *v30[0] + 8;
  HMAssignmentLock(&BugCheckParameter3, 0LL);
  *(_DWORD *)(*v30[0] + 80) = -1;
  v32 = a1;
  BugCheckParameter3 = *v30[0] + 16;
  HMAssignmentLock(&BugCheckParameter3, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(&BugCheckParameter3, 0LL);
  MNMarkDelayedFreePopup(v30, (__int64 *)&BugCheckParameter3);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&BugCheckParameter3);
  *(_QWORD *)(*v30[0] + 64) = *v30[0];
  v25 = a1;
  v26 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v26 + 31) & 0xC0) == 0x40 )
  {
    do
      v25 = (struct tagWND *)*((_QWORD *)v25 + 13);
    while ( (*(_BYTE *)(*((_QWORD *)v25 + 5) + 31LL) & 0xC0) == 0x40 );
  }
  v27 = *((_QWORD *)v25 + 21);
  if ( v27 )
    v28 = (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 40LL) & 0x20) != 0;
  else
    v28 = (*(_BYTE *)(v26 + 25) & 0x20) != 0;
  **(_DWORD **)v30[0] = **(_DWORD **)v30[0] & 0xFFBFFFFF | (v28 ? 0x400000 : 0);
  Win32HM_LockIntoThread<0>((__int64)v7, (__int64)a1, &BugCheckParameter3);
  xxxSendMessage(a1, 0x211u);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&BugCheckParameter3);
  v29 = v33;
  if ( !v33 || (unsigned int)xxxUnlockMenuStateInternal(v33, 0) )
    v29 = 0LL;
  v33 = 0LL;
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v33);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v30);
  return v29;
}
