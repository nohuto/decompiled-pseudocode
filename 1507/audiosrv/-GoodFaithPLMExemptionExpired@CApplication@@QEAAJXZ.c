/*
 * XREFs of ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A3068
 * Callers:
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800A6E50 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012DE0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800A2A98 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x17u,
      (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
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
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 209);
    CApplication::CleanupGoodFaithExemptionTimer(this);
    *((_DWORD *)this + 84) = 0;
  }
  return 0LL;
}
