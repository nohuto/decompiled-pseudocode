/*
 * XREFs of ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180006808 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007ABA4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x18007AC30 (-GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z.c)
 *     ?RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z @ 0x18007AD98 (-RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007AE94 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007AF54 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

void __fastcall CDwmWinSqm::WindowCreated(CDwmWinSqm *this, struct CWindowData *a2)
{
  CDwmWinSqm *v3; // rcx
  CDwmWinSqm *v4; // rcx
  __int64 v5; // r9
  CDwmWinSqm *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rcx
  CDwmWinSqm *v15; // rcx
  WCHAR String2; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v17[126]; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned __int16 v18; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v19[526]; // [rsp+BAh] [rbp-4Eh] BYREF

  String2 = 0;
  memset_0(v17, 0, sizeof(v17));
  v18 = 0;
  memset_0(v19, 0, 0x208uLL);
  CDwmWinSqm::AdjustTimeScaledCount(v3);
  ++dword_1800BD1E4;
  if ( (*((_DWORD *)a2 + 25) & 0x20000000) != 0 )
    ++dword_1800BD1E0;
  if ( (int)CDwmWinSqm::GetAppName(v4, a2, (char *)&String2, v5, &v18) >= 0 )
  {
    if ( *((_DWORD *)a2 + 72) )
    {
      v7 = dword_1800BCCD4;
      v8 = 10;
      if ( !byte_1800BCCD0 )
        v8 = dword_1800BCCD4;
      v9 = 0;
      if ( v8 )
      {
        while ( lstrcmpW(&g_DwmWinSqmInstance[64 * (unsigned __int64)v9], &String2) )
        {
          if ( ++v9 >= v8 )
          {
            v7 = dword_1800BCCD4;
            goto LABEL_11;
          }
        }
      }
      else
      {
LABEL_11:
        StringCchCopyW((char *)&g_DwmWinSqmInstance[64 * (unsigned __int64)v7], 64LL, (char *)&String2);
        if ( (unsigned int)dword_1800BCCD4 >= 9 )
        {
          dword_1800BCCD4 = 0;
          v10 = (unsigned __int8)byte_1800BCCD0;
          if ( !byte_1800BCCD0 )
            v10 = 1LL;
          byte_1800BCCD0 = v10;
        }
        else
        {
          ++dword_1800BCCD4;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v10, &String2, 0xD0Au);
      }
    }
    else if ( (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 364) > 0x78u
            || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 365) > 0x78u)
           && (unsigned __int8)CDesktopManager::CheckAnyPreference(1u)
           && (*((double *)CDesktopManager::s_pDesktopManagerInstance + 165) != 1.0
            || *((double *)CDesktopManager::s_pDesktopManagerInstance + 166) != 1.0) )
    {
      v11 = dword_1800BD1DC;
      v12 = 10;
      if ( !byte_1800BD1D8 )
        v12 = dword_1800BD1DC;
      v13 = 0;
      if ( v12 )
      {
        while ( lstrcmpW(&word_1800BCCD8[64 * (unsigned __int64)v13], &String2) )
        {
          if ( ++v13 >= v12 )
          {
            v11 = dword_1800BD1DC;
            goto LABEL_28;
          }
        }
      }
      else
      {
LABEL_28:
        StringCchCopyW((char *)&word_1800BCCD8[64 * (unsigned __int64)v11], 64LL, (char *)&String2);
        if ( (unsigned int)dword_1800BD1DC >= 9 )
        {
          dword_1800BD1DC = 0;
          v14 = (unsigned __int8)byte_1800BD1D8;
          if ( !byte_1800BD1D8 )
            v14 = 1LL;
          byte_1800BD1D8 = v14;
        }
        else
        {
          ++dword_1800BD1DC;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v14, &String2, 0xD12u);
      }
      WinSqmIncrementDWORD(0LL, 3347LL, 1LL);
    }
  }
  if ( CDwmWinSqm::TestCounter(v6) )
    CDwmWinSqm::RecordMinimizedWndRatio(v15);
}
