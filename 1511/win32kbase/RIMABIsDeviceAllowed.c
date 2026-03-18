/*
 * XREFs of RIMABIsDeviceAllowed @ 0x1C00D43CC
 * Callers:
 *     RIMReassessContactDelivery @ 0x1C00CCFC4 (RIMReassessContactDelivery.c)
 *     RIMValidatePointerDeviceCurrentState @ 0x1C00CD3D0 (RIMValidatePointerDeviceCurrentState.c)
 * Callees:
 *     RIMAbortDeviceActivity @ 0x1C00C45E4 (RIMAbortDeviceActivity.c)
 *     RIMIsPTPPointerDeviceAllowed @ 0x1C00D2858 (RIMIsPTPPointerDeviceAllowed.c)
 *     RIMABAssessContactForArbitrationSuspension @ 0x1C00D414C (RIMABAssessContactForArbitrationSuspension.c)
 */

_BOOL8 __fastcall RIMABIsDeviceAllowed(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // r10
  BOOL v7; // ebx
  int v8; // r11d
  __int64 *v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9

  v5 = (_QWORD *)(a1 + 568);
  v6 = *(_QWORD **)(a1 + 568);
  v7 = 1;
  if ( (*(_DWORD *)(a2 + 252) & 0x10) != 0 && !a3 )
    v7 = a4 != 0;
  v8 = *(_DWORD *)(a2 + 24);
  if ( v8 == 8 )
    return (int)RIMIsPTPPointerDeviceAllowed(a1, a2);
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v10 = v6 - 1;
      v6 = (_QWORD *)*v6;
      v11 = *v10;
      if ( (unsigned int)(*(_DWORD *)(*v10 + 24) - 6) <= 1 && v11 != a2 )
        break;
      if ( gbSetDeadZoneExp && (unsigned int)(v8 - 1) <= 4 )
        break;
      if ( v6 == v5 )
        return v7;
    }
    v12 = 0LL;
    if ( *(_DWORD *)(v11 + 24) == 6 )
      v12 = v11;
    v7 = 0;
    if ( gFastSwitchingEnabled )
      return (int)RIMABAssessContactForArbitrationSuspension(a1, a2, a5, v12);
    RIMAbortDeviceActivity(a1, a2);
  }
  return v7;
}
