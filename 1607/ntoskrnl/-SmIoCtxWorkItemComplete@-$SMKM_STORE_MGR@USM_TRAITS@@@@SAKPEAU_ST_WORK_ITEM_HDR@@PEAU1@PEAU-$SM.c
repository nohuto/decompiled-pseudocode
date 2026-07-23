/*
 * XREFs of ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110
 * Callers:
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AFE4 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     MmStoreAsyncWriteComplete @ 0x14011B3BC (MmStoreAsyncWriteComplete.c)
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B4AC (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14011E50C (SmAcquireReleaseResAvailForRead.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // r10d
  unsigned int v8; // esi
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r15
  unsigned int v12; // r8d
  __int64 v13; // rax
  int v15; // eax
  __int64 v16; // rcx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v6 = a3;
  v8 = 1;
  if ( v4 <= 1 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)v4;
  v10 = *(_DWORD *)(a3 + 5856) & 0x3FF;
  if ( (*(_DWORD *)a1 & 5) != 0 )
  {
    v11 = 0LL;
    v12 = 0;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_DWORD *)(v11 + 40) >> 12;
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
            v10);
          *(_DWORD *)v4 = 0;
          goto LABEL_8;
        }
        break;
      case 2:
        v15 = *(_DWORD *)(a1 + 8);
        v16 = *(_QWORD *)(a1 + 32);
        if ( (_BYTE)v15 )
        {
          *(_WORD *)(v16 + 8) = (unsigned __int8)v15;
          if ( (dword_1403BF0C0 & 8) != 0 )
            a4 = 0;
        }
        *(_DWORD *)v16 = a4;
        if ( (dword_1403BF0C0 & 0x10) != 0 )
          SmAcquireReleaseResAvailForRead(v4, v12, 1LL);
        goto LABEL_8;
      case 3:
        *(_DWORD *)v4 = a4;
        *(_QWORD *)(v4 + 8) = *(unsigned int *)(a1 + 12);
        goto LABEL_8;
      case 4:
        if ( (*(_DWORD *)(a1 + 8) & 7) != 0 )
          goto LABEL_41;
        break;
      case 5:
LABEL_41:
        *(_DWORD *)v4 = a4;
        *(_QWORD *)(v4 + 8) = 0LL;
        goto LABEL_8;
      default:
        goto LABEL_8;
    }
    return 0;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion((unsigned int)&SmGlobals, a1, v12, v6, a4);
LABEL_8:
  if ( v11 )
  {
    if ( (*(_BYTE *)(v11 + 10) & 5) == 0 )
      MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( (dword_1403BF0C0 & 2) != 0 )
      SmFpFree(&dword_1403BEFA0, 5LL, v4, v11);
  }
  if ( v9 )
  {
    v13 = *(_QWORD *)(v4 + 8);
    if ( (*(_DWORD *)a1 & 7) != 0 )
    {
      if ( (*(_DWORD *)a1 & 7) == 2 )
        *(_QWORD *)(v4 + 8) = (unsigned __int16)v13;
    }
    else
    {
      if ( (v13 & 1) != 0 )
        v5 = 1LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    if ( v9 < 0 )
      KeSetEvent((PRKEVENT)v9, 1, 0);
    else
      MmStoreAsyncWriteComplete(v9 | 0x8000000000000000uLL);
  }
  return v8;
}
