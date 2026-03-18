/*
 * XREFs of WMI_ExecuteMethodUsbWmiStdData @ 0x1C006F380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     WMI_AcquireHubName @ 0x1C006ED48 (WMI_AcquireHubName.c)
 *     WMI_AcquireBusInfo @ 0x1C006EE18 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x1C006EEF0 (WMI_AcquireControllerName.c)
 */

__int64 __fastcall WMI_ExecuteMethodUsbWmiStdData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v11; // r10
  __int64 v12; // rcx
  _QWORD *v13; // rdx

  v6 = 0;
  *a6 = 0;
  if ( a4 < 4 )
    return (unsigned int)-1073741789;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C0057140);
  if ( *a5 != 4 )
  {
    switch ( *a5 )
    {
      case 5:
        return (unsigned int)WMI_AcquireBusInfo(v9, a4, a6, a5);
      case 6:
        return (unsigned int)WMI_AcquireHubName(v9, a4, a6, (__int64)a5);
      case 7:
        return (unsigned int)WMI_AcquireControllerName(v9, a4, a6, (__int64)a5);
      default:
        return v6;
    }
  }
  *a6 = 0;
  if ( a4 < 0x18 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v11 = (_QWORD *)(v9 + 2280);
    v12 = *(_QWORD *)(v9 + 2280) - 248LL;
    v13 = *(_QWORD **)(v9 + 2280);
    if ( v11 == (_QWORD *)*v11 )
      return (unsigned int)-1073741811;
    while ( *(unsigned __int16 *)(v12 + 200) != a5[1] )
    {
      v12 = *v13 - 248LL;
      v13 = (_QWORD *)(v12 + 248);
      if ( v11 == (_QWORD *)(v12 + 248) )
        return (unsigned int)-1073741811;
    }
    if ( !v12 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( (*(_DWORD *)(v12 + 1336) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v12 + 1336), 0xFFFFFFFB);
      (*(void (__fastcall **)(__int64, __int64))(v12 + 1240))(v12, 3054LL);
    }
  }
  return v6;
}
