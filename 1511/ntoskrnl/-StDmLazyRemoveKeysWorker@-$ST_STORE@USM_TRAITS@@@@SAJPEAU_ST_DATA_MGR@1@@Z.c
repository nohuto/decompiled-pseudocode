/*
 * XREFs of ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140205AF0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010C0A8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010EB74 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011044C (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpSparseBitmapCtxFindNextBitInternal @ 0x14022345C (RtlpSparseBitmapCtxFindNextBitInternal.c)
 *     RtlpSparseBitmapCtxUpdateBitRanges @ 0x140223C28 (RtlpSparseBitmapCtxUpdateBitRanges.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRemoveKeysWorker(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r14d
  __int64 NextBitInternal; // rax
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h]
  _DWORD v10[8]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1 + 328;
  _InterlockedAnd16((volatile signed __int16 *)(a1 + 340), 0xFFFEu);
  memset(v10, 0, sizeof(v10));
  v10[4] |= 3u;
  v3 = 0;
  v10[3] = 16;
  while ( 1 )
  {
    NextBitInternal = RtlpSparseBitmapCtxFindNextBitInternal((int)a1 + 248);
    if ( NextBitInternal == -1 )
      break;
    v7 = 16 * NextBitInternal;
    if ( v3 >= 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 152) + 4564LL) >> 8)
         + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 5032LL)
         + *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4560LL) )
      {
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, v2);
        return 0LL;
      }
      v7 = 16 * NextBitInternal;
    }
    RtlpSparseBitmapCtxUpdateBitRanges(a1 + 248, v7 >> 4, v5, v6, v9, 0);
    v10[2] = v7;
    ++v3;
    ST_STORE<SM_TRAITS>::StDmPageRemove((struct NP_CONTEXT::NP_CTX *)a1, (__int64)v10);
  }
  return 0LL;
}
