/*
 * XREFs of RmpActivityHostComputeCommitThresholds @ 0x1800204F8
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z @ 0x180009D60 (-GetAggregateCommitMemValues@ModernActivationResourceInfo@ExecutionModel@@QEBAXPEA_K0000@Z.c)
 *     RmpActivityHostGetCommitThresholdsAndLevel @ 0x180019138 (RmpActivityHostGetCommitThresholdsAndLevel.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitThresholds(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        _QWORD *a5,
        int *a6,
        unsigned __int64 *a7)
{
  int v9; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 result; // rax
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+70h] [rbp-28h] BYREF
  __int64 v19; // [rsp+78h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-18h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(a1 + 40);
  if ( !v9 )
  {
    ExecutionModel::ModernActivationResourceInfo::GetAggregateCommitMemValues(
      *(ExecutionModel::ModernActivationResourceInfo **)(a1 + 600),
      &v20,
      0LL,
      (unsigned __int64 *)&v19,
      &v18,
      &v21);
    v12 = v21;
    v13 = v18;
    v14 = v19;
    v15 = v20;
    return RmpActivityHostGetCommitThresholdsAndLevel(
             v13,
             v12,
             v14,
             *(_QWORD *)(a1 + 832),
             *(_QWORD *)(a1 + 840),
             *(_QWORD *)(a1 + 848),
             v15,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  }
  if ( v9 == 1 )
  {
    v17 = *(_QWORD **)(a1 + 600);
    v13 = v17[219];
    v12 = v17[182];
    v14 = v17[183];
    v15 = v17[231];
    return RmpActivityHostGetCommitThresholdsAndLevel(
             v13,
             v12,
             v14,
             *(_QWORD *)(a1 + 832),
             *(_QWORD *)(a1 + 840),
             *(_QWORD *)(a1 + 848),
             v15,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  }
  return result;
}
