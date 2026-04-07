/*
 * XREFs of ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x180083180
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800155D0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x180082DBC (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z @ 0x180082E48 (-GetAppName@CDwmWinSqm@@QEAAJPEAVCWindowData@@PEAG_K12@Z.c)
 *     ?RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z @ 0x180082FB0 (-RecordAppName@CDwmWinSqm@@QEAAXPEAGK@Z.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x180083098 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x180083158 (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
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
  size_t String2[16]; // [rsp+30h] [rbp-2A8h] BYREF
  unsigned __int16 v17[264]; // [rsp+B0h] [rbp-228h] BYREF

  memset_0(String2, 0, sizeof(String2));
  memset_0(v17, 0, 0x20AuLL);
  CDwmWinSqm::AdjustTimeScaledCount(v3);
  ++dword_1800BB204;
  if ( (*((_DWORD *)a2 + 25) & 0x20000000) != 0 )
    ++dword_1800BB200;
  if ( (int)CDwmWinSqm::GetAppName(v4, a2, (unsigned __int16 *)String2, v5, v17) >= 0 )
  {
    if ( *((_DWORD *)a2 + 76) )
    {
      v7 = dword_1800BACF4;
      v8 = 10;
      if ( !byte_1800BACF0 )
        v8 = dword_1800BACF4;
      v9 = 0;
      if ( v8 )
      {
        while ( lstrcmpW(&g_DwmWinSqmInstance[64 * (unsigned __int64)v9], (LPCWSTR)String2) )
        {
          if ( ++v9 >= v8 )
          {
            v7 = dword_1800BACF4;
            goto LABEL_11;
          }
        }
      }
      else
      {
LABEL_11:
        StringCchCopyW(&g_DwmWinSqmInstance[64 * (unsigned __int64)v7], 0x40uLL, String2);
        if ( (unsigned int)dword_1800BACF4 >= 9 )
        {
          dword_1800BACF4 = 0;
          v10 = (unsigned __int8)byte_1800BACF0;
          if ( !byte_1800BACF0 )
            v10 = 1LL;
          byte_1800BACF0 = v10;
        }
        else
        {
          ++dword_1800BACF4;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v10, (unsigned __int16 *)String2, 0xD0Au);
      }
    }
    else if ( (*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 360) > 0x78u
            || *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 361) > 0x78u)
           && (unsigned __int8)CDesktopManager::CheckAnyPreference(1u)
           && (*((double *)CDesktopManager::s_pDesktopManagerInstance + 163) != 1.0
            || *((double *)CDesktopManager::s_pDesktopManagerInstance + 164) != 1.0) )
    {
      v11 = dword_1800BB1FC;
      v12 = 10;
      if ( !byte_1800BB1F8 )
        v12 = dword_1800BB1FC;
      v13 = 0;
      if ( v12 )
      {
        while ( lstrcmpW(&word_1800BACF8[64 * (unsigned __int64)v13], (LPCWSTR)String2) )
        {
          if ( ++v13 >= v12 )
          {
            v11 = dword_1800BB1FC;
            goto LABEL_28;
          }
        }
      }
      else
      {
LABEL_28:
        StringCchCopyW(&word_1800BACF8[64 * (unsigned __int64)v11], 0x40uLL, String2);
        if ( (unsigned int)dword_1800BB1FC >= 9 )
        {
          dword_1800BB1FC = 0;
          v14 = (unsigned __int8)byte_1800BB1F8;
          if ( !byte_1800BB1F8 )
            v14 = 1LL;
          byte_1800BB1F8 = v14;
        }
        else
        {
          ++dword_1800BB1FC;
        }
        CDwmWinSqm::RecordAppName((CDwmWinSqm *)v14, (unsigned __int16 *)String2, 0xD12u);
      }
      WinSqmIncrementDWORD(0LL, 3347LL, 1LL);
    }
  }
  if ( CDwmWinSqm::TestCounter(v6) )
    CDwmWinSqm::RecordMinimizedWndRatio(v15);
}
