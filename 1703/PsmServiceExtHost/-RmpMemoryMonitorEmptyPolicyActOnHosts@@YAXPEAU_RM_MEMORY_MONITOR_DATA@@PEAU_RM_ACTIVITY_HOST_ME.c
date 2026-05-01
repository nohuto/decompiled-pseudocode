/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180036440
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180036A38 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     ?RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004944 (-RmpEnforcementArmWorkerForActivityHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18001595C (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18002E060 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180033074 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v9; // rsi
  __int64 v10; // rax
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // r14
  char *v13; // rdi
  __int64 v14; // rbx
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  char *v18; // rsi
  char v19; // al
  int v20; // r8d
  char v21; // r11
  __int64 v22; // rdx
  const struct _TlgProvider_t *v23; // rcx
  char v24; // al
  int v25; // r8d
  char v26; // r8
  __int64 v27; // rdx
  const struct _TlgProvider_t *v28; // rcx
  const GUID *v29; // r8
  const GUID *v30; // r9
  unsigned __int8 v31; // r11
  char v32; // [rsp+30h] [rbp-D0h]
  char v33; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v34; // [rsp+34h] [rbp-CCh]
  unsigned int v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v37; // [rsp+48h] [rbp-B8h]
  unsigned __int8 *v38; // [rsp+50h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  char *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  char *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]

  v9 = a7;
  v37 = a6;
  v10 = *(_QWORD *)a1;
  v11 = 0LL;
  v35 = a3;
  v38 = a7;
  v32 = 0;
  v12 = *(_QWORD *)(v10 + 24) + 400LL;
  *a7 = 0;
  *a8 = 0;
  v34 = 0;
  if ( a3 )
  {
    v13 = (char *)a2 + 24;
    do
    {
      v14 = *((_QWORD *)v13 + 3);
      if ( *((_WORD *)v13 + 18) < 0x8000u )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v13 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
          if ( (a5 & 4) == 0 )
            *a8 = 1;
          v19 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 40) + 400LL, v14, 1);
          v22 = (unsigned int)(v20 + 23);
          LOBYTE(v23) = v19 & *(_BYTE *)(v14 + 820);
          if ( (_BYTE)v23 == v19 )
            v22 = (unsigned int)(v20 + 31);
        }
        else
        {
          v24 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 40) + 400LL, v14, 1);
          if ( ((unsigned __int8)v24 & *(_BYTE *)(v14 + 820)) == v24 )
          {
            if ( v32 )
              return;
            v21 = RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
            if ( (a5 & 4) == 0 )
              *a8 = 1;
            v22 = 32LL;
          }
          else
          {
            v21 = RmpPolicyComputeDesiredEmptyState(v12, v14, v25);
            v32 = v26;
            v22 = 24LL;
          }
        }
        *(_BYTE *)(v14 + 1128) |= v21;
        v18 = &v13[v22 - 24];
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v23, 1uLL) )
        {
          v36 = *(_QWORD *)(v14 + 24);
          v47 = &v36;
          v48 = 8LL;
          v51 = &v33;
          v49 = v18;
          v50 = 8LL;
          v33 = v27 & (v31 >> 5);
          v52 = v27;
          TlgWrite(v28, &unk_180043BE8, v29, v30, 5u, &v46);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v37);
        RmpEnforcementArmWorkerForActivityHost(*((struct _RM_ACTIVITY_HOST **)v13 + 3));
        *v38 = 1;
      }
      else
      {
        if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
        {
          v36 = *(_QWORD *)(v14 + 24);
          v40 = &v36;
          v44 = v13 - 24;
          v41 = 8LL;
          v42 = v13;
          v43 = 8LL;
          v45 = 8LL;
          TlgWrite(v15, &unk_180043E00, v16, v17, 5u, &pData);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v37);
        RmpActivityHostRevokeResourceSets(v14, 3u, 4u, 0LL);
        *v9 = 1;
        v18 = v13;
      }
      if ( (a5 & 2) != 0 )
        break;
      if ( *(_QWORD *)v18 > a4 )
        break;
      v13 += 64;
      a4 -= *(_QWORD *)v18;
      v9 = v38;
      ++v34;
    }
    while ( v34 < v35 );
  }
}
