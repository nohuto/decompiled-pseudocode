/*
 * XREFs of SmWdDPC @ 0x14020932C
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     StEtaIoTimeout @ 0x140207B74 (StEtaIoTimeout.c)
 *     SmWdProcessStore @ 0x140209578 (SmWdProcessStore.c)
 */

void __fastcall SmWdDPC(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD *v5; // r8
  unsigned __int64 v6; // r10
  signed __int32 v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // ebx
  _QWORD *v17; // rdi
  _QWORD *v18; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v19; // [rsp+28h] [rbp-30h]
  signed __int32 v20; // [rsp+60h] [rbp+8h]
  unsigned __int32 v21; // [rsp+68h] [rbp+10h]

  v19 = (unsigned __int64 *)&v18;
  v18 = 0LL;
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 80));
  v4 = a1 + 64;
  while ( 1 )
  {
    v5 = (_QWORD *)v4;
    if ( v4 == *(_QWORD *)(a1 + 72) )
      break;
    v4 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v4 )
      break;
    v6 = v4;
    if ( (*(_BYTE *)(v4 + 10) & 1) != 0 )
    {
      _m_prefetchw((const void *)(v4 + 8));
      v7 = *(_DWORD *)(v4 + 8);
      if ( (v7 & 0x60000) == 0 )
      {
        do
        {
          v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v7 | 0x40000, v7);
          v8 = v7 == v9;
          v7 = v9;
        }
        while ( !v8 && (v9 & 0x60000) == 0 );
      }
      if ( (v7 & 0x40000) == 0 && (v7 & 0x20000) == 0 )
      {
        v10 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFF8uLL);
        *v5 = *v10 ^ (*(_DWORD *)v10 ^ (unsigned int)*v5) & 7;
        if ( *(_QWORD **)(a1 + 72) == v10 )
          *(_QWORD *)(a1 + 72) = v5;
        **(_QWORD **)(a1 + 72) = **(_QWORD **)(a1 + 72) & 7LL | (8LL * (**(_QWORD **)(a1 + 72) >> 3) - 8);
        v4 = (unsigned __int64)v5;
        *(_QWORD *)v6 = *(_DWORD *)v6 & 7 | ((*v19 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
        *v19 = v6 | *(_DWORD *)v19 & 7;
        v19 = (unsigned __int64 *)v6;
      }
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 8), 0x10000u);
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  while ( 1 )
  {
    v11 = (__int64)v19;
    if ( v19 == (unsigned __int64 *)&v18 )
      break;
    v12 = (__int64)v18;
    v18 = (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64 *)v12 == v19 )
    {
      v18 = 0LL;
      v19 = (unsigned __int64 *)&v18;
    }
    else
    {
      *v19 = *v19 & 7 | (8 * (*v19 >> 3) - 8);
    }
    v13 = a2[22 * ((*(_DWORD *)(v12 + 8) >> 19) & 0x1F)];
    SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(v12, v11, v13, -1073741643);
    StEtaIoTimeout(*(_QWORD *)(v13 + 2448), v14, v15, 0x989680uLL);
    _m_prefetchw((const void *)(v12 + 8));
    v20 = *(_DWORD *)(v12 + 8);
    do
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(v12 + 8),
              v20 & 0xFFFF00FF | (((unsigned __int8)(BYTE1(v20) - 1) | 0x400) << 8),
              v20);
    }
    while ( v20 != v21 );
    if ( (v20 & 0xFF00) == 0x100 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v21, v13, v12, 0LL);
  }
  v16 = 0;
  v17 = a2;
  do
  {
    if ( *v17 )
      SmWdProcessStore(&a2[22 * v16]);
    ++v16;
    v17 += 22;
  }
  while ( v16 < 0x20 );
}
