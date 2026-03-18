/*
 * XREFs of SmWdDPC @ 0x140258450
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     StEtaIoTimeout @ 0x140256DD0 (StEtaIoTimeout.c)
 *     SmWdProcessStore @ 0x1402586CC (SmWdProcessStore.c)
 */

void __fastcall SmWdDPC(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int64 v5; // rdx
  _QWORD *v6; // r9
  unsigned __int64 v7; // r10
  signed __int32 v8; // ecx
  bool v9; // zf
  signed __int32 v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebx
  _QWORD *v18; // rdi
  _QWORD *v19; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 *v20; // [rsp+28h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  signed __int32 v22; // [rsp+60h] [rbp+20h]
  unsigned __int32 v23; // [rsp+68h] [rbp+28h]

  v3 = (volatile signed __int32 *)(a1 + 80);
  v20 = (unsigned __int64 *)&v19;
  v19 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  v5 = a1 + 64;
  while ( 1 )
  {
    v6 = (_QWORD *)v5;
    if ( v5 == *(_QWORD *)(a1 + 72) )
      break;
    v5 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v5 )
      break;
    v7 = v5;
    if ( (*(_BYTE *)(v5 + 10) & 1) != 0 )
    {
      _m_prefetchw((const void *)(v5 + 8));
      v8 = *(_DWORD *)(v5 + 8);
      if ( (v8 & 0x60000) == 0 )
      {
        do
        {
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v8 | 0x40000, v8);
          v9 = v8 == v10;
          v8 = v10;
        }
        while ( !v9 && (v10 & 0x60000) == 0 );
      }
      if ( (v8 & 0x40000) == 0 && (v8 & 0x20000) == 0 )
      {
        v11 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFF8uLL);
        *v6 = *v11 ^ (*(_DWORD *)v11 ^ (unsigned int)*v6) & 7;
        if ( *(_QWORD **)(a1 + 72) == v11 )
          *(_QWORD *)(a1 + 72) = v6;
        **(_QWORD **)(a1 + 72) = **(_QWORD **)(a1 + 72) & 7LL | (8LL * (**(_QWORD **)(a1 + 72) >> 3) - 8);
        v5 = (unsigned __int64)v6;
        *(_QWORD *)v7 = *(_DWORD *)v7 & 7 | ((*v20 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
        *v20 = v7 | *(_DWORD *)v20 & 7;
        v20 = (unsigned __int64 *)v7;
      }
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(v5 + 8), 0x10000u);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  while ( 1 )
  {
    v12 = (__int64)v20;
    if ( v20 == (unsigned __int64 *)&v19 )
      break;
    v13 = (__int64)v19;
    v19 = (_QWORD *)(*v19 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64 *)v13 == v20 )
    {
      v19 = 0LL;
      v20 = (unsigned __int64 *)&v19;
    }
    else
    {
      *v20 = *v20 & 7 | (8 * (*v20 >> 3) - 8);
    }
    v14 = a2[22 * ((*(_DWORD *)(v13 + 8) >> 19) & 0x1F)];
    SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete(v13, v12, v14, -1073741643);
    StEtaIoTimeout(*(_QWORD *)(v14 + 2448), v15, v16, 0x989680uLL);
    _m_prefetchw((const void *)(v13 + 8));
    v22 = *(_DWORD *)(v13 + 8);
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange(
              (volatile signed __int32 *)(v13 + 8),
              v22 & 0xFFFF00FF | (((unsigned __int8)(BYTE1(v22) - 1) | 0x400) << 8),
              v22);
    }
    while ( v22 != v23 );
    if ( (v22 & 0xFF00) == 0x100 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v23, v14, v13, 0LL);
  }
  v17 = 0;
  v18 = a2;
  do
  {
    if ( *v18 )
      SmWdProcessStore(&a2[22 * v17]);
    ++v17;
    v18 += 22;
  }
  while ( v17 < 0x20 );
}
