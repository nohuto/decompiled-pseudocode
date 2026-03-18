/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C0141310
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     IsShellThreadMiPEnabled @ 0x1C0105500 (IsShellThreadMiPEnabled.c)
 *     xxxMNSetCapture @ 0x1C013B99C (xxxMNSetCapture.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C013ECB4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013ECC4 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     UnlockMFMWFPWindow @ 0x1C01413F4 (UnlockMFMWFPWindow.c)
 *     MNDestroyAnimationBitmap @ 0x1C01F46A8 (MNDestroyAnimationBitmap.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, HDC a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  HDC v6; // rcx
  int v7; // ecx
  HDC v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  struct tagMENUSTATE *v13; // [rsp+30h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 16);
  UnlockMFMWFPWindow(a2 + 20);
  v6 = *(HDC *)(a1 + 528);
  if ( v6 == a2 )
  {
    *(_QWORD *)(a1 + 528) = *((_QWORD *)a2 + 6);
  }
  else if ( v6 )
  {
    while ( 1 )
    {
      v8 = (HDC)*((_QWORD *)v6 + 6);
      if ( v8 == a2 )
        break;
      v6 = (HDC)*((_QWORD *)v6 + 6);
      if ( !v8 )
        goto LABEL_3;
    }
    *((_QWORD *)v6 + 6) = *((_QWORD *)a2 + 6);
  }
LABEL_3:
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 768LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled((_QWORD *)a1))
    && *(_QWORD *)(a1 + 1136) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 384) + 392LL) = 0LL;
  }
  v7 = *((_DWORD *)a2 + 2);
  if ( (v7 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 2) = v7 & 0xFDFFFFFF;
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
    v9 = *((_QWORD *)a2 + 17);
    if ( v9 )
      GreDeleteDC(v9);
    Win32FreePool(a2, v4, v5);
  }
  if ( *(_QWORD *)(a1 + 528) )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v13,
      *(struct tagMENUSTATE **)(a1 + 528));
    v12 = *(_QWORD *)v11;
    if ( (*(_DWORD *)(v11 + 8) & 0x100) != 0 )
      xxxActivateThisWindow(*(struct tagWND **)(v12 + 56), 0, 0, 0);
    else
      xxxMNSetCapture(v12, v10);
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v13);
  }
}
