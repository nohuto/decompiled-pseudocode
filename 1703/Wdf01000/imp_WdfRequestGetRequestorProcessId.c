/*
 * XREFs of imp_WdfRequestGetRequestorProcessId @ 0x1C0079050
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0035434 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestGetRequestorProcessId(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  FxRequest *v2; // rsi
  unsigned __int8 v3; // r8
  int _a2; // eax
  unsigned int v5; // edi
  unsigned __int16 m_ObjectSize; // dx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rsi
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF
  _IRP *ppIrp; // [rsp+60h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest);
  v2 = pRequest;
  _a2 = FxRequest::GetIrp(pRequest, &ppIrp, v3);
  v5 = 0;
  if ( _a2 >= 0 )
  {
    return IoGetRequestorProcessId(ppIrp);
  }
  else
  {
    m_ObjectSize = v2->m_ObjectSize;
    p_m_Globals = &v2->m_Globals;
    m_Globals = v2->m_Globals;
    _a1 = (const void *)((unsigned __int64)v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequestKm_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  return v5;
}
