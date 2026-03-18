/*
 * XREFs of LeaveEditionCrit @ 0x1C0113340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  LeaveDeviceInfoListCrit_(a1);
  return UserSessionSwitchLeaveCrit(v2, v1);
}
