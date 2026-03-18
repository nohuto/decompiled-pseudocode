/*
 * XREFs of HvlSendSyntheticClusterIpi @ 0x1401E9F78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlSendSyntheticClusterIpi()
{
  if ( (HvlpFlags & 0x100) != 0 && (unsigned __int16)KiActiveGroups > 1u )
    return sub_1401EBDAC();
  else
    return sub_1401EBD34();
}
