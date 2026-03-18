/*
 * XREFs of TemplateEventDescriptor @ 0x1C001C07C
 * Callers:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C0002AC4 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001ADB8 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     DpiDxgkDdiUnload @ 0x1C0028AE8 (DpiDxgkDdiUnload.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0, 0LL);
}
