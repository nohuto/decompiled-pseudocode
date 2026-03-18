/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     _GetMenuState @ 0x140220F5C (_GetMenuState.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 SysMenu; // rax
  unsigned int v9; // esi
  unsigned __int16 v10; // ax

  if ( a2 == 161 )
  {
    if ( a3 == 8 || a3 == 9 || (unsigned int)(a3 - 20) < 2 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v10 = xxxDCETrackCaptionButton(a1, a3);
      }
      else
      {
        v10 = xxxTrackCaptionButton(a1, a3);
      }
      v9 = v10;
    }
    else
    {
      if ( (unsigned int)(a3 - 10) > 7 )
      {
LABEL_6:
        xxxHandleNCMouseGuys(a1);
        return;
      }
      v9 = a3 + 61431;
    }
    if ( !v9 )
      goto LABEL_6;
    if ( v9 == 61824
      || (v7 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v7 + 30) & 8) == 0)
      || (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40
      || (SysMenu = xxxGetSysMenu(a1, 1), (GetMenuState(SysMenu, (unsigned __int16)v9 & 0xFFF0) & 3) == 0) )
    {
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 274LL, v9, a4, 0, 0, 0LL, 1u, 1);
    }
  }
  else if ( (unsigned int)(a2 - 162) <= 1 )
  {
    goto LABEL_6;
  }
}
