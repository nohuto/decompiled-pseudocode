/*
 * XREFs of HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions @ 0x1C006EB80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // r9
  int v9; // eax
  int v10; // r9d
  __int64 v12; // [rsp+28h] [rbp-48h]
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+88h] [rbp+18h] BYREF
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_1C00580E8)
                 + 80);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3016))(WdfDriverGlobals, v2);
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2968))(
         WdfDriverGlobals,
         v3,
         1LL) )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 3024))(
           WdfDriverGlobals,
           v2,
           0LL,
           0LL);
    if ( v4 < 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_1C00580E8);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v5 + 64),
        2u,
        2u,
        0x15u,
        (__int64)&WPP_3a51c1c5eac233f38134566dc14bd4ed_Traceguids,
        v4);
    }
  }
  v16 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Usb\\Ceip");
  RtlInitUnicodeString(&v13, L"BootPathSurpriseRemovalCount");
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
         WdfDriverGlobals,
         0LL,
         &DestinationString,
         131103LL,
         0,
         0LL,
         0LL,
         &v16);
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015
                                                                                                  + 1920))(
           WdfDriverGlobals,
           v16,
           &v13,
           &v15);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741772 )
      {
        v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               WdfDriverGlobals->Driver,
               off_1C00580E8);
        v8 = 88;
        goto LABEL_13;
      }
      v10 = 1;
    }
    else
    {
      v10 = v15 + 1;
    }
    v15 = v10;
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1968))(
           WdfDriverGlobals,
           v16,
           &v13);
    if ( v6 >= 0 )
      goto LABEL_14;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    v8 = 89;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00580E8);
    v8 = 87;
  }
LABEL_13:
  LODWORD(v12) = v6;
  WPP_RECORDER_SF_d(*(_QWORD *)(v7 + 64), 2u, 2u, v8, (__int64)&WPP_d9e6b8ce2d2d3a2fc161dd0ed8437b42_Traceguids, v12);
LABEL_14:
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
