/*
 * XREFs of ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800A3238
 * Callers:
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800A1710 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800A39DC (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GrantGoodFaithPLMExemption(CApplication *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int started; // edi
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  if ( *((_DWORD *)this + 84) )
  {
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x11u,
        (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        *((const wchar_t **)this + 2));
      v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
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
      CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, this, 163);
      *((_DWORD *)this + 84) = 1;
      goto LABEL_16;
    }
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( (struct _GUID *)v3 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v3 + 28) & 0x40000000) != 0
    && *(_BYTE *)(v3 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v3 + 16), 0x12u, (__int64)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids, started);
  }
LABEL_16:
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return (unsigned int)started;
}
