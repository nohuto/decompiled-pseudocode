/*
 * XREFs of xxxDWP_DoNCActivate @ 0x140122C04
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     IsModelessMenuNotificationWindow @ 0x140122D88 (IsModelessMenuNotificationWindow.c)
 *     DwmAsyncActivationChange @ 0x140122DE0 (DwmAsyncActivationChange.c)
 *     ?AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z @ 0x140122E9C (-AreNonClientAreasToBePainted@@YAIPEAUtagWND@@@Z.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x140123A0C (GetWindowBorders.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     xxxMenuBarDraw @ 0x14024FBA4 (xxxMenuBarDraw.c)
 */

__int64 __fastcall xxxDWP_DoNCActivate(struct tagWND *a1, char a2, __int64 a3)
{
  BOOL v5; // ecx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  HDC DCEx; // rdi
  __int64 v13; // rcx
  unsigned int WindowBorders; // eax

  v5 = (a2 & 1) != 0 || (a2 & 2) == 0 && (unsigned int)IsModelessMenuNotificationWindow();
  SetOrClrWF(v5, a1, 0x40u, 1);
  if ( a3 != -1 )
  {
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v10 + 31) & 0x10) != 0
      && (*(_BYTE *)(v10 + 17) & 1) == 0
      && (unsigned __int16)AreNonClientAreasToBePainted(a1) )
    {
      v11 = UserValidateCopyRgn(a3);
      DCEx = (HDC)_GetDCEx(a1, v11, 65537LL);
      if ( DCEx )
      {
        v13 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v13 + 16) & 1) != 0 )
        {
          WindowBorders = GetWindowBorders(*(unsigned int *)(v13 + 28), *(unsigned int *)(v13 + 24));
          xxxMenuBarDraw(a1, DCEx, WindowBorders, WindowBorders);
        }
        xxxDrawCaptionBar(a1, DCEx);
        _ReleaseDC(DCEx);
      }
      else
      {
        GreDeleteObject(v11);
      }
    }
  }
  result = IsToplevelWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    result = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(result + 26) & 8) != 0 )
    {
      v9 = (void *)ReferenceDwmApiPort(v8, v7);
      return DwmAsyncActivationChange(v9);
    }
  }
  return result;
}
