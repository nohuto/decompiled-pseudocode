/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     SmWdDPC @ 0x140258450 (SmWdDPC.c)
 *     SmWdWorkItemUpdate @ 0x1402589B4 (SmWdWorkItemUpdate.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14013CD78 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmIoRequestComplete @ 0x14013F03C (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013F248 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140140004 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmProcessReadCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140140074 (-SmProcessReadCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM.c)
 *     ?SmFeEmptyComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140258EF4 (-SmFeEmptyComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned int v10; // r14d

  v4 = *(__int64 **)(a1 + 32);
  v5 = 1;
  if ( (unsigned __int64)v4 <= 1 )
    v7 = 0LL;
  else
    v7 = *v4;
  v8 = *(_DWORD *)(a3 + 4480) & 0x1F;
  if ( (*(_DWORD *)a1 & 5) != 0 )
  {
    v9 = 0LL;
    v10 = 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_DWORD *)(v9 + 40) >> 12;
    if ( (*(_DWORD *)a1 & 7) == 2 )
      v4[1] = 0LL;
  }
  if ( (*(_DWORD *)a1 & 7) != 0 )
  {
    switch ( *(_DWORD *)a1 & 7 )
    {
      case 1:
        if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
        {
          SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(
            (__int64)SmGlobals,
            (unsigned int *)(a1 + 8),
            *(_DWORD *)(a1 + 12),
            v8);
          *(_DWORD *)v4 = 0;
          goto LABEL_8;
        }
        break;
      case 2:
        SMKM_STORE_MGR<SM_TRAITS>::SmProcessReadCompletion((unsigned int)SmGlobals, a1, a3, a3, a4);
        if ( (dword_140352CB0 & 0x10) != 0 )
          SmAcquireReleaseResAvailForRead(v4, v10, 1LL);
        goto LABEL_8;
      case 3:
        *(_DWORD *)v4 = a4;
        v4[1] = *(unsigned int *)(a1 + 12);
        goto LABEL_8;
      case 4:
        if ( (*(_DWORD *)(a1 + 8) & 7) != 0 )
          goto LABEL_28;
        SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyComplete(SmGlobals, (unsigned int)v8);
        break;
      case 5:
LABEL_28:
        v4[1] = 0LL;
        *(_DWORD *)v4 = a4;
        goto LABEL_8;
      default:
        goto LABEL_8;
    }
    return 0;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion((unsigned int)SmGlobals, a1, v10, a3, a4);
LABEL_8:
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (dword_140352CB0 & 2) != 0 )
      SmFpFree(&unk_140352B98, 4LL, v4, v9);
  }
  if ( v7 )
    SmIoRequestComplete(v8, a1, v7, v4);
  return v5;
}
