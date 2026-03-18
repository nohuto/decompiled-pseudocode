/*
 * XREFs of ?FailPendedRequest@FxIoTarget@@IEAAXPEAVFxRequestBase@@J@Z @ 0x1C00758B8
 * Callers:
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C007580C (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C00767E0 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C007CDA8 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::FailPendedRequest(FxIoTarget *this, FxRequestBase *Request, int Status)
{
  Request->m_Irp.m_Irp->IoStatus.Status = Status;
  Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
  FxIoTarget::RequestCompletionRoutine(this, Request, Status);
}
