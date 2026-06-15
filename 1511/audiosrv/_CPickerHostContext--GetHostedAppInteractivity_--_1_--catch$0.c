/*
 * XREFs of _CPickerHostContext::GetHostedAppInteractivity_::_1_::catch$0 @ 0x18004BB90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CPickerHostContext::GetHostedAppInteractivity_::_1_::catch_0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 48);
  if ( *v3 == -1073741571 )
    _resetstkoflw();
  *(_DWORD *)(a2 + 112) = *v3;
  return &loc_18005BC46;
}
