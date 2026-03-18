/*
 * XREFs of UnsetLayeredWindow @ 0x1C0066114
 * Callers:
 *     CleanupWindowRedirection @ 0x1C00567B0 (CleanupWindowRedirection.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C013FDD0 (DeleteFadeSprite.c)
 * Callees:
 *     UpdateSprite @ 0x1C00527B0 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     RedirectDCEs @ 0x1C0063468 (RedirectDCEs.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
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
  v7 = GreDeleteSprite((HDEV)*gpDispInfo, *(struct PDEVOBJ **)a1, 0LL, v6);
  SetOrClrWF(0LL, a1, 2568LL, 1LL);
  StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
  if ( StyleWindow && StyleWindow != a1 )
    RedirectDCEs(a1);
  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  }
  if ( v4 )
    goto LABEL_23;
  v9 = (_QWORD *)gpDispInfo;
LABEL_13:
  GreUnlockVisRgn(*v9);
  return (unsigned int)v7;
}
