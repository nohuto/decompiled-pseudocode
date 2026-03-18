/*
 * XREFs of TemplateEventDescriptor @ 0x1C001E79C
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C00089A0 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001D918 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     DpiDxgkDdiUnload @ 0x1C002FF50 (DpiDxgkDdiUnload.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0, 0LL);
}
