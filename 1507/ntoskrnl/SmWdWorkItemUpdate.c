/*
 * XREFs of SmWdWorkItemUpdate @ 0x1402589B4
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140140BD0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14013EEA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall SmWdWorkItemUpdate(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v8; // rcx
  __int16 v9; // ax
  volatile signed __int32 *v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 *v16; // r8
  unsigned __int32 v17; // [rsp+20h] [rbp-10h]
  unsigned __int32 v18; // [rsp+20h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+28h]
  unsigned __int32 v20; // [rsp+70h] [rbp+40h]
  signed __int32 v21; // [rsp+70h] [rbp+40h]
  unsigned __int32 v22; // [rsp+70h] [rbp+40h]
  signed __int32 v23; // [rsp+70h] [rbp+40h]

  _m_prefetchw(a3 + 1);
  v20 = *((_DWORD *)a3 + 2);
  do
  {
    v17 = v20;
    v21 = (v20 ^ (((v20 >> 8) - 1) << 8)) & 0xFF00 ^ v20;
    if ( (v21 & 0xFF00) == 0x100 || a4 < 0 )
      v21 |= 0x40000u;
    v20 = _InterlockedCompareExchange((volatile signed __int32 *)a3 + 2, v21, v17);
    v8 = v17;
  }
  while ( v20 != v17 );
  v9 = v20;
  if ( (v20 & 0x40000) == 0 )
  {
    if ( a4 < 0 || (v8 = (unsigned __int16)v20 & 0xFF00, (_DWORD)v8 == 512) )
    {
      v10 = (volatile signed __int32 *)(a1 + 144);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 144));
      }
      else if ( _interlockedbittestandset64(v10, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 144));
      }
      v12 = a1 + 128;
      v13 = (__int64 *)(a1 + 136);
      v14 = *(_QWORD *)(a1 + 136);
      if ( v14 != a1 + 128 )
      {
        do
        {
          v15 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF8uLL;
          if ( (_QWORD *)v15 == a3 )
            break;
          v12 = *(_QWORD *)v12 & 0xFFFFFFFFFFFFFFF8uLL;
        }
        while ( v15 != v14 );
        if ( v12 != v14 )
        {
          *(_QWORD *)v12 = *a3 ^ (*(_DWORD *)a3 ^ *(_DWORD *)v12) & 7;
          if ( (_QWORD *)*v13 == a3 )
            *v13 = v12;
          v16 = (__int64 *)*v13;
          v12 = *v16 & 7;
          *v16 = v12 | (8 * ((unsigned __int64)*v16 >> 3) - 8);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 144), retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      __writecr8(CurrentIrql);
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete((__int64)a3, v12, a2, a4);
      _m_prefetchw(a3 + 1);
      v22 = *((_DWORD *)a3 + 2);
      do
      {
        v18 = v22;
        v23 = (v22 ^ (((v22 >> 8) - 1) << 8)) & 0xFF00 ^ v22;
        if ( (v23 & 0xFF00) == 0x100 || a4 < 0 )
          v23 |= 0x40000u;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)a3 + 2, v23, v18);
        v8 = v18;
      }
      while ( v22 != v18 );
      v9 = v22;
    }
  }
  if ( (v9 & 0xFF00) == 0x100 )
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v8, a2, (__int64)a3, 0LL);
}
