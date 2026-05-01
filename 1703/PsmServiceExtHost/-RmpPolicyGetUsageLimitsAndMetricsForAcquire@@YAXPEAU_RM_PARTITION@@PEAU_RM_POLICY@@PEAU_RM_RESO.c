/*
 * XREFs of ?RmpPolicyGetUsageLimitsAndMetricsForAcquire@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012930
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18000DF50 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010460 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18000B500 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpPolicyGetUsageLimitsAndMetricsForAcquire(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY *a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // r10
  unsigned __int16 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18[2]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v19; // [rsp+40h] [rbp-78h]
  __int128 v20; // [rsp+50h] [rbp-68h]
  __int128 v21; // [rsp+60h] [rbp-58h]
  __int128 v22; // [rsp+70h] [rbp-48h]

  memset_0(a3, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery(a1, (struct _RM_SYSTEM_MEMORY_METRICS *)v18);
  RmpPolicyComputeUsageLimits(
    a2,
    (struct _RM_POLICY *)((char *)a2 + 56),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v18,
    v18[0],
    a3);
  if ( a4 )
  {
    v8 = v19;
    *(_OWORD *)a4 = *(_OWORD *)v18;
    v9 = v20;
    *((_OWORD *)a4 + 1) = v8;
    v10 = v21;
    *((_OWORD *)a4 + 2) = v9;
    v11 = v22;
    *((_OWORD *)a4 + 3) = v10;
    *((_OWORD *)a4 + 4) = v11;
  }
  RmpPolicyPopulateActivityHostMetrics(
    (__int64)a1,
    0,
    (__int64)a1 + 144,
    0x43u,
    (unsigned __int8 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
    (void *)2);
  v12 = 0;
  if ( *((_DWORD *)a1 + 45) )
  {
    v13 = *((_QWORD *)a4 + 4);
    do
    {
      v14 = (__int64 *)(*((_QWORD *)a1 + 18) + ((unsigned __int64)v12 << 6));
      v15 = v14[6];
      v16 = *(_WORD *)(v15 + 666);
      if ( (v16 & 0x20) != 0
        && ((*(_BYTE *)(*(_QWORD *)(v15 + 40) + 508LL) & 4) != 0 || (v16 & *(_WORD *)(v15 + 664) & 4) != 0)
        && (v16 & 0x40) != 0 )
      {
        v17 = *v14;
      }
      else
      {
        v17 = v14[5];
      }
      v13 += v17;
      ++v12;
      *((_QWORD *)a4 + 4) = v13;
    }
    while ( v12 < *((_DWORD *)a1 + 45) );
  }
  *((_DWORD *)a4 + 18) |= 1u;
}
