/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140141774 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014040C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14014753C (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140147C9C (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2)
{
  __int64 v2; // r14
  int v4; // r13d
  int v5; // r12d
  int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rax
  int NextForwardRunClearCapped; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  __int64 v12; // r15
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  struct _MDL *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  __int16 v21; // ax
  int v23; // [rsp+80h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+90h] [rbp+18h]
  int v26; // [rsp+98h] [rbp+20h]

  v2 = a1 + 216;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  _InterlockedAnd16((volatile signed __int16 *)(a1 + 228), 0xFFFEu);
  v24 = 0;
  *(_WORD *)(a1 + 230) &= ~1u;
  v7 = 0;
  v26 = a2 & 1;
  v8 = a1 + 192;
LABEL_2:
  while ( 1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v8, v7, 0xFFFFFFFF, &v24);
    if ( !NextForwardRunClearCapped )
      break;
    v7 = v24;
    v10 = NextForwardRunClearCapped + v24;
    v25 = v10;
    v8 = a1 + 192;
    if ( v24 < v10 )
    {
      while ( 1 )
      {
        v23 = ++v6;
        if ( (v6 & 0xF) == 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 4564LL) >> 8)
             + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 5032LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4560LL) )
          {
            v4 = 1;
            v5 = 1;
            goto LABEL_35;
          }
          v7 = v24;
        }
        if ( (unsigned __int8)*(_DWORD *)(a1 + 128) )
          v11 = 0;
        else
          v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 472) + 2LL * v7) >> 13;
        if ( v7 != *(_DWORD *)(a1 + 16LL * v11 + 648) )
          v11 = 8;
        if ( v11 != 8 )
        {
LABEL_31:
          _bittestandset(*(signed __int32 **)(a1 + 200), v7);
          goto LABEL_32;
        }
        v12 = v7;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 472) + 2LL * v7) & 0x1FFF) != 0 )
          break;
        v13 = *(_QWORD *)(a1 + 152);
        if ( (*(_BYTE *)(v13 + 4485) & 4) != 0 )
        {
          v14 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 152), v7, v26 | 2u);
        }
        else
        {
          v15 = *(_QWORD *)(v13 + 4680);
          v16 = (struct _MDL *)(*(_QWORD *)(v15 + 8LL * v7) & 0xFFFFFFFFFFFFFFF8uLL);
          MmFreePagesFromMdl(v16);
          ExFreePoolWithTag(v16, 0);
          *(_QWORD *)(v15 + 8LL * v7) = 0LL;
          v10 = v25;
          v14 = 0;
        }
        v6 = v23;
        if ( v14 >= 0 )
          goto LABEL_31;
        v5 = 1;
LABEL_32:
        v24 = ++v7;
        if ( v7 >= v10 )
        {
          v8 = a1 + 192;
          goto LABEL_2;
        }
      }
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 152), v7) )
        goto LABEL_31;
      if ( (*(_BYTE *)(v17 + 4485) & 4) != 0 )
      {
        v19 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v17, v7, 0, v18, v18);
LABEL_29:
        if ( v19 != 3 )
          goto LABEL_31;
        v5 = 1;
        goto LABEL_32;
      }
      v20 = *(_QWORD *)(v17 + 4680);
      if ( (*(_QWORD *)(v20 + 8LL * v7) & 3) == 0 )
      {
        v19 = SmFpAllocate(
                v17 + 5048,
                4,
                (__int64)KeGetCurrentThread(),
                *(_QWORD *)(v20 + 8LL * v7) & 0xFFFFFFFFFFFFFFF8uLL,
                0);
        v7 = v24;
        if ( v19 )
LABEL_27:
          *(_QWORD *)(v20 + 8 * v12) |= 1uLL;
        v10 = v25;
        goto LABEL_29;
      }
      v19 = *(_QWORD *)((*(_QWORD *)(v20 + 8LL * v7) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_27;
    }
  }
LABEL_35:
  v21 = *(_WORD *)(v2 + 12) & 1;
  if ( v21 || v5 )
  {
    if ( v4 )
      *(_WORD *)(v2 + 14) |= 1u;
    if ( !v21 )
      ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, v2);
  }
  return 0LL;
}
