/*
 * XREFs of ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C001D1D4
 * Callers:
 *     VidSchiDiscardQueuePacket @ 0x1C009FC70 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiCancelCommand(ADAPTER_RENDER *this, const struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, const struct _DXGKARG_CANCELCOMMAND *))DxgCoreInterface[31])(
           this,
           a2);
}
