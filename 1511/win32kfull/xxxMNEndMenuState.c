/*
 * XREFs of xxxMNEndMenuState @ 0x1C01377F0
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01377A4 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1C0216594 (xxxCallHandleMenuMessages.c)
 * Callees:
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
 *     MNFreePopup @ 0x1C0138BE0 (MNFreePopup.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C013A0B0 (MNUnlinkDelayedFreePopups.c)
 *     MNFlushDestroyedPopups @ 0x1C013A0E0 (MNFlushDestroyedPopups.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __fastcall xxxMNEndMenuState(_QWORD *a1)
{
  unsigned int result; // eax
  unsigned int *v2; // rbx

  result = gptiCurrent;
  v2 = 0LL;
  *((_DWORD *)a1 + 2) |= 0x1000000u;
  if ( !*((_DWORD *)a1 + 10) )
  {
    if ( *a1 )
    {
      MNFlushDestroyedPopups();
      MNUnlinkDelayedFreePopups(*a1);
      v2 = (unsigned int *)*a1;
      *(_DWORD *)*a1 |= 0x20000000u;
      MNFreePopup(*a1);
    }
    result = xxxMNEndMenuStateInternal(gptiCurrent, a1);
    if ( v2 )
    {
      if ( (*v2 & 0x40000000) != 0 )
      {
        result = *v2 & 0xDFFFFFFF;
        *v2 = result;
      }
      else if ( v2 == (unsigned int *)gpopupMenu )
      {
        result = gdwPUDFlags;
        gdwPUDFlags &= ~0x800000u;
      }
      else
      {
        return Win32FreePool(v2);
      }
    }
  }
  return result;
}
