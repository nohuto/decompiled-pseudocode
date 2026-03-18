/*
 * XREFs of LeaveEditionCrit @ 0x1C012BEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  LeaveDeviceInfoListCrit_(a1, a2);
  return UserSessionSwitchLeaveCrit(v3, v2);
}
