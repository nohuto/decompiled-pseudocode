/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C828
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14000212C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14021D350 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, unsigned __int8 a3)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v7; // rbx
  ULONG LowPart; // edi
  int v9; // edx
  LARGE_INTEGER v11; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v13; // [rsp+42h] [rbp-1Eh]
  int v14; // [rsp+44h] [rbp-1Ch]
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF

  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *v7 = *v7 & 0xFFFFFFF8 | 5;
    v7[2] ^= (a3 ^ (unsigned __int8)v7[2]) & 7;
    v9 = *(_DWORD *)(a2 + 5856);
    Object = 0;
    v14 = 0;
    v15[1] = v15;
    v15[0] = v15;
    v13 = 6;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (_DWORD)v7, (unsigned int)&Object, (__int64)&v11);
    if ( (LowPart & 0x80000000) == 0 )
    {
      v7 = 0LL;
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v11.LowPart;
      if ( (v11.LowPart & 0x80000000) != 0 )
        return LowPart;
      LowPart = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (ULONG)-1073741670;
  }
  return LowPart;
}
