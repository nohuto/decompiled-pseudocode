/*
 * XREFs of ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0084780
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 */

void __fastcall FxIoTarget::_RequestCancelled(
        FxIrpQueue *Queue,
        _IRP *Irp,
        _IRP *CsqContext,
        unsigned __int8 CallerIrql)
{
  FxIoTarget *p_m_RequestCount; // rsi
  FxRequestBase *_a1; // rax
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  p_m_RequestCount = (FxIoTarget *)&Queue[-7].m_RequestCount;
  FxNonPagedObject::Unlock((FxNonPagedObject *)&Queue[-7].m_RequestCount, CallerIrql, (unsigned __int8)CsqContext);
  _a1 = FxRequestBase::GetTraceObjectHandle((FxRequestBase *)&CsqContext[-1].Overlay);
  WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)CsqContext[-1].CancelRoutine, 4u, 0xEu, 0x37u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  CsqContext->MdlAddress = (_MDL *)CsqContext;
  *(_QWORD *)&CsqContext->Type = CsqContext;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  FxNonPagedObject::Lock(p_m_RequestCount, &irql, v8);
  v9 = irql;
  BYTE4(CsqContext->Overlay.AllocationSize.QuadPart) &= ~2u;
  FxNonPagedObject::Unlock(p_m_RequestCount, v9, v10);
  FxIoTarget::FailPendedRequest(p_m_RequestCount, (FxRequestBase *)&CsqContext[-1].Overlay, -1073741536);
}
