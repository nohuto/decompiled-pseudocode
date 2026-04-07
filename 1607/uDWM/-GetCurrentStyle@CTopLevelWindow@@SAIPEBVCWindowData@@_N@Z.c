/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18003C740
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180006178 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180030F20 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180009284 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(const struct CWindowData *a1)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r14d
  int v5; // eax
  bool v6; // bp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // al
  char v12; // cl
  char v14; // dl

  v2 = 1;
  if ( (*((_BYTE *)a1 + 576) & 8) != 0 )
  {
    v3 = *((_DWORD *)a1 + 25);
    v4 = *((_DWORD *)a1 + 26);
    if ( !*((_DWORD *)a1 + 16)
      && !*((_DWORD *)a1 + 18)
      && !*((_DWORD *)a1 + 17)
      && !*((_DWORD *)a1 + 19)
      && AreAllMarginsZero((const struct _MARGINS *)a1 + 5)
      && !v14 )
    {
      goto LABEL_30;
    }
    if ( (v3 & 0x80u) != 0 )
      v5 = *((_DWORD *)a1 + 197);
    else
      v5 = *((_DWORD *)a1 + 172);
    v6 = *((_DWORD *)a1 + 18) < v5;
    if ( (v3 & 0xC00000) == 0xC00000 )
    {
      v7 = *((_DWORD *)a1 + 84);
      if ( (v7 & 1) == 0 && !v6 )
        v2 = 9;
      if ( (v3 & 0x80000) != 0 )
      {
        if ( (v7 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*((_DWORD *)a1 + 27) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v4 & 0x80u) != 0 )
        {
          v10 = 2;
          goto LABEL_29;
        }
        v8 = *((_DWORD *)a1 + 28);
        if ( (v8 < 8 || v8 > 11)
          && (*((char *)a1 + 580) >= 0
           || GetPropW(*((HWND *)a1 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v9 = *((_DWORD *)a1 + 84);
          if ( (v9 & 2) == 0 && !v6 )
            v2 |= 0x10000u;
          if ( (v9 & 4) == 0 && !v6 )
            v2 |= 0x80u;
          if ( (v9 & 0x10000) == 0 )
          {
            if ( (v3 & 0x30000) != 0 )
            {
              if ( (v3 & 0x20000) != 0 )
                v2 |= 0x1300u;
              if ( (v3 & 0x10000) != 0 )
                v2 |= 0x2300u;
            }
            else if ( (v4 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v10 = 4;
LABEL_29:
    v2 |= v10;
LABEL_30:
    if ( (v3 & 0x1000000) != 0 )
      v2 |= 0x20u;
    if ( (v3 & 0x20000000) != 0 )
      v2 |= 0x40000u;
    v11 = *((_BYTE *)a1 + 576);
    if ( (v11 & 2) != 0 )
      v2 |= 0x40u;
    if ( (v4 & 0x400000) != 0 || v11 < 0 )
    {
      v12 = 1;
      v2 |= 0x20000u;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 != ((v4 & 0x2000) != 0) )
      v2 |= 0x80000u;
    if ( (v4 & 0x1000) != 0 )
      v2 |= 0x400000u;
    return v2;
  }
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) && (*((_DWORD *)a1 + 25) & 0x1000000) != 0 )
    return 2097153;
  return v2;
}
