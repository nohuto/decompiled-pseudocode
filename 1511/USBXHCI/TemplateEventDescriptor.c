/*
 * XREFs of TemplateEventDescriptor @ 0x1C0033FEC
 * Callers:
 *     Etw_EnableCallback @ 0x1C0001140 (Etw_EnableCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  return EtwWrite((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument2, a2, a3, 0, 0LL);
}
