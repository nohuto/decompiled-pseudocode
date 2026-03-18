/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14020A300
 * Callers:
 *     ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020A534 (-SmStoresContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402038C8 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  int LowPart; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+42h] [rbp-1Eh]
  int v13; // [rsp+44h] [rbp-1Ch]
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0;
  v14[1] = v14;
  Object = 0;
  v14[0] = v14;
  v12 = 6;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v7 = *v5;
    v5[2] = -1;
    *v5 = v7 & 0xFFFFFFF8 | 3;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v8, a2, (__int64)v5, (__int64)&Object, &v10);
    if ( LowPart >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v10.LowPart;
      a2 = 0LL;
      v5 = 0LL;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  else
  {
    LowPart = -1073741670;
  }
  if ( a2 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(a2 + 4480) & 0x1F) + a1 + 8));
  return (unsigned int)LowPart;
}
