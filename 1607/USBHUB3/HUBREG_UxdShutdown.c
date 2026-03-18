/*
 * XREFs of HUBREG_UxdShutdown @ 0x1C006E940
 * Callers:
 *     HUBFDO_EvtDeviceShutdownPreprocess @ 0x1C000A6F0 (HUBFDO_EvtDeviceShutdownPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     HUBREG_QueryGlobalUxdSettings @ 0x1C006D9E0 (HUBREG_QueryGlobalUxdSettings.c)
 *     HUBREG_DeleteUxdSubKeys @ 0x1C006E780 (HUBREG_DeleteUxdSubKeys.c)
 */

__int64 __fastcall HUBREG_UxdShutdown(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *); // rax
  WDFDRIVER__ *Driver; // rdx
  __int64 v4; // rsi
  int v5; // ebx
  int v6; // eax
  unsigned __int16 v7; // r9
  __int64 v9; // [rsp+28h] [rbp-28h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0LL;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616);
  Driver = WdfDriverGlobals->Driver;
  v10 = 0LL;
  v11 = 0LL;
  v4 = v2(WdfDriverGlobals, Driver, off_1C00580E8);
  HUBREG_QueryGlobalUxdSettings(v4);
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_UxdDeviceSettingsKey,
         983103LL,
         0LL,
         &v12) >= 0 )
    HUBREG_DeleteUxdSubKeys(a1, v4, v12);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         1LL,
         983103LL,
         0LL,
         &v11);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v11,
           &g_UxdPortSettingsKey,
           983103LL,
           0LL,
           &v10);
    v5 = v6;
    if ( v6 == -1073741772 )
    {
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
             WdfDriverGlobals,
             v11,
             &g_UxdPortSettingsKey,
             983103LL,
             0,
             0LL,
             0LL,
             &v10);
      v5 = v6;
      if ( v6 >= 0 )
        goto LABEL_11;
      v7 = 85;
      goto LABEL_7;
    }
    if ( v6 < 0 )
    {
      v7 = 86;
LABEL_7:
      LODWORD(v9) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2464),
        2u,
        3u,
        v7,
        (__int64)&WPP_d9e6b8ce2d2d3a2fc161dd0ed8437b42_Traceguids,
        v9);
      goto LABEL_11;
    }
    HUBREG_DeleteUxdSubKeys(a1, v4, v10);
  }
LABEL_11:
  if ( v12 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v5;
}
