/*
 * XREFs of TemplateEventDescriptor @ 0x1C001B630
 * Callers:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00195D0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C001A158 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     DpiDxgkDdiUnload @ 0x1C0028F28 (DpiDxgkDdiUnload.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0, 0LL);
}
