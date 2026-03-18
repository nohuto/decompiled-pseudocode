/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     SmWdDPC @ 0x14020932C (SmWdDPC.c)
 *     SmWdWorkItemUpdate @ 0x1402097D8 (SmWdWorkItemUpdate.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     MmStoreAsyncWriteComplete @ 0x14010D564 (MmStoreAsyncWriteComplete.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D658 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140110370 (SmAcquireReleaseResAvailForRead.c)
 *     ?SmProcessReadCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1401103E0 (-SmProcessReadCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM.c)
 *     ?SmFeEmptyComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140209B68 (-SmFeEmptyComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // ecx
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v7 = 1;
  if ( v4 <= 1 )
    v8 = 0LL;
  else
    v8 = *(_QWORD *)v4;
  v9 = *(_DWORD *)(a3 + 4480) & 0x1F;
  if ( (*(_DWORD *)a1 & 5) != 0 )
  {
    v10 = 0LL;
    v11 = 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(v10 + 40) >> 12;
    if ( (*(_DWORD *)a1 & 7) == 2 )
      *(_QWORD *)(v4 + 8) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 7) != 0 )
  {
    switch ( *(_DWORD *)a1 & 7 )
    {
      case 1:
        if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
        {
          SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictComplete(
            (__int64)&SmGlobals,
            (unsigned int *)(a1 + 8),
            *(_DWORD *)(a1 + 12),
            v9);
          *(_DWORD *)v4 = 0;
          goto LABEL_8;
        }
        return 0;
      case 2:
        SMKM_STORE_MGR<SM_TRAITS>::SmProcessReadCompletion((unsigned int)&SmGlobals, a1, a3, a3, a4);
        if ( (dword_140304F40 & 0x10) != 0 )
          SmAcquireReleaseResAvailForRead(v4, v11, 1LL);
        goto LABEL_8;
      case 3:
        *(_DWORD *)v4 = a4;
        *(_QWORD *)(v4 + 8) = *(unsigned int *)(a1 + 12);
        goto LABEL_8;
      case 4:
        if ( (*(_DWORD *)(a1 + 8) & 7) == 0 )
        {
          SMKM_STORE_MGR<SM_TRAITS>::SmFeEmptyComplete(&SmGlobals, v9);
          return 0;
        }
        break;
      case 5:
        break;
      default:
        goto LABEL_8;
    }
    *(_DWORD *)v4 = a4;
    *(_QWORD *)(v4 + 8) = 0LL;
    goto LABEL_8;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion((unsigned int)&SmGlobals, a1, v11, a3, a4);
LABEL_8:
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (dword_140304F40 & 2) != 0 )
      SmFpFree(&unk_140304E20, 5LL, v4, v10);
  }
  if ( v8 )
  {
    v12 = *(_QWORD *)(v4 + 8);
    if ( (*(_DWORD *)a1 & 7) != 0 )
    {
      if ( (*(_DWORD *)a1 & 7) == 2 )
        *(_QWORD *)(v4 + 8) = (unsigned __int16)v12;
    }
    else
    {
      if ( (v12 & 1) != 0 )
        v5 = 1LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    if ( v8 < 0 )
      KeSetEvent((PRKEVENT)v8, 1, 0);
    else
      MmStoreAsyncWriteComplete(v8 | 0x8000000000000000uLL);
  }
  return v7;
}
