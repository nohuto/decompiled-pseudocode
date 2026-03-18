/*
 * XREFs of UnsetLayeredWindow @ 0x1C007FC9C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C00686E8 (CleanupWindowRedirection.c)
 *     ComposeWindow @ 0x1C0080214 (ComposeWindow.c)
 *     DeleteFadeSprite @ 0x1C0139C50 (DeleteFadeSprite.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     UpdateSprite @ 0x1C006BC94 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1C0079C68 (_SetLayeredWindowAttributes.c)
 *     RedirectDCEs @ 0x1C007A688 (RedirectDCEs.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // edi
  __int64 v5; // r8
  int v6; // eax
  int v7; // esi
  struct tagWND *StyleWindow; // rax
  _QWORD *v9; // rcx
  char v11; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*gpDispInfo);
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*gpDispInfo);
  else
    GreLockVisRgn(*gpDispInfo);
  if ( (a2 & 1) == 0 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
      goto LABEL_6;
    v7 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 18);
    if ( v7 >= 0 )
    {
      *((_DWORD *)a1 + 72) |= 0x20u;
      if ( !v4 )
      {
        v9 = (_QWORD *)gpDispInfo;
        goto LABEL_13;
      }
LABEL_23:
      GreUnlockVisRgnWithDmcLockAcquiredEx(*gpDispInfo);
      return (unsigned int)v7;
    }
  }
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
    UpdateSprite((HDEV)*gpDispInfo, (__int64)a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
LABEL_6:
  if ( (*((_BYTE *)a1 + 51) & 0x20) != 0 )
    UnsetRedirectedWindow(a1);
  *((_DWORD *)a1 + 72) &= ~0x40u;
  v6 = IsWindowDesktopComposed(a1);
  v7 = GreDeleteSprite((HDEV)*gpDispInfo, *(HWND *)a1, 0LL, v6);
  SetOrClrWF(0LL, a1, 2568LL, 1LL);
  StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
  if ( StyleWindow && StyleWindow != a1 )
    RedirectDCEs(a1);
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  }
  if ( v4 )
    goto LABEL_23;
  v9 = (_QWORD *)gpDispInfo;
LABEL_13:
  GreUnlockVisRgn(*v9);
  return (unsigned int)v7;
}
