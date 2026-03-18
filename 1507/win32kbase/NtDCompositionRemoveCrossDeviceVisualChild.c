/*
 * XREFs of NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C0014720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  if ( a1 == a3 )
    return NtDCompositionRemoveVisualChild(a1, a2, a4);
  else
    return DirectComposition::CApplicationChannel::RemoveCrossDeviceVisualChild(a1, a2, a3, a4);
}
