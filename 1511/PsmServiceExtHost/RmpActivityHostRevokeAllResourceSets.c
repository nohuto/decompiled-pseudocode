/*
 * XREFs of RmpActivityHostRevokeAllResourceSets @ 0x18004124C
 * Callers:
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_H.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KW4_RM_REVOKE_REASON@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800427FC (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAXPEAU_RM_POLICY@@W4_RM_ACTIVITY_HOST_METRIC@@PEAU_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180004330 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpActivityHostPopulateMetricsArray @ 0x18001D5A4 (RmpActivityHostPopulateMetricsArray.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     RmpActivityHostActOnResourceSets @ 0x180040ADC (RmpActivityHostActOnResourceSets.c)
 */

__int64 __fastcall RmpActivityHostRevokeAllResourceSets(const struct _TlgProvider_t *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v9; // [rsp+30h] [rbp-59h] BYREF
  int v10; // [rsp+34h] [rbp-55h] BYREF
  _BYTE v11[40]; // [rsp+38h] [rbp-51h] BYREF
  const struct _TlgProvider_t *v12; // [rsp+60h] [rbp-29h]
  int v13; // [rsp+68h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  int *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  char *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  _BYTE *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]
  int *v24; // [rsp+C0h] [rbp+37h]
  int v25; // [rsp+C8h] [rbp+3Fh]
  int v26; // [rsp+CCh] [rbp+43h]

  v2 = a2;
  if ( TraceLoggingProviderEnabled(a1, a2, 0LL) )
  {
    memset_0(v11, 0, 0x38uLL);
    v12 = a1;
    RmpActivityHostPopulateMetricsArray((__int64)v11, 1u, 1);
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v15 = &v10;
        v18 = (char *)a1 + 24;
        v21 = v11;
        v9 = v13;
        v24 = &v9;
        v10 = v2;
        v16 = (int)v7;
        v19 = v4 + 7;
        v22 = v4 + 7;
        v25 = (int)v7;
        TlgWrite((TraceLoggingHProvider)(unsigned int)(v4 + 7), &unk_180062EEB, v6, v7, 6u, &pData);
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
