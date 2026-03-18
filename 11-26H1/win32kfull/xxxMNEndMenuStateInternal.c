/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x14026C3B0
 * Callers:
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsMiPEnabledForThread @ 0x140054BF8 (IsMiPEnabledForThread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     UnlockMFMWFPWindow @ 0x140291824 (UnlockMFMWFPWindow.c)
 *     MNDestroyAnimationBitmap @ 0x1402D07DC (MNDestroyAnimationBitmap.c)
 */

void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+50h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 640);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 640) = *(_QWORD *)(a2 + 48);
  }
  else
  {
    while ( v4 )
    {
      v5 = (_QWORD *)(v4 + 48);
      v4 = *(_QWORD *)(v4 + 48);
      if ( v4 == a2 )
      {
        *v5 = *(_QWORD *)(a2 + 48);
        break;
      }
    }
  }
  if ( IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1512) )
    *(_QWORD *)(*(_QWORD *)(a1 + 464) + 488LL) = 0LL;
  v8 = *(_DWORD *)(a2 + 8);
  if ( (v8 & 0x100) == 0 && (v8 & 0x2000000) != 0 )
  {
    *(_DWORD *)(a2 + 8) = v8 & 0xFDFFFFFF;
    UserSessionState = W32GetUserSessionState(v7, v6);
    --*(_DWORD *)(UserSessionState + 18896);
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  v11 = W32GetUserSessionState(v7, v6);
  if ( a2 == v11 + 65880 )
  {
    v12 = W32GetUserSessionState(v11 + 65880, v10);
    *(_DWORD *)(v12 + 66792) &= ~0x2000000u;
    GreCleanDCAndSetOwnerEx(*(_QWORD *)(v11 + 66016), 2147483666LL, 0LL, 1LL);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 136);
    if ( v13 )
      GreDeleteDC(v13);
    Win32FreePool((void *)a2);
  }
  v14 = *(_QWORD *)(a1 + 640);
  if ( v14 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v16,
      *(struct tagTHREADINFO ***)(a1 + 640));
    if ( (*(_DWORD *)(v14 + 8) & 0x100) != 0 )
    {
      xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v14 + 56LL), 0, 0, 1, 0);
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, *(_QWORD *)v14);
      xxxMNSetCapture(v15, v14);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v15);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v16);
  }
}
