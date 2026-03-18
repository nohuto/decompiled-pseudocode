/*
 * XREFs of NtDCompositionRemoveCrossDeviceVisualChild @ 0x1C00116A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtDCompositionRemoveCrossDeviceVisualChild(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  if ( (_DWORD)a1 == a3 )
    return NtDCompositionRemoveVisualChild(a1, a2, a4);
  else
    return DirectComposition::CApplicationChannel::RemoveCrossDeviceVisualChild(a1, a2, a3, a4);
}
