/*
 * XREFs of UnsetLayeredWindow @ 0x1C000CA0C
 * Callers:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     CleanupWindowRedirection @ 0x1C008B0D0 (CleanupWindowRedirection.c)
 *     DeleteFadeSprite @ 0x1C010E1E0 (DeleteFadeSprite.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     GreDeleteSprite @ 0x1C000CBEC (GreDeleteSprite.c)
 *     RedirectDCEs @ 0x1C00129A0 (RedirectDCEs.c)
 *     _SetLayeredWindowAttributes @ 0x1C0057144 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // edi
  int v5; // r8d
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
    v7 = SetLayeredWindowAttributes(a1);
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
    UpdateSprite(*gpDispInfo, (_DWORD)a1, v5, 0, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
LABEL_6:
  if ( (*((_BYTE *)a1 + 51) & 0x20) != 0 )
    UnsetRedirectedWindow(a1);
  *((_DWORD *)a1 + 72) &= ~0x40u;
  v6 = IsWindowDesktopComposed(a1);
  v7 = GreDeleteSprite((HDEV)*gpDispInfo, *(HWND *)a1, 0LL, v6);
  SetOrClrWF(0LL, a1, 2568LL, 1LL);
  StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
  if ( StyleWindow && StyleWindow != a1 )
    RedirectDCEs(a1);
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  }
  if ( v4 )
    goto LABEL_23;
  v9 = (_QWORD *)gpDispInfo;
LABEL_13:
  GreUnlockVisRgn(*v9);
  return (unsigned int)v7;
}
