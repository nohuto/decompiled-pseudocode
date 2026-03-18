/*
 * XREFs of RtlpSparseBitmapCtxUpdateBitRanges @ 0x140223C28
 * Callers:
 *     ?StDmLazyRemoveKeysWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x140205AF0 (-StDmLazyRemoveKeysWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRemoveStateUpdate@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@K@Z @ 0x140205C60 (-StDmLazyRemoveStateUpdate@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAT_SM_PAGE_KEY@@K@Z.c)
 * Callees:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x140223B50 (RtlpSparseBitmapCtxPrepareRanges.c)
 *     RtlpSparseBitmapCtxUnlockShared @ 0x140223C08 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140223D08 (RtlpSparseBitmapCtxUpdateBits.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUpdateBitRanges(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v8; // rbp
  int v9; // edi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = a4;
  v8 = a2 / *(unsigned int *)(a1 + 56);
  v9 = RtlpSparseBitmapCtxPrepareRanges(
         a1,
         &v18,
         v8,
         (*(unsigned int *)(a1 + 56) + a2) / *(unsigned int *)(a1 + 56),
         v17,
         a6 != 0);
  if ( v9 >= 0 )
  {
    v10 = a2;
    v11 = 1LL;
    v12 = v10 % *(unsigned int *)(a1 + 56);
    do
    {
      v13 = *(_QWORD *)(a1 + 8);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 56) - v12);
      if ( v11 < v14 )
        LODWORD(v14) = v11;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 8LL * (unsigned int)v8);
        if ( v15 )
          RtlpSparseBitmapCtxUpdateBits(a1, v15, (unsigned int)v12, (unsigned int)v14);
      }
      LODWORD(v12) = 0;
      LODWORD(v8) = v8 + 1;
      v11 -= (unsigned int)v14;
    }
    while ( v11 );
    v9 = 0;
  }
  RtlpSparseBitmapCtxUnlockShared(a1, (volatile LONG *)a1, v18);
  return (unsigned int)v9;
}
