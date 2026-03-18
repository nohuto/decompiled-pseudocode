/*
 * XREFs of NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C0080D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  return DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(a1, a2, a3, a4);
}
