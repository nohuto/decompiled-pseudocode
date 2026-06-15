/*
 * XREFs of ?AcquireTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800093E8
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180009BD0 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180004F8C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180005DC4 (--4-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180009468 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 */

void __fastcall CVADServer::AcquireTimerActivationRequest(CVADServer *this)
{
  _QWORD *v1; // rbx
  int v2; // edx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  if ( g_pdcActivationClient )
  {
    v1 = (_QWORD *)((char *)this + 336);
    if ( !*((_QWORD *)this + 42) )
    {
      v7 = 0;
      v8 = 0;
      CVADServer::QueryState(this, 0LL, &v7, &v8);
      if ( v7 == v2 || v8 != v2 )
      {
        v4 = CPdcActivationClient::AcquirePdcTimerActivation(g_pdcActivationClient, &v5, v3);
        std::shared_ptr<CPdcTimerActivation>::operator=(v1, v4);
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
      }
    }
  }
}
