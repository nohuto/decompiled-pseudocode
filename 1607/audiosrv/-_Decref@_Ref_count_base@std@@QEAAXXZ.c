/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180004D1C
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180004F8C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?reset@?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAXXZ @ 0x180005D98 (-reset@-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180005DC4 (--4-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?AcquireTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x1800093E8 (-AcquireTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x1800097B0 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18000C780 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18000D230 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ??1CVADServer@@QEAA@XZ @ 0x18004F858 (--1CVADServer@@QEAA@XZ.c)
 *     ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x1800507F8 (--1-$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ.c)
 *     ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180078930 (-ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP.c)
 *     ?Shutdown@CAudioResourceManager@@UEAAXXZ @ 0x180078D70 (-Shutdown@CAudioResourceManager@@UEAAXXZ.c)
 *     ?_Reset0@?$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@PEAV_Ref_count_base@2@@Z @ 0x18007951C (-_Reset0@-$_Ptr_base@USaDeviceReevaluationContext@@@std@@QEAAXPEAUSaDeviceReevaluationContext@@P.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAXXZ @ 0x180079560 (-_Tidy@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@USaD.c)
 * Callees:
 *     ?_Delete_this@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180005170 (-_Delete_this@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x1800051F0 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  void (*v2)(void); // rax
  void (__fastcall *v3)(std::_Ref_count_base *); // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    v2 = **(void (***)(void))this;
    if ( (char *)v2 == (char *)std::_Ref_count_obj<CPdcTimerActivation>::_Destroy )
      std::_Ref_count_obj<CPdcTimerActivation>::_Destroy();
    else
      v2();
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    {
      v3 = *(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL);
      if ( (char *)v3 == (char *)std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this )
        std::_Ref_count_obj<CPdcTimerActivation>::_Delete_this(this);
      else
        v3(this);
    }
  }
}
