/*
 * XREFs of ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A02C8
 * Callers:
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800A4280 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001C9E0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18009FCF8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::GoodFaithPLMExemptionExpired(CApplication *this)
{
  if ( *((_DWORD *)this + 117) == 2 )
  {
    *((_DWORD *)this + 117) = 0;
    *((_DWORD *)this + 118) = 0;
    *((_DWORD *)this + 119) = 0;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 121) = 0;
    *((_DWORD *)this + 122) = 0;
    *((_DWORD *)this + 123) = 1;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      *((const wchar_t **)this + 2));
  }
  if ( (unsigned int)CApplication::Category((__int64)this) != 1 )
  {
    if ( !*((_DWORD *)this + 28) && *((_DWORD *)this + 117) != 1 )
    {
      *((_DWORD *)this + 119) = 0;
      *((_DWORD *)this + 121) = 0;
      *((_DWORD *)this + 117) = 1;
      *((_DWORD *)this + 118) = 1;
      *((_DWORD *)this + 120) = 1;
      *((_DWORD *)this + 122) = 1;
      *((_DWORD *)this + 123) = 1;
    }
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xD1u);
    CApplication::CleanupGoodFaithExemptionTimer(this);
    *((_DWORD *)this + 84) = 0;
  }
  return 0LL;
}
