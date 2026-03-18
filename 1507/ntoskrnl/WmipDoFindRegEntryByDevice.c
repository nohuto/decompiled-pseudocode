/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x140127B48
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x140127A2C (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x140127AA4 (WmipFindRegEntryByDevice.c)
 * Callees:
 *     <none>
 */

int *__fastcall WmipDoFindRegEntryByDevice(void *a1)
{
  int *i; // rdx

  for ( i = (int *)WmipInUseRegEntryHead; ; i = *(int **)i )
  {
    if ( i == (int *)&WmipInUseRegEntryHead )
      return 0LL;
    if ( *((void **)i + 2) == a1 && i[12] >= 0 )
      break;
  }
  return i;
}
