/*
 * XREFs of RmpActivityHostRevokeAllResourceSets @ 0x18003BED8
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003D194 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_MEMORY_METRIC@@PEAU_RM_ACTI.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyActivityHostMetricsInitialize @ 0x18000717C (RmpPolicyActivityHostMetricsInitialize.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostActOnResourceSets @ 0x18003B704 (RmpActivityHostActOnResourceSets.c)
 */

__int64 __fastcall RmpActivityHostRevokeAllResourceSets(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+34h] [rbp-55h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-51h] BYREF
  int v12; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  int *v14; // [rsp+90h] [rbp+7h]
  int v15; // [rsp+98h] [rbp+Fh]
  int v16; // [rsp+9Ch] [rbp+13h]
  char *v17; // [rsp+A0h] [rbp+17h]
  int v18; // [rsp+A8h] [rbp+1Fh]
  int v19; // [rsp+ACh] [rbp+23h]
  _OWORD *v20; // [rsp+B0h] [rbp+27h]
  int v21; // [rsp+B8h] [rbp+2Fh]
  int v22; // [rsp+BCh] [rbp+33h]
  int *v23; // [rsp+C0h] [rbp+37h]
  int v24; // [rsp+C8h] [rbp+3Fh]
  int v25; // [rsp+CCh] [rbp+43h]

  v2 = a2;
  if ( TraceLoggingProviderEnabled(a1, a2, 0LL) )
  {
    RmpPolicyActivityHostMetricsInitialize(a1, 1, v11);
    if ( (unsigned int)dword_1800690A0 > 4 )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v14 = &v10;
        v17 = (char *)a1 + 24;
        v20 = v11;
        v9 = v12;
        v23 = &v9;
        v10 = v2;
        v15 = (int)v7;
        v18 = v4 + 7;
        v21 = v4 + 7;
        v24 = (int)v7;
        TlgWrite((TraceLoggingHProvider)(unsigned int)(v4 + 7), &unk_18005B4AF, v6, v7, 6u, &pData);
      }
    }
  }
  return RmpActivityHostActOnResourceSets(
           (__int64)a1,
           v4,
           0,
           (__int64 (__fastcall *)(__int64, __int64, __int64))RmpActivityHostRevokeAllResourceSetsCallback,
           v2);
}
