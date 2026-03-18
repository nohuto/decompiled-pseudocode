/*
 * XREFs of xxxMNEndMenuState @ 0x140177ED0
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxUnlockMenuState @ 0x140177E00 (xxxUnlockMenuState.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNFreePopup @ 0x14017579C (MNFreePopup.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     NullifyLookasideRef @ 0x140294154 (NullifyLookasideRef.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 *     MNFlushDestroyedPopups @ 0x1402D0840 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1402D0930 (MNUnlinkDelayedFreePopups.c)
 */

_QWORD *__fastcall xxxMNEndMenuState(_QWORD *a1)
{
  struct tagTHREADINFO *v2; // rdi
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v16[2]; // [rsp+30h] [rbp-10h] BYREF

  v2 = PtiCurrent((__int64)a1);
  v4 = PtiCurrent(v3);
  v14 = (_QWORD *)gSmartObjNullRef;
  v15 = *((_QWORD *)v4 + 209);
  *((_QWORD *)v4 + 209) = &v15;
  *((_DWORD *)a1 + 2) |= 0x1000000u;
  if ( !*((_DWORD *)a1 + 10) )
  {
    if ( *a1 )
    {
      MNFlushDestroyedPopups(*a1);
      MNUnlinkDelayedFreePopups(*a1);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v14, *a1);
      *(_DWORD *)*v14 |= 0x20000000u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, *a1);
      MNFreePopup(v16);
    }
    xxxMNEndMenuStateInternal(v2, a1);
    if ( !*v14 || (*(_DWORD *)*v14 & 0x40000000) != 0 )
    {
      if ( *v14 )
        *(_DWORD *)*v14 &= ~0x20000000u;
    }
    else
    {
      v6 = (_DWORD *)*v14;
      if ( v6 == (_DWORD *)(W32GetUserSessionState(*v14, v5) + 65784) )
      {
        UserSessionState = W32GetUserSessionState(v8, v7);
        *(_DWORD *)(UserSessionState + 66792) &= ~0x800000u;
        v12 = W32GetUserSessionState(v11, v10);
        NullifyLookasideRef(*(_QWORD *)(v12 + 65872));
      }
      else
      {
        FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU>(&v14);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v14);
}
