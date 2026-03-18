/*
 * XREFs of imp_WdfObjectDelete @ 0x1C00107F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C007BD2C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Object)
{
  FxObject *flags; // rdi
  __int64 v4; // rcx
  FxObject_vtbl *v5; // rax
  __int64 (__fastcall *QueryInterface)(FxRequest *, FxQueryInterfaceParams *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v8; // dl
  unsigned int v9; // r8d
  unsigned __int16 v10; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxObject **p_pObject; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  FxObject *pObject; // [rsp+78h] [rbp+10h] BYREF

  if ( !Object )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1000uLL);
  flags = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Object & 1) != 0 )
  {
    v4 = LOWORD(flags->__vftable);
    flags = (FxObject *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4096 )
  {
    pObject = flags;
  }
  else
  {
    pObject = 0LL;
    p_pObject = &pObject;
    v5 = flags->__vftable;
    v14 = v4;
    v13 = 4096;
    QueryInterface = (__int64 (__fastcall *)(FxRequest *, FxQueryInterfaceParams *))v5->QueryInterface;
    if ( QueryInterface == FxRequest::QueryInterface )
    {
      pObject = flags;
    }
    else
    {
      if ( (int)QueryInterface((FxRequest *)flags, (FxQueryInterfaceParams *)&p_pObject) < 0 )
      {
        WPP_IFR_SF_qDqD(flags->m_Globals, v8, v9, v10, traceGuid, (const void *)Object, 0x1000u, flags, flags->m_Type);
        FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Object, 0x1000uLL);
      }
      flags = pObject;
    }
  }
  m_Globals = flags->m_Globals;
  if ( (flags->m_ObjectFlags & 2) != 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxObjectAPI_cpp_Traceguids, (const void *)Object, -1073741535);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    flags->DeleteObject(flags);
  }
}
