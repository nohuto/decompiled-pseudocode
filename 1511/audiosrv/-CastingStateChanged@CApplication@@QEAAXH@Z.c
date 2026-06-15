/*
 * XREFs of ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180004678
 * Callers:
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z @ 0x180005614 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0006@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E948 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 */

void __fastcall CApplication::CastingStateChanged(CApplication *this, unsigned int a2, bool a3)
{
  TraceLoggingHProvider v5; // rcx
  bool v6; // cc
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  *((_DWORD *)this + 128) += a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      34LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      a2,
      *((_DWORD *)this + 128));
    v5 = WPP_GLOBAL_Control;
  }
  v6 = *((_DWORD *)this + 128) <= 0;
  if ( *((int *)this + 128) < 0 )
  {
    if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v5 + 7) & 0x40000000) != 0
      && *((_BYTE *)v5 + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)v5 + 2), 0x23u, (__int64)&WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids);
    }
    *((_DWORD *)this + 128) = 0;
    v6 = 1;
  }
  if ( v6 )
    *((_DWORD *)this + 28) &= ~8u;
  else
    *((_DWORD *)this + 28) |= 8u;
  if ( v7[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v7);
}
