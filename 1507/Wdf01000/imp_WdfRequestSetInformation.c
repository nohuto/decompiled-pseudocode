/*
 * XREFs of imp_WdfRequestSetInformation @ 0x1C001FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 Information)
{
  FxRequest *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // r8
  int IsNotCompleted; // eax
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 PreviousIrql; // [rsp+58h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(v4, &PreviousIrql, Information);
    if ( m_Globals->FxVerifierOn )
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, m_Globals);
    else
      IsNotCompleted = 0;
    if ( IsNotCompleted >= 0 )
      v4->m_Irp.m_Irp->IoStatus.Information = Information;
    if ( SLOBYTE(v4->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)v4[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v7);
    }
    else
    {
      KeReleaseSpinLock(&v4->m_NPLock.m_Lock, PreviousIrql);
    }
  }
  else
  {
    v4->m_Irp.m_Irp->IoStatus.Information = Information;
  }
}
