/*
 * XREFs of imp_WdfRequestFormatRequestUsingCurrentType @ 0x1C002CE70
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall imp_WdfRequestFormatRequestUsingCurrentType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  FxRequest *v4; // rcx
  unsigned __int64 m_Irp; // r9
  __int64 v6; // rcx
  FxRequest *v7; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v9; // r8
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+50h] [rbp+18h] BYREF

  v3 = Request;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Request) = 0;
  if ( (v3 & 1) != 0 )
  {
    Request = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Request);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)v3, 0x1008u, Request);
    v4 = pRequest;
  }
  m_Irp = (unsigned __int64)v4->m_Irp.m_Irp;
  if ( !m_Irp )
    FxVerifierBugCheckWorker(v4->m_Globals, WDF_REQUEST_FATAL_ERROR, 2uLL, v3);
  if ( *(char *)(m_Irp + 67) < 2 )
    FxVerifierBugCheckWorker(v4->m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, m_Irp);
  v4->m_NextStackLocationFormatted = 1;
  v6 = *(_QWORD *)(m_Irp + 184);
  *(_OWORD *)(v6 - 72) = *(_OWORD *)v6;
  *(_OWORD *)(v6 - 56) = *(_OWORD *)(v6 + 16);
  *(_OWORD *)(v6 - 40) = *(_OWORD *)(v6 + 32);
  *(_QWORD *)(v6 - 24) = *(_QWORD *)(v6 + 48);
  *(_BYTE *)(v6 - 69) = 0;
  v7 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    FxNonPagedObject::Lock(pRequest, &PreviousIrql, a3);
    v7->m_VerifierFlags |= 0x80u;
    if ( SLOBYTE(v7->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)v7[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, PreviousIrql, v9);
    }
    else
    {
      KeReleaseSpinLock(&v7->m_NPLock.m_Lock, PreviousIrql);
    }
  }
}
