/*
 * XREFs of imp_WdfDmaEnablerGetFragmentLength @ 0x1C0030180
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dq @ 0x1C005FB50 (WPP_IFR_SF_dq.c)
 */

unsigned __int64 __fastcall imp_WdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        int DmaDirection)
{
  __int64 v3; // rbx
  WDFDMAENABLER__ *_a2; // rdi
  FxDmaEnabler *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int16 *v9; // rbx
  int v10; // [rsp+68h] [rbp+10h] BYREF
  FxDmaEnabler *pDmaEnabler; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  _a2 = (WDFDMAENABLER__ *)DmaEnabler;
  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v6 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DmaEnabler) = 0;
  if ( ((unsigned __int8)_a2 & 1) != 0 )
  {
    DmaEnabler = LOWORD(v6->__vftable);
    v6 = (FxDmaEnabler *)((char *)v6 - DmaEnabler);
  }
  if ( v6->m_Type == 5120 )
  {
    pDmaEnabler = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDmaEnabler, _a2, 0x1400u, DmaEnabler);
    v6 = pDmaEnabler;
  }
  m_Globals = v6->m_Globals;
  if ( !DmaDirection )
    return v6->m_SimplexAdapterInfo.MaximumFragmentLength;
  if ( DmaDirection == 1 )
  {
    v9 = (unsigned __int16 *)&v6->m_DuplexAdapterInfo[1];
    if ( (*((_BYTE *)v6 + 380) & 0x10) == 0 )
      v9 = (unsigned __int16 *)&v6->184;
    return *((_QWORD *)v9 + 10);
  }
  else
  {
    WPP_IFR_SF_dq(m_Globals, 2u, 0xFu, 0x12u, WPP_FxDmaEnablerAPI_cpp_Traceguids, DmaDirection, _a2);
    v10 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v10,
      m_Globals->Public.DriverName,
      (const char *)&v10);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  return v3;
}
