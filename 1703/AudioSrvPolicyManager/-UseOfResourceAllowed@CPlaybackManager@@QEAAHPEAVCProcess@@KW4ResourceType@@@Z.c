/*
 * XREFs of ?UseOfResourceAllowed@CPlaybackManager@@QEAAHPEAVCProcess@@KW4ResourceType@@@Z @ 0x180016498
 * Callers:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x18000D9F0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProcess@@@Z @ 0x180013304 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@PEAVCProc.c)
 *     WPP_SF_dSd @ 0x180015CA8 (WPP_SF_dSd.c)
 */

__int64 __fastcall CPlaybackManager::UseOfResourceAllowed(
        CPlaybackManager *this,
        struct CProcess *a2,
        unsigned int a3,
        enum ResourceType a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  PVOID pvData; // [rsp+28h] [rbp-20h]
  CPlaybackManager *v9; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+20h] BYREF

  v9 = this;
  v4 = 0;
  v5 = a3;
  if ( a4 )
  {
    if ( a4 == ResourceTypeTheme )
      LOBYTE(v4) = (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)a2) != 0;
  }
  else if ( a3 - 10 <= 1 || a3 - 1 <= 1 )
  {
    if ( (unsigned int)CApplicationManager::GetSoundLevel(this, (__int64)a2) )
    {
      if ( *((_DWORD *)a2 + 105)
        || (pcbData = 4,
            !RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
               L"AllowClassicOffload",
               0x18u,
               0LL,
               &v9,
               &pcbData))
        && (_DWORD)v9 )
      {
        v4 = 1;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(pvData) = v4;
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_41cf1b36f95b3f413e10328c0a55d7ad_Traceguids,
      *((unsigned int *)a2 + 42),
      off_180023EF0[v5],
      pvData);
  }
  return v4;
}
