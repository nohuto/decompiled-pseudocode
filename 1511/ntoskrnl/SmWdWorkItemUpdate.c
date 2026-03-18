/*
 * XREFs of SmWdWorkItemUpdate @ 0x1402097D8
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402048A0 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 */

void __fastcall SmWdWorkItemUpdate(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  __int64 v8; // rcx
  __int16 v9; // ax
  KIRQL v10; // al
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int32 v16; // [rsp+20h] [rbp-10h]
  unsigned __int32 v17; // [rsp+20h] [rbp-10h]
  unsigned __int32 v18; // [rsp+70h] [rbp+40h]
  signed __int32 v19; // [rsp+70h] [rbp+40h]
  unsigned __int32 v20; // [rsp+70h] [rbp+40h]
  signed __int32 v21; // [rsp+70h] [rbp+40h]

  _m_prefetchw(a3 + 1);
  v18 = *((_DWORD *)a3 + 2);
  do
  {
    v16 = v18;
    v19 = (v18 ^ (((v18 >> 8) - 1) << 8)) & 0xFF00 ^ v18;
    if ( (v19 & 0xFF00) == 0x100 || a4 < 0 )
      v19 |= 0x40000u;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)a3 + 2, v19, v16);
    v8 = v16;
  }
  while ( v18 != v16 );
  v9 = v18;
  if ( (v18 & 0x40000) == 0 )
  {
    if ( a4 < 0 || (v8 = (unsigned __int16)v18 & 0xFF00, (_DWORD)v8 == 512) )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(a1 + 18);
      v11 = a1 + 16;
      v12 = a1 + 17;
      v13 = (_QWORD *)a1[17];
      if ( v13 != a1 + 16 )
      {
        do
        {
          v14 = *v11 & 0xFFFFFFFFFFFFFFF8uLL;
          if ( (_QWORD *)v14 == a3 )
            break;
          v11 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF8uLL);
        }
        while ( (_QWORD *)v14 != v13 );
        if ( v11 != v13 )
        {
          *v11 = *a3 ^ (*(_DWORD *)v11 ^ *(_DWORD *)a3) & 7;
          if ( (_QWORD *)*v12 == a3 )
            *v12 = v11;
          *(_QWORD *)*v12 = *(_QWORD *)*v12 & 7LL | (8LL * (*(_QWORD *)*v12 >> 3) - 8);
        }
      }
      KeReleaseSpinLock(a1 + 18, v10);
      SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete((__int64)a3, v15, a2, a4);
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
    }
  }
  if ( (v9 & 0xFF00) == 0x100 )
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v8, a2, (__int64)a3, 0LL);
}
