/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180005D10
 * Callers:
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180002128 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18007856C (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800058E8 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(const struct CWindowData *a1)
{
  char v1; // di
  const struct CWindowData *v2; // r9
  unsigned int v3; // r8d
  int v4; // r10d
  int v5; // r11d
  int v6; // eax
  char v7; // dl
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v11; // cl
  char v13; // dl

  v1 = *((_BYTE *)a1 + 552);
  v2 = a1;
  v3 = 1;
  if ( (v1 & 8) != 0 )
  {
    v4 = *((_DWORD *)a1 + 25);
    v5 = *((_DWORD *)a1 + 26);
    if ( !*((_DWORD *)a1 + 16)
      && !*((_DWORD *)a1 + 18)
      && !*((_DWORD *)a1 + 17)
      && !*((_DWORD *)a1 + 19)
      && AreAllMarginsZero((const struct _MARGINS *)a1 + 5)
      && !v13 )
    {
      goto LABEL_32;
    }
    if ( (v4 & 0x80u) != 0 )
      v6 = *((_DWORD *)v2 + 193);
    else
      v6 = *((_DWORD *)v2 + 168);
    if ( *((_DWORD *)v2 + 18) < v6 )
      v7 = v3;
    else
      v7 = 0;
    if ( (v4 & 0xC00000) == 0xC00000 )
    {
      v8 = *((_DWORD *)v2 + 80);
      if ( ((unsigned __int8)v8 & (unsigned __int8)v3) == 0 && !v7 )
        v3 = 9;
      if ( (v4 & 0x80000) != 0 )
      {
        if ( (v8 & 0x10000) == 0 )
        {
          v3 |= 0x400u;
          if ( (*((_DWORD *)v2 + 27) & 0x200) == 0 )
            v3 |= 0x4000u;
        }
        if ( (v5 & 0x80u) != 0 )
        {
          v10 = 2;
          goto LABEL_31;
        }
        v9 = *((_DWORD *)v2 + 28);
        if ( (v9 < 8 || v9 > 11) && (*((_BYTE *)v2 + 557) & 2) == 0 )
        {
          if ( (v8 & 2) == 0 && !v7 )
            v3 |= 0x10000u;
          if ( (v8 & 4) == 0 && !v7 )
            v3 |= 0x80u;
          if ( (v8 & 0x10000) == 0 )
          {
            if ( (v4 & 0x30000) != 0 )
            {
              if ( (v4 & 0x20000) != 0 )
                v3 |= 0x1300u;
              if ( (v4 & 0x10000) != 0 )
                v3 |= 0x2300u;
            }
            else if ( (v5 & 0x400) != 0 )
            {
              v3 |= 0x8800u;
            }
          }
        }
      }
    }
    v10 = 4;
LABEL_31:
    v3 |= v10;
LABEL_32:
    if ( (v4 & 0x1000000) != 0 )
      v3 |= 0x20u;
    if ( (v4 & 0x20000000) != 0 )
      v3 |= 0x40000u;
    if ( (v1 & 2) != 0 )
      v3 |= 0x40u;
    if ( (v5 & 0x400000) != 0 || v1 < 0 )
    {
      v11 = 1;
      v3 |= 0x20000u;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 != ((v5 & 0x2000) != 0) )
      v3 |= 0x80000u;
    if ( (v5 & 0x1000) != 0 )
      v3 |= 0x800000u;
    return v3;
  }
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) && (*((_DWORD *)a1 + 25) & 0x1000000) != 0 )
    return 4194305;
  return v3;
}
