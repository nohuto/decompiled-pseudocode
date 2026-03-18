/*
 * XREFs of UnsetLayeredWindow @ 0x1400A2F94
 * Callers:
 *     DeleteFadeSprite @ 0x14009B6F0 (DeleteFadeSprite.c)
 *     CleanupWindowRedirection @ 0x1400A2EF0 (CleanupWindowRedirection.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x140012004 (_SetLayeredWindowAttributes.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateSprite @ 0x140015F78 (UpdateSprite.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     RedirectDCEs @ 0x14014D444 (RedirectDCEs.c)
 *     RemoveVisRgnTracker @ 0x1401D2208 (RemoveVisRgnTracker.c)
 */

__int64 __fastcall UnsetLayeredWindow(ULONG_PTR a1, char a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // r8
  int v9; // eax
  HWND v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // rdx
  void *v17; // rax
  __int64 StyleWindow; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v23; // rax
  _BYTE v24[8]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v25; // [rsp+68h] [rbp-10h]

  v4 = GreIsDynamicModeChangeLocked();
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx();
  else
    GreLockVisRgn();
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0
    && (v15 = SetLayeredWindowAttributes((struct tagWND *)a1, 0, 255, 18), v15 >= 0) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) |= 2u;
    v23 = (void *)ReferenceDwmApiPort(*(_QWORD *)(a1 + 40), v5);
    DwmAsyncChildStyleChange(v23);
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      UpdateSprite(
        *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL),
        (struct tagWND *)a1,
        v8,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        0LL,
        0x80000000,
        0LL);
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~2u;
    *(_DWORD *)(a1 + 380) &= ~0x8000u;
    v9 = IsWindowDesktopComposed(a1);
    v10 = *(HWND *)a1;
    v11 = v9;
    v14 = W32GetUserSessionState(v13, v12);
    v15 = GreDeleteSprite(*(Gre::Base **)(*(_QWORD *)(v14 + 56968) + 40LL), v10, 0LL, v11);
    SetOrClrWF(0, (struct tagWND *)a1, 0xA08u, 1);
    RemoveVisRgnTracker(a1, 1LL);
    v17 = (void *)ReferenceDwmApiPort(*(_QWORD *)(a1 + 40), v16);
    DwmAsyncChildStyleChange(v17);
    StyleWindow = GetStyleWindow(a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1, v19, v21);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17, 0LL);
      if ( v24[0] )
        --*(_DWORD *)(v25 + 28);
    }
  }
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx();
  else
    GreUnlockVisRgn(v20);
  return (unsigned int)v15;
}
