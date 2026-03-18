/*
 * XREFs of HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue @ 0x1C0072DF4
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C006C9E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_OpenQueryAttemptRecoveryFromUsbPowerDrainValue(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  v9 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UsbAutomaticSurpriseRemovalKeyName,
         131097LL,
         0LL,
         &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _DWORD *))(WdfFunctions_01015 + 1920))(
           WdfDriverGlobals,
           v9,
           L"@B",
           a1);
    v5 = v4;
    if ( v4 >= 0 )
      goto LABEL_6;
    *a1 = 0;
    v6 = 111;
  }
  else
  {
    v6 = 110;
  }
  LODWORD(v8) = v4;
  WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 64), 2u, 2u, v6, (__int64)&WPP_c583747ee8293f01720d1e741a546fd1_Traceguids, v8);
LABEL_6:
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return v5;
}
