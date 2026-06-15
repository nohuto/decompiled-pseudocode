/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180004F8C
 * Callers:
 *     ?AcquireTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800093E8 (-AcquireTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z @ 0x180004E88 (-_Reserve@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@IEAAX_K@Z.c)
 *     ??$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEBQEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x1800050CC (--$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 *     ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180005DC4 (--4-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rsi
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // eax
  __int64 v14; // rax
  char v16[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+78h] [rbp+10h]
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  v19 = a2;
  v4 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    try
    {
      v6 = (struct _Mtx_internal_imp_t *)(a1 + 32);
      v18 = a1 + 32;
      v7 = _Mtx_lock((_Mtx_t)(a1 + 32));
      if ( v7 )
        std::_Throw_C_error(v7);
      v8 = (_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)&v20 >= v9 || *v8 > (unsigned __int64)&v20 )
      {
        if ( v9 == *(_QWORD *)(a1 + 24) )
          std::vector<CVADServer *>::_Reserve((_QWORD *)(a1 + 8));
        v12 = *(_QWORD **)(a1 + 16);
        if ( v12 )
          *v12 = a3;
      }
      else
      {
        v10 = ((__int64)&v20 - *v8) >> 3;
        if ( v9 == *(_QWORD *)(a1 + 24) )
          std::vector<CVADServer *>::_Reserve((_QWORD *)(a1 + 8));
        v11 = *(_QWORD **)(a1 + 16);
        if ( v11 )
          *v11 = *(_QWORD *)(*v8 + 8 * v10);
      }
      *(_QWORD *)(a1 + 16) += 8LL;
      v13 = _Mtx_unlock(v6);
      if ( v13 )
        std::_Throw_C_error(v13);
      v18 = a1;
      v14 = std::make_shared<CPdcTimerActivation,CPdcActivationClient * const,CVADServer * &>(v16, &v18, &v20);
      std::shared_ptr<CPdcTimerActivation>::operator=(v4, v14);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
    }
    catch ( std::bad_alloc )
    {
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::AcquirePdcTimerActivation", 0x38u, -2147024882);
      return v19;
    }
  }
  return v4;
}
