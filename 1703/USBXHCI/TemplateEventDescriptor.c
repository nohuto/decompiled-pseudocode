/*
 * XREFs of TemplateEventDescriptor @ 0x1C00313F8
 * Callers:
 *     Etw_EnableCallback @ 0x1C000A5B0 (Etw_EnableCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1, a2, a3, 0, 0LL);
}
