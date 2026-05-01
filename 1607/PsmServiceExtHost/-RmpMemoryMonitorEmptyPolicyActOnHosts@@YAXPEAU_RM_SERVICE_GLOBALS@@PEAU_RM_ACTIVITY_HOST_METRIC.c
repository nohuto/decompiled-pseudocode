/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180032AA8
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpPolicyComputeDesiredEmptyState @ 0x180018124 (RmpPolicyComputeDesiredEmptyState.c)
 *     RmpEnforcementArmWorkerForActivityHost @ 0x180018374 (RmpEnforcementArmWorkerForActivityHost.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18002093C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x18002EC24 (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rsi
  const struct _TlgProvider_t *v10; // rcx
  unsigned int v11; // r13d
  char *v12; // rdi
  __int64 v13; // rbx
  const struct _TlgProvider_t *v14; // rcx
  const GUID *v15; // r8
  const GUID *v16; // r9
  unsigned __int64 *v17; // rsi
  char v18; // al
  char v19; // r11
  const struct _TlgProvider_t *v20; // rcx
  char v21; // al
  int v22; // r8d
  char v23; // r8
  __int64 v24; // rdx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  unsigned __int8 v28; // r11
  char v29; // [rsp+30h] [rbp-79h]
  char v30; // [rsp+31h] [rbp-78h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-75h]
  __int64 v32; // [rsp+38h] [rbp-71h]
  __int64 v33; // [rsp+40h] [rbp-69h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v34; // [rsp+48h] [rbp-61h]
  unsigned __int8 *v35; // [rsp+50h] [rbp-59h]
  unsigned __int8 *v36; // [rsp+58h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  __int64 *v38; // [rsp+80h] [rbp-29h]
  __int64 v39; // [rsp+88h] [rbp-21h]
  unsigned __int64 *v40; // [rsp+90h] [rbp-19h]
  __int64 v41; // [rsp+98h] [rbp-11h]
  char *v42; // [rsp+A0h] [rbp-9h]
  __int64 v43; // [rsp+A8h] [rbp-1h]

  v8 = a8;
  v34 = a6;
  v32 = (__int64)a1 + 424;
  v10 = 0LL;
  v31 = a3;
  v11 = 0;
  v35 = a7;
  *a7 = 0;
  *a8 = 0;
  v36 = a8;
  v29 = 0;
  if ( a3 )
  {
    v12 = (char *)a2 + 24;
    do
    {
      v13 = *((_QWORD *)v12 + 3);
      if ( *((__int16 *)v12 + 18) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((_QWORD *)v12 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v32, v13, 2);
          if ( (a5 & 4) == 0 )
            *v8 = 1;
          v18 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v13 + 40) + 424LL, v13, 1);
          v17 = (unsigned __int64 *)v12;
          LOBYTE(v20) = v18 & *(_BYTE *)(v13 + 820);
          if ( (_BYTE)v20 == v18 )
            v17 = (unsigned __int64 *)(v12 + 8);
        }
        else
        {
          v21 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v13 + 40) + 424LL, v13, 1);
          if ( ((unsigned __int8)v21 & *(_BYTE *)(v13 + 820)) == v21 )
          {
            if ( v29 )
              return;
            v19 = RmpPolicyComputeDesiredEmptyState(v32, v13, 2);
            v17 = (unsigned __int64 *)(v12 + 8);
            if ( (a5 & 4) == 0 )
              *v36 = 1;
          }
          else
          {
            v19 = RmpPolicyComputeDesiredEmptyState(v32, v13, v22);
            v29 = v23;
            v17 = (unsigned __int64 *)v12;
          }
        }
        *(_BYTE *)(v13 + 1120) |= v19;
        if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v20, 1uLL) )
        {
          v33 = *(_QWORD *)(v13 + 24);
          v38 = &v33;
          v39 = 8LL;
          v42 = &v30;
          v40 = v17;
          v41 = 8LL;
          v30 = v24 & (v28 >> 5);
          v43 = v24;
          TlgWrite(v25, &unk_180041E5B, v26, v27, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup(v13, (__int64)v34);
        RmpEnforcementArmWorkerForActivityHost(*((_QWORD *)v12 + 3));
      }
      else
      {
        if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 1uLL) )
        {
          v33 = *(_QWORD *)(v13 + 24);
          v38 = &v33;
          v42 = v12 - 24;
          v39 = 8LL;
          v40 = (unsigned __int64 *)v12;
          v41 = 8LL;
          v43 = 8LL;
          TlgWrite(v14, &unk_180041D4A, v15, v16, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup(v13, (__int64)v34);
        RmpActivityHostRevokeResourceSets(v13, 3u, 4u);
        v17 = (unsigned __int64 *)v12;
      }
      *v35 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *v17 > a4 )
        break;
      a4 -= *v17;
      ++v11;
      v8 = v36;
      v12 += 64;
    }
    while ( v11 < v31 );
  }
}
