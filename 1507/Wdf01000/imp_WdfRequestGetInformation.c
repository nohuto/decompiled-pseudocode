/*
 * XREFs of imp_WdfRequestGetInformation @ 0x1C00306A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int64 __fastcall imp_WdfRequestGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  FxRequest *v3; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 Information; // rdi
  unsigned __int8 v8; // r8
  int IsNotCompleted; // eax
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v3 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxRequest *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4104 )
  {
    pRequest = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v3 = pRequest;
  }
  m_Globals = v3->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return v3->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Lock(v3, &PreviousIrql, a3);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(v3, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    Information = v3->m_Irp.m_Irp->IoStatus.Information;
  else
    Information = 0LL;
  if ( SLOBYTE(v3->m_ObjectFlags) < 0
    && (m_ForwardProgressQueue = (FxVerifierLock *)v3[-1].m_ForwardProgressQueue) != 0LL )
  {
    FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v8);
  }
  else
  {
    KeReleaseSpinLock(&v3->m_NPLock.m_Lock, PreviousIrql);
  }
  return Information;
}
