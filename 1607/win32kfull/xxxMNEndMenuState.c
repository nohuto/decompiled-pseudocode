/*
 * XREFs of xxxMNEndMenuState @ 0x1C0142C80
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0142EC4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C020F130 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 *     MNFreePopup @ 0x1C0142D70 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0142E70 (MNUnlinkDelayedFreePopups.c)
 *     MNFlushDestroyedPopups @ 0x1C0142EA0 (MNFlushDestroyedPopups.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuState(HDC a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  v1 = 0LL;
  *((_DWORD *)a1 + 2) |= 0x1000000u;
  if ( !*((_DWORD *)a1 + 10) )
  {
    v3 = *(_QWORD *)a1;
    if ( v3 )
    {
      MNFlushDestroyedPopups(v3);
      MNUnlinkDelayedFreePopups(*(_QWORD *)a1);
      v1 = *(_DWORD **)a1;
      **(_DWORD **)a1 |= 0x20000000u;
      MNFreePopup(*(_QWORD *)a1);
    }
    xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( v1 )
    {
      if ( (*v1 & 0x40000000) != 0 )
      {
        *v1 &= ~0x20000000u;
      }
      else if ( v1 == (_DWORD *)gpopupMenu )
      {
        gdwPUDFlags &= ~0x800000u;
      }
      else
      {
        Win32FreePool(v1, v4, v5);
      }
    }
  }
}
