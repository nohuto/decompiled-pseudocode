/*
 * XREFs of HUBREG_DeleteUxdSettings @ 0x1C0071D54
 * Callers:
 *     HUBPDO_NotifyDeviceDisconnected @ 0x1C0012C90 (HUBPDO_NotifyDeviceDisconnected.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C006ABC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1C0071028 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1C0071710 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x1C0071B3C (HUBREG_DeleteUxdPortKey.c)
 */

__int64 __fastcall HUBREG_DeleteUxdSettings(__int64 a1, int a2)
{
  __int64 v4; // rsi
  int v5; // edi
  bool v6; // zf

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  HUBREG_QueryGlobalUxdSettings(v4);
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 0LL;
    if ( !*(_DWORD *)(a1 + 1692) )
    {
      v6 = (*(_DWORD *)(v4 + 4) & 0x400) == 0;
      goto LABEL_7;
    }
LABEL_8:
    HUBREG_DeleteUxdPortKey(*(_QWORD *)a1, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL));
    HUBREG_DeleteUxdDeviceKey(a1);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 1688) == 1 )
    goto LABEL_8;
  v6 = (*(_DWORD *)(v4 + 4) & 0x200) == 0;
LABEL_7:
  if ( !v6 )
    goto LABEL_8;
  return 0LL;
}
