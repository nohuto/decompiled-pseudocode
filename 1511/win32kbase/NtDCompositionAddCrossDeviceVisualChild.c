/*
 * XREFs of NtDCompositionAddCrossDeviceVisualChild @ 0x1C00128E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtDCompositionAddCrossDeviceVisualChild(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( !a6 )
  {
    if ( !a7 )
      goto LABEL_3;
    return 3221225485LL;
  }
  if ( !a7 )
    return 3221225485LL;
LABEL_3:
  if ( (_DWORD)a1 == a3 && (!a6 || a6 == (_DWORD)a1) )
    return NtDCompositionAddVisualChild(a1, a2, a4, a5);
  else
    return DirectComposition::CApplicationChannel::AddCrossDeviceVisualChild(a1, a2, a3, a4, a5, a6, a7);
}
