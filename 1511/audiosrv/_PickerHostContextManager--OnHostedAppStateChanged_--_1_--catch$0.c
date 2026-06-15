/*
 * XREFs of _PickerHostContextManager::OnHostedAppStateChanged_::_1_::catch$0 @ 0x18004AE3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall PickerHostContextManager::OnHostedAppStateChanged_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 112);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 40) = *v3;
  return &loc_180054735;
}
