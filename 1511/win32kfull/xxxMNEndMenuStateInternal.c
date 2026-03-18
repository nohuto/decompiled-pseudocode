/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C0137890
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 * Callees:
 *     IsShellThreadMiPEnabled @ 0x1C0064470 (IsShellThreadMiPEnabled.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMNSetCapture @ 0x1C0134B04 (xxxMNSetCapture.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013776C (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     UnlockMFMWFPWindow @ 0x1C0137970 (UnlockMFMWFPWindow.c)
 *     MNDestroyAnimationBitmap @ 0x1C01FD418 (MNDestroyAnimationBitmap.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  struct tagMENUSTATE *v11; // [rsp+30h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 64);
  UnlockMFMWFPWindow(a2 + 80);
  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 528) = *(_QWORD *)(a2 + 48);
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 48);
      if ( v6 == a2 )
        break;
      v4 = *(_QWORD *)(v4 + 48);
      if ( !v6 )
        goto LABEL_3;
    }
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(a2 + 48);
  }
LABEL_3:
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 776LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled((_QWORD *)a1))
    && *(_QWORD *)(a1 + 1112) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 384) + 384LL) = 0LL;
  }
  v5 = *(_DWORD *)(a2 + 8);
  if ( (v5 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *(_DWORD *)(a2 + 8) = v5 & 0xFDFFFFFF;
  }
  if ( *(_QWORD *)(a2 + 128) )
    MNDestroyAnimationBitmap(a2);
  if ( (void *const)a2 == gMenuState )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreSetDCOwnerEx(*((_QWORD *)&gMenuState + 17), 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 136);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool(a2);
  }
  if ( *(_QWORD *)(a1 + 528) )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      *(struct tagMENUSTATE **)(a1 + 528));
    v10 = *(_QWORD *)v9;
    if ( (*(_DWORD *)(v9 + 8) & 0x100) != 0 )
      xxxActivateThisWindow(*(struct tagWND **)(v10 + 56), 0, 0, 0);
    else
      xxxMNSetCapture(v10, v8);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v11);
  }
}
