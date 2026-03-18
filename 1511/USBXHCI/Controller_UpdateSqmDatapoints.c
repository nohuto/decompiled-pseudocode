/*
 * XREFs of Controller_UpdateSqmDatapoints @ 0x1C00503B8
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0050700 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_UpdateSqmDatapoints(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // r9
  int v4; // r9d
  int v5; // eax
  int v6; // r9d
  __int64 v7; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+60h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF

  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
                      WdfDriverGlobals,
                      *(_QWORD *)a1,
                      1LL,
                      131103LL,
                      0LL,
                      &v10);
  if ( (int)result < 0 )
  {
    v3 = 58;
LABEL_13:
    LODWORD(v7) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 64),
               3u,
               3u,
               v3,
               (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
               v7);
    goto LABEL_14;
  }
  RtlInitUnicodeString(&DestinationString, L"HCRestoreStateFailureCount");
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015 + 1920))(
         WdfDriverGlobals,
         v10,
         &DestinationString,
         &v9) < 0 )
    v4 = *(_DWORD *)(a1 + 356);
  else
    v4 = *(_DWORD *)(a1 + 356) + v9;
  v9 = v4;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1968))(
         WdfDriverGlobals,
         v10,
         &DestinationString);
  if ( v5 < 0 )
  {
    LODWORD(v7) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      3u,
      3u,
      0x3Bu,
      (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids,
      v7);
  }
  RtlInitUnicodeString(&DestinationString, L"HCRecoveryCount");
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, int *))(WdfFunctions_01015 + 1920))(
         WdfDriverGlobals,
         v10,
         &DestinationString,
         &v9) < 0 )
    v6 = *(_DWORD *)(a1 + 352);
  else
    v6 = *(_DWORD *)(a1 + 352) + v9;
  v9 = v6;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1968))(
             WdfDriverGlobals,
             v10,
             &DestinationString);
  if ( (int)result < 0 )
  {
    v3 = 60;
    goto LABEL_13;
  }
LABEL_14:
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
