/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1401187D8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14021D600 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x1400177F0 (RtlFindNextForwardRunClearCapped.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011E58C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140120598 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x1401206A0 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14021E884 (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, __int64 a3)
{
  int v5; // r13d
  int v6; // r12d
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  int NextForwardRunClearCapped; // eax
  bool v11; // cf
  unsigned int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  void *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rbx
  __int16 v23; // ax
  int v25; // [rsp+80h] [rbp+8h]
  unsigned int v26; // [rsp+88h] [rbp+10h] BYREF
  int v27; // [rsp+90h] [rbp+18h]
  unsigned int v28; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v26 = 0;
  v27 = a2 & 1;
  v8 = 0;
  v9 = a1 + 840;
LABEL_4:
  while ( 1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v9, v8, 0xFFFFFFFF, &v26);
    if ( !NextForwardRunClearCapped )
      break;
    v8 = v26;
    v28 = v26 + NextForwardRunClearCapped;
    v11 = v26 < v26 + NextForwardRunClearCapped;
    v9 = a1 + 840;
    if ( v11 )
    {
      while ( 1 )
      {
        v25 = ++v7;
        if ( (v7 & 0xF) == 0 && a3 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6432LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 5936LL)
             + (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 5940LL) >> 8) )
          {
            v5 = 1;
            v6 = 1;
            goto LABEL_31;
          }
          v8 = v26;
        }
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v8) != 8 )
        {
LABEL_27:
          _bittestandset(*(signed __int32 **)(a1 + 848), v8);
          goto LABEL_28;
        }
        v14 = v8;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1016) + 2LL * v8) & 0x1FFF) != 0 )
          break;
        v15 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v15 + 5861) & 4) != 0 )
        {
          v16 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), v12, v27 | 2u, v13);
        }
        else
        {
          v17 = *(_QWORD *)(v15 + 6056);
          v18 = (void *)(*(_QWORD *)(v17 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
          MiFreePagesFromMdl((ULONG_PTR)v18, 0);
          ExFreePoolWithTag(v18, 0);
          *(_QWORD *)(v17 + 8LL * v8) = 0LL;
          v7 = v25;
          v16 = 0;
        }
        if ( v16 >= 0 )
          goto LABEL_27;
LABEL_16:
        v6 = 1;
LABEL_28:
        v26 = ++v8;
        if ( v8 >= v28 )
        {
          v9 = a1 + 840;
          goto LABEL_4;
        }
      }
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v12) )
        goto LABEL_27;
      if ( (*(_BYTE *)(v19 + 5861) & 4) != 0 )
      {
        v21 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v19, v8, 0, v20, 8u);
        goto LABEL_26;
      }
      v22 = *(_QWORD *)(v19 + 6056);
      if ( (*(_QWORD *)(v22 + 8LL * v8) & 3) == 0 )
      {
        v21 = SmFpAllocate(
                (PEX_SPIN_LOCK)(v19 + 6448),
                5,
                (__int64)KeGetCurrentThread(),
                *(_QWORD *)(v22 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL,
                0);
        v8 = v26;
        if ( v21 )
LABEL_24:
          *(_QWORD *)(v22 + 8 * v14) |= 1uLL;
        v7 = v25;
LABEL_26:
        if ( v21 != 3 )
          goto LABEL_27;
        goto LABEL_16;
      }
      v21 = *(_QWORD *)((*(_QWORD *)(v22 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_24;
    }
  }
LABEL_31:
  if ( a3 )
  {
    v23 = *(_WORD *)(a3 + 12) & 1;
    if ( v23 || v6 )
    {
      if ( v5 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v23 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
