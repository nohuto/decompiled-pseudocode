/*
 * XREFs of NdisInitializeEvent @ 0x1C00137A0
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A0D70 (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C00F4520 (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
