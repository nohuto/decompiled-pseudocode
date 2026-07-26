/*
 * XREFs of NdisInitializeEvent @ 0x1C001FEF0
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A94B4 (ndisMInitializeMiniportBlock.c)
 *     ndisSetOpenToTranslationMode @ 0x1C00ED890 (ndisSetOpenToTranslationMode.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisInitializeEvent(PNDIS_EVENT Event)
{
  KeInitializeEvent(&Event->Event, NotificationEvent, 0);
}
