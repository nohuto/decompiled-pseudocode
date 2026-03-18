/*
 * XREFs of ResetPointerDevices @ 0x1C009D940
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     RitPrepDitTakeOver @ 0x1C009D8C8 (RitPrepDitTakeOver.c)
 *     DitPrepRitTakeOver @ 0x1C009EBF4 (DitPrepRitTakeOver.c)
 * Callees:
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 */

__int64 ResetPointerDevices()
{
  struct _LIST_ENTRY *i; // rbx
  __int64 result; // rax

  for ( i = gActivePointerDeviceList.Flink; i != &gActivePointerDeviceList; i = i->Flink )
    result = EndAllActiveContacts((struct tagHID_POINTER_DEVICE_INFO *)i[-1].Blink);
  return result;
}
