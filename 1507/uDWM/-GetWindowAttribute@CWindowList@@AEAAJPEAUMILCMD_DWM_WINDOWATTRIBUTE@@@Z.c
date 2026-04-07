/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x1800020B8
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F800 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180002128 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007856C (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x18007873C (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 */

__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  unsigned int v4; // edi
  HWND v5; // rdx
  int ExtendedFrameBounds; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024872;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 4) != 5 )
  {
    if ( *((_DWORD *)a2 + 4) == 8 )
    {
      if ( *((_DWORD *)a2 + 5) != 16 )
        goto LABEL_5;
      ExtendedFrameBounds = CWindowList::GetExtendedFrameBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
    }
    else
    {
      if ( *((_DWORD *)a2 + 4) != 12 )
      {
        v4 = -2147024809;
        goto LABEL_5;
      }
      if ( *((_DWORD *)a2 + 5) != 20 )
        goto LABEL_5;
      ExtendedFrameBounds = CWindowList::GetNcAdornmentInfoAttribute(
                              this,
                              v5,
                              (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
    }
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 5) == 16 )
  {
    ExtendedFrameBounds = CWindowList::GetCaptionButtonBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
LABEL_4:
    v4 = ExtendedFrameBounds;
  }
LABEL_5:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
