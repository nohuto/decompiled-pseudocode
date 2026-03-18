/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140259768
 * Callers:
 *     ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402599D8 (-SmStoresContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140252B10 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rbx
  int LowPart; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rcx
  unsigned __int64 v10; // rtt
  LARGE_INTEGER v12; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+42h] [rbp-1Eh]
  int v15; // [rsp+44h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF

  v15 = 0;
  v16[1] = v16;
  Object = 0;
  v16[0] = v16;
  v14 = 6;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v7 = *v5;
    v5[2] = -1;
    *v5 = v7 & 0xFFFFFFF8 | 3;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v8, a2, (__int64)v5, (__int64)&Object, &v12);
    if ( LowPart >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v12.LowPart;
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
  {
    v9 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(a2 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v9);
    v10 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v10 - 2, v10) )
      ExfReleaseRundownProtection(v9);
  }
  return (unsigned int)LowPart;
}
