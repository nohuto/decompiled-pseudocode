/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14010FF18
 * Callers:
 *     MiStoreEvictPageFile @ 0x1400ECEEC (MiStoreEvictPageFile.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14010D488 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140110060 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140202B90 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, unsigned int a3, ...)
{
  unsigned int *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r13d
  __int64 *v12; // rbx
  unsigned int *v13; // rax
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v17 = va_arg(va1, _QWORD);
  v16 = a3;
  v4 = 0LL;
  v5 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, &v16, (__int64 *)va);
  v6 = v5;
  if ( v5 != 32 )
  {
    v7 = dword_140304F40 & 1;
    v8 = *((_QWORD *)&SmGlobals + 22 * (v5 & 0x1F));
    v9 = (__int64 *)SmFpAllocate(&dword_140304DB0, 0, 0LL, 0LL, v7);
    v11 = v16;
    v12 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      *v9 = 0LL;
      v13 = (unsigned int *)SmFpAllocate(&dword_140304DB0, 1, (__int64)v9, 0LL, v7);
      v4 = v13;
      if ( v13 )
      {
        memset(v13, 0, 0x28uLL);
        v14 = *v4 & 0xFFFFFFF9;
        v4[3] = v11;
        *v4 = v14 | 1;
        v4[2] = *a2;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v12, (__int64)&SmGlobals, v6, (unsigned __int64)v4) >= 0 )
        {
          v8 = 0LL;
          v4 = 0LL;
          v12 = 0LL;
        }
      }
    }
    if ( v8 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmFeSetEvictFailed(v10, a2, v11, (unsigned int)v6);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_1403027C8 + 22 * (*(_DWORD *)(v8 + 4480) & 0x1F));
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&SmGlobals + v6 + 731);
    if ( v4 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource((__int64)&SmGlobals, v4, (__int64)v12);
    if ( v12 )
      SmFpFree((__int64)&dword_140304DB0, 0, (__int64)v12, (struct _MDL *)v12);
  }
  return (unsigned int)v17;
}
