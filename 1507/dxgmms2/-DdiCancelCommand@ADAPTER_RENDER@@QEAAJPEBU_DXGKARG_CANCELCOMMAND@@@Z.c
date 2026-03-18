/*
 * XREFs of ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C000E044
 * Callers:
 *     VidSchiDiscardQueuePacket @ 0x1C00765D0 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiCancelCommand(ADAPTER_RENDER *this, struct _DXGKARG_CANCELCOMMAND *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_RENDER *, struct _DXGKARG_CANCELCOMMAND *))DxgCoreInterface)[31](this, a2);
}
