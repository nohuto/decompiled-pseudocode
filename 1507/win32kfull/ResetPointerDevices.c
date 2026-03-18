/*
 * XREFs of ResetPointerDevices @ 0x1C0100DBC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     DitPrepRitTakeOver @ 0x1C0131AC0 (DitPrepRitTakeOver.c)
 *     RitPrepDitTakeOver @ 0x1C0144BD8 (RitPrepDitTakeOver.c)
 * Callees:
 *     EndAllActiveContacts @ 0x1C01C978C (EndAllActiveContacts.c)
 */

__int64 ResetPointerDevices()
{
  struct _LIST_ENTRY *i; // rbx
  __int64 result; // rax

  for ( i = gActivePointerDeviceList.Flink; i != &gActivePointerDeviceList; i = i->Flink )
    result = EndAllActiveContacts((struct tagHID_POINTER_DEVICE_INFO *)i[-1].Blink);
  return result;
}
