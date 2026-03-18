/*
 * XREFs of imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C006EC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C00742C0 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1058 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestProbeAndLockUserBufferForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  unsigned int v5; // r15d
  FxRequest *v7; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ **v10; // rsi
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v13; // rdx
  __int64 v14; // rdx
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  int IsDriverOwned; // edi
  int _a1; // eax
  unsigned __int64 v19; // rax
  FxRequest *pRequest; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int64 irql; // [rsp+88h] [rbp+38h] BYREF

  v5 = Length;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v7 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRequest *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4104 )
  {
    pRequest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v7 = pRequest;
  }
  m_Globals = v7->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  v10 = MemoryObject;
  if ( !MemoryObject )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *MemoryObject = 0LL;
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    v13 = v7->m_Globals;
    if ( v13->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v7->m_Globals, (unsigned int)v13, 9u)
       || *(_BYTE *)(v14 + 317)) )
    {
      FxNonPagedObject::Lock(v7, (unsigned __int8 *)&irql, v15);
      if ( m_Globals->FxVerifierOn )
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, m_Globals);
      else
        IsDriverOwned = 0;
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 && pRequest[-1].m_ForwardProgressQueue )
        FxVerifierLock::Unlock((FxVerifierLock *)pRequest[-1].m_ForwardProgressQueue, irql, v16);
      else
        KeReleaseSpinLock(&pRequest->m_NPLock.m_Lock, irql);
      if ( IsDriverOwned < 0 )
        return (unsigned int)IsDriverOwned;
      v7 = pRequest;
    }
    _a1 = FxRequest::ProbeAndLockForRead(v7, Buffer, v5, (FxRequestMemory **)&irql);
    IsDriverOwned = _a1;
    if ( _a1 >= 0 )
    {
      if ( *(_WORD *)(irql + 10) )
        v19 = irql ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v19 = 0LL;
      *v10 = (WDFMEMORY__ *)v19;
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x41u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    }
    return (unsigned int)IsDriverOwned;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  LODWORD(irql) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
