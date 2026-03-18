/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C010B390
 * Callers:
 *     xxxMNEndMenuState @ 0x1C010B2F0 (xxxMNEndMenuState.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     IsShellThreadMiPEnabled @ 0x1C00E1D60 (IsShellThreadMiPEnabled.c)
 *     xxxMNSetCapture @ 0x1C0107ABC (xxxMNSetCapture.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C010B274 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C010B284 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     UnlockMFMWFPWindow @ 0x1C010B474 (UnlockMFMWFPWindow.c)
 *     MNDestroyAnimationBitmap @ 0x1C01FCF78 (MNDestroyAnimationBitmap.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, HDC a2)
{
  HDC v4; // rcx
  int v5; // ecx
  HDC v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  struct tagMENUSTATE *v11; // [rsp+30h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 16);
  UnlockMFMWFPWindow(a2 + 20);
  v4 = *(HDC *)(a1 + 536);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 536) = *((_QWORD *)a2 + 6);
  }
  else if ( v4 )
  {
    while ( 1 )
    {
      v6 = (HDC)*((_QWORD *)v4 + 6);
      if ( v6 == a2 )
        break;
      v4 = (HDC)*((_QWORD *)v4 + 6);
      if ( !v6 )
        goto LABEL_3;
    }
    *((_QWORD *)v4 + 6) = *((_QWORD *)a2 + 6);
  }
LABEL_3:
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 384) + 776LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled((_QWORD *)a1))
    && *(_QWORD *)(a1 + 1120) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 392) + 384LL) = 0LL;
  }
  v5 = *((_DWORD *)a2 + 2);
  if ( (v5 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 2) = v5 & 0xFDFFFFFF;
  }
  if ( *((_QWORD *)a2 + 16) )
    MNDestroyAnimationBitmap(a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreCleanDCAndSetOwnerEx(gMenuState[17], 2147483666LL, 0LL, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a2 + 17);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool(a2);
  }
  if ( *(_QWORD *)(a1 + 536) )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      *(struct tagMENUSTATE **)(a1 + 536));
    v10 = *(_QWORD *)v9;
    if ( (*(_DWORD *)(v9 + 8) & 0x100) != 0 )
      xxxActivateThisWindow(*(struct tagWND **)(v10 + 56), 0, 0, 0);
    else
      xxxMNSetCapture(v10, v8);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v11);
  }
}
