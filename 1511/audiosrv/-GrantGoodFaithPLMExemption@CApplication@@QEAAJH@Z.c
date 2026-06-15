/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A0498
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x18009E84C (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800A0D4C (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(CApplication *this)
{
  int v2; // edx
  TraceLoggingHProvider v3; // rcx
  int started; // edi
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  if ( *((_DWORD *)this + 84) )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        *((const wchar_t **)this + 2));
      v3 = WPP_GLOBAL_Control;
    }
    started = -2147024809;
  }
  else
  {
    *((_DWORD *)this + 117) = 0;
    *((_DWORD *)this + 118) = 0;
    *((_DWORD *)this + 119) = 0;
    *((_DWORD *)this + 120) = 0;
    *((_DWORD *)this + 121) = 0;
    *((_DWORD *)this + 122) = 0;
    *((_DWORD *)this + 123) = 1;
    if ( *((_DWORD *)this + 117) != 2 )
    {
      *((_DWORD *)this + 117) = 2;
      *((_DWORD *)this + 118) = 1;
      *((_DWORD *)this + 119) = 0;
      *((_DWORD *)this + 120) = 1;
      *((_DWORD *)this + 121) = 2;
      *((_DWORD *)this + 122) = 1;
      *((_DWORD *)this + 123) = 2;
    }
    started = CApplication::StartGoodFaithPLMExemptionTimer(this, v2);
    if ( started >= 0 )
    {
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 0xA3u);
      *((_DWORD *)this + 84) = 1;
      goto LABEL_16;
    }
    v3 = WPP_GLOBAL_Control;
  }
  if ( v3 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v3 + 7) & 0x40000000) != 0
    && *((_BYTE *)v3 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v3 + 2), 0x12u, (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids, started);
  }
LABEL_16:
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return (unsigned int)started;
}
