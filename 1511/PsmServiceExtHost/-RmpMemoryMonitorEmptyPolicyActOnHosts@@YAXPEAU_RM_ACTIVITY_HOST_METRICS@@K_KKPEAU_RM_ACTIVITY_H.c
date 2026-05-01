/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x180041F8C
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x180042574 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     RmpPolicyComputeDesiredEmptyState @ 0x180006760 (RmpPolicyComputeDesiredEmptyState.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800201A0 (RmpEnforcementArmWorkerForActivityHost.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x180040B7C (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18004124C (RmpActivityHostRevokeAllResourceSets.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned __int64 a3,
        char a4,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 *v8; // rsi
  unsigned int v10; // r13d
  char *v11; // rdi
  const struct _TlgProvider_t *v12; // rbx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned __int64 *v16; // rsi
  char v17; // al
  char v18; // r11
  const struct _TlgProvider_t *v19; // rcx
  char v20; // al
  int v21; // r8d
  char v22; // r8
  __int64 v23; // rdx
  const struct _TlgProvider_t *v24; // rcx
  const GUID *v25; // r8
  const GUID *v26; // r9
  unsigned __int8 v27; // r11
  char v28; // [rsp+38h] [rbp-71h]
  char v29; // [rsp+39h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-69h]
  unsigned int v31; // [rsp+48h] [rbp-61h]
  unsigned __int8 *v32; // [rsp+50h] [rbp-59h]
  unsigned __int8 *v33; // [rsp+58h] [rbp-51h]
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v34; // [rsp+60h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-41h] BYREF
  _BYTE *v36; // [rsp+88h] [rbp-21h]
  __int64 v37; // [rsp+90h] [rbp-19h]
  unsigned __int64 *v38; // [rsp+98h] [rbp-11h]
  __int64 v39; // [rsp+A0h] [rbp-9h]
  char *v40; // [rsp+A8h] [rbp-1h]
  __int64 v41; // [rsp+B0h] [rbp+7h]

  v8 = a7;
  v34 = a5;
  v31 = a2;
  v10 = 0;
  v32 = a6;
  v33 = a7;
  v30 = (__int64)RmSvcGlobals + 208;
  *a6 = 0;
  *a7 = 0;
  v28 = 0;
  if ( a2 )
  {
    v11 = (char *)a1 + 24;
    do
    {
      v12 = (const struct _TlgProvider_t *)*((_QWORD *)v11 + 2);
      if ( *((__int16 *)v11 + 14) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((_QWORD *)v11 + 2)) )
          return;
        if ( (a4 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v30, (__int64)v12, 2);
          if ( (a4 & 4) == 0 )
            *v8 = 1;
          v17 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, (__int64)v12, 1);
          v16 = (unsigned __int64 *)v11;
          LOBYTE(v19) = v17 & *((_BYTE *)v12 + 780);
          if ( (_BYTE)v19 == v17 )
            v16 = (unsigned __int64 *)(v11 + 8);
        }
        else
        {
          v20 = RmpPolicyComputeDesiredEmptyState((__int64)RmSvcGlobals + 208, (__int64)v12, 1);
          if ( ((unsigned __int8)v20 & *((_BYTE *)v12 + 780)) == v20 )
          {
            if ( v28 )
              return;
            v18 = RmpPolicyComputeDesiredEmptyState(v30, (__int64)v12, 2);
            v16 = (unsigned __int64 *)(v11 + 8);
            if ( (a4 & 4) == 0 )
              *v33 = 1;
          }
          else
          {
            v18 = RmpPolicyComputeDesiredEmptyState(v30, (__int64)v12, v21);
            v28 = v22;
            v16 = (unsigned __int64 *)v11;
          }
        }
        *((_BYTE *)v12 + 944) |= v18;
        if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v19, 1uLL) )
        {
          v36 = (char *)v12 + 24;
          v37 = 8LL;
          v40 = &v29;
          v38 = v16;
          v39 = 8LL;
          v29 = v23 & (v27 >> 5);
          v41 = v23;
          TlgWrite(v24, &unk_180063B12, v25, v26, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((__int64)v12, (__int64)v34);
        RmpEnforcementArmWorkerForActivityHost(*((_QWORD *)v11 + 2));
      }
      else
      {
        if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 1uLL) )
        {
          v37 = 8LL;
          v36 = (char *)v12 + 24;
          v40 = v11 - 24;
          v38 = (unsigned __int64 *)v11;
          v39 = 8LL;
          v41 = 8LL;
          TlgWrite(v13, &unk_18006395B, v14, v15, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((__int64)v12, (__int64)v34);
        RmpActivityHostRevokeAllResourceSets(v12, 4);
        v16 = (unsigned __int64 *)v11;
      }
      *v32 = 1;
      if ( (a4 & 2) != 0 )
        break;
      if ( *v16 > a3 )
        break;
      a3 -= *v16;
      ++v10;
      v8 = v33;
      v11 += 56;
    }
    while ( v10 < v31 );
  }
}
