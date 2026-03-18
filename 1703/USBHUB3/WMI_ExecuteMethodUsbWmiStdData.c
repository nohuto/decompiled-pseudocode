/*
 * XREFs of WMI_ExecuteMethodUsbWmiStdData @ 0x1C0074880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     WMI_AcquireHubName @ 0x1C0074230 (WMI_AcquireHubName.c)
 *     WMI_AcquireBusInfo @ 0x1C0074304 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x1C00743E0 (WMI_AcquireControllerName.c)
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
  __int64 v11; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a4 < 4 )
    return (unsigned int)-1073741789;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v8,
         off_1C005B0C0);
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
    v11 = *(_QWORD *)(v9 + 2328) - 248LL;
    if ( v9 == *(_QWORD *)(v9 + 2328) - 2328LL )
      return (unsigned int)-1073741811;
    while ( *(unsigned __int16 *)(v11 + 200) != a5[1] )
    {
      v11 = *(_QWORD *)(v11 + 248) - 248LL;
      if ( v9 == v11 - 2080 )
        return (unsigned int)-1073741811;
    }
    if ( !v11 )
    {
      return (unsigned int)-1073741811;
    }
    else if ( (*(_DWORD *)(v11 + 1336) & 4) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v11 + 1336), 0xFFFFFFFB);
      (*(void (__fastcall **)(__int64, __int64))(v11 + 1240))(v11, 3054LL);
    }
  }
  return v6;
}
