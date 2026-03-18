/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x140205848
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400F6DB0 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140203C50 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400B3380 (RtlFindNextForwardRunClearCapped.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011044C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140111764 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140111868 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  __int64 v13; // r15
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  struct _MDL *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbx
  __int16 v22; // ax
  int v24; // [rsp+80h] [rbp+8h]
  unsigned int v25; // [rsp+88h] [rbp+10h] BYREF
  int v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v25 = 0;
  v26 = a2 & 1;
  v8 = 0;
  v9 = a1 + 192;
LABEL_4:
  while ( 1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v9, v8, 0xFFFFFFFF, &v25);
    if ( !NextForwardRunClearCapped )
      break;
    v8 = v25;
    v27 = v25 + NextForwardRunClearCapped;
    v11 = v25 < v25 + NextForwardRunClearCapped;
    v9 = a1 + 192;
    if ( v11 )
    {
      while ( 1 )
      {
        v24 = ++v7;
        if ( (v7 & 0xF) == 0 && a3 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 4564LL) >> 8)
             + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 5032LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4560LL) )
          {
            v5 = 1;
            v6 = 1;
            goto LABEL_36;
          }
          v8 = v25;
        }
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v12 = 0;
        else
          v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2LL * v8) >> 13;
        if ( v8 != *(_DWORD *)(a1 + 16LL * v12 + 648) )
          v12 = 8;
        if ( v12 != 8 )
        {
LABEL_32:
          _bittestandset(*(signed __int32 **)(a1 + 200), v8);
          goto LABEL_33;
        }
        v13 = v8;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * v8) & 0x1FFF) != 0 )
          break;
        v14 = *(_QWORD *)(a1 + 152);
        if ( (*(_BYTE *)(v14 + 4485) & 4) != 0 )
        {
          v15 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 152), v8, v26 | 2u);
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 4680);
          v17 = (struct _MDL *)(*(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
          MmFreePagesFromMdl(v17);
          ExFreePoolWithTag(v17, 0);
          *(_QWORD *)(v16 + 8LL * v8) = 0LL;
          v7 = v24;
          v15 = 0;
        }
        if ( v15 >= 0 )
          goto LABEL_32;
LABEL_21:
        v6 = 1;
LABEL_33:
        v25 = ++v8;
        if ( v8 >= v27 )
        {
          v9 = a1 + 192;
          goto LABEL_4;
        }
      }
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), v8) )
        goto LABEL_32;
      if ( (*(_BYTE *)(v18 + 4485) & 4) != 0 )
      {
        v20 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v8, 0, v19, v19);
        goto LABEL_31;
      }
      v21 = *(_QWORD *)(v18 + 4680);
      if ( (*(_QWORD *)(v21 + 8LL * v8) & 3) == 0 )
      {
        v20 = SmFpAllocate(
                (PEX_SPIN_LOCK)(v18 + 5048),
                5,
                (__int64)KeGetCurrentThread(),
                *(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL,
                0);
        v8 = v25;
        if ( v20 )
LABEL_29:
          *(_QWORD *)(v21 + 8 * v13) |= 1uLL;
        v7 = v24;
LABEL_31:
        if ( v20 != 3 )
          goto LABEL_32;
        goto LABEL_21;
      }
      v20 = *(_QWORD *)((*(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_29;
    }
  }
LABEL_36:
  if ( a3 )
  {
    v22 = *(_WORD *)(a3 + 12) & 1;
    if ( v22 || v6 )
    {
      if ( v5 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v22 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
