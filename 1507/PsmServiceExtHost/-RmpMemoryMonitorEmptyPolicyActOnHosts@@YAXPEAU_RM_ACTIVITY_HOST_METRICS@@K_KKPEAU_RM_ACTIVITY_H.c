/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE3@Z @ 0x18003CBCC
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2K@Z @ 0x18003CF80 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     RmpEnforcementArmWorkerForActivityHost @ 0x1800050C8 (RmpEnforcementArmWorkerForActivityHost.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostAddToRemediationGroup @ 0x18003B7A4 (RmpActivityHostAddToRemediationGroup.c)
 *     RmpActivityHostRevokeAllResourceSets @ 0x18003BED8 (RmpActivityHostRevokeAllResourceSets.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned int v9; // r15d
  char *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 *v12; // rsi
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // rdx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  char v20; // al
  bool v21; // zf
  char v22; // [rsp+38h] [rbp-61h]
  char v23; // [rsp+39h] [rbp-60h] BYREF
  int v24; // [rsp+3Ch] [rbp-5Dh]
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v25; // [rsp+40h] [rbp-59h]
  unsigned __int8 *v26; // [rsp+48h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-41h] BYREF
  __int64 v28; // [rsp+78h] [rbp-21h]
  __int64 v29; // [rsp+80h] [rbp-19h]
  unsigned __int64 *v30; // [rsp+88h] [rbp-11h]
  __int64 v31; // [rsp+90h] [rbp-9h]
  char *v32; // [rsp+98h] [rbp-1h]
  __int64 v33; // [rsp+A0h] [rbp+7h]

  v25 = a5;
  v24 = a4;
  *a6 = 0;
  v9 = 0;
  v26 = a7;
  *a7 = 0;
  v22 = 0;
  if ( a2 )
  {
    v10 = (char *)a1 + 16;
    while ( 1 )
    {
      v11 = *((_QWORD *)v10 + 2);
      v12 = (unsigned __int64 *)(v10 + 8);
      if ( *((__int16 *)v10 + 14) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(v11) )
          return;
        if ( (*(_BYTE *)(v11 + 772) & 7) != 0 )
        {
          if ( v22 || !*v12 )
            return;
          *(_BYTE *)(v11 + 912) |= 0x20u;
          if ( (v24 & 4) == 0 )
            *v26 = 1;
        }
        else
        {
          v12 = (unsigned __int64 *)v10;
          v22 = 1;
        }
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(0LL, 1uLL) )
        {
          v29 = 8LL;
          v28 = v11 + 24;
          v20 = v16 & (*(_BYTE *)(v11 + 912) >> 5);
          v30 = v12;
          v23 = v20;
          v32 = &v23;
          v31 = 8LL;
          v33 = v16;
          TlgWrite(v17, &unk_18005BAC1, v18, v19, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup(v11, (__int64)v25);
        RmpEnforcementArmWorkerForActivityHost(*((_QWORD *)v10 + 2));
      }
      else
      {
        if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 1uLL) )
        {
          v29 = 8LL;
          v28 = v11 + 24;
          v32 = v10 - 16;
          v30 = (unsigned __int64 *)v10;
          v31 = 8LL;
          v33 = 8LL;
          TlgWrite(v13, &unk_18005BE28, v14, v15, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup(v11, (__int64)v25);
        RmpActivityHostRevokeAllResourceSets((struct _RM_ACTIVITY_HOST *)v11, 4);
        v12 = (unsigned __int64 *)v10;
      }
      v21 = (v24 & 2) == 0;
      *a6 = 1;
      if ( v21 && *v12 <= a3 )
      {
        a3 -= *v12;
        ++v9;
        v10 += 48;
        if ( v9 < a2 )
          continue;
      }
      return;
    }
  }
}
