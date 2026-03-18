/*
 * XREFs of WmipDoFindRegEntryByDevice @ 0x1400EA7F8
 * Callers:
 *     IoWMIDeviceObjectToProviderId @ 0x1400EA744 (IoWMIDeviceObjectToProviderId.c)
 *     WmipFindRegEntryByDevice @ 0x1400EA788 (WmipFindRegEntryByDevice.c)
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
