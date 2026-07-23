/*
 * XREFs of PspSendNoWakeChargeLimitNotification @ 0x1406424AC
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

NTSTATUS __fastcall PspSendNoWakeChargeLimitNotification(_QWORD *a1)
{
  ULONG v1; // r8d
  NTSTATUS result; // eax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  if ( !a1 )
  {
    Buffer = -1;
    v1 = 4;
    v4 = 0;
    return ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, &Buffer, v1, 0LL, 0LL, 0, 0);
  }
  if ( !PspNoWakeChargeReferencedProcess )
  {
    v5 = 0LL;
    result = PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, (int)PspGetProcessInJobHierarchyCallback, (__int64)&v5, 0);
    if ( v5 )
    {
      Buffer = 1;
      v1 = 8;
      v4 = *(_DWORD *)(v5 + 744);
      PspNoWakeChargeReferencedProcess = (PVOID)v5;
      return ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, &Buffer, v1, 0LL, 0LL, 0, 0);
    }
  }
  return result;
}
