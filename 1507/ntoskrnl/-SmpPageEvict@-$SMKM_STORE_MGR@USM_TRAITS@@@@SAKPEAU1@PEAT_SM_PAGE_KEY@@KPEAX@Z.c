/*
 * XREFs of ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x14013CC18
 * Callers:
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14013C228 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14013F004 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140251D6C (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 */

__int64 SMKM_STORE_MGR<SM_TRAITS>::SmpPageEvict(__int64 a1, unsigned int *a2, unsigned int a3, ...)
{
  unsigned int *v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rsi
  int v7; // r14d
  __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r13d
  _QWORD *v12; // rbx
  unsigned int *v13; // rax
  unsigned int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  unsigned __int64 v16; // rtt
  struct _EX_RUNDOWN_REF *v18; // rdx
  unsigned __int64 v19; // rtt
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v20 = a3;
  v4 = 0LL;
  v5 = SMKM_STORE_MGR<SM_TRAITS>::SmFeEvictInitiate(a1, a2, (int)&v20, (int)va);
  v6 = v5;
  if ( v5 != 32 )
  {
    v7 = dword_140352CB0 & 1;
    v8 = SmGlobals[22 * (v5 & 0x1F)];
    v9 = (_QWORD *)SmFpAllocate(&unk_140352B30, 0LL, 0LL);
    v11 = v20;
    v12 = v9;
    if ( v9 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      *v9 = 0LL;
      v13 = (unsigned int *)SmFpAllocate(&unk_140352B30, 1LL, v9);
      v4 = v13;
      if ( v13 )
      {
        memset(v13, 0, 0x28uLL);
        v14 = *v4 & 0xFFFFFFF9;
        v4[3] = v11;
        *v4 = v14 | 1;
        v4[2] = *a2;
        if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v12, SmGlobals, (unsigned int)v6, v4, v7) >= 0 )
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
      v18 = (struct _EX_RUNDOWN_REF *)((char *)&unk_140350548 + 176 * (*(_DWORD *)(v8 + 4480) & 0x1F));
      _m_prefetchw(v18);
      v19 = v18->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v18, v19 - 2, v19) )
        ExfReleaseRundownProtection(v18);
    }
    v15 = (struct _EX_RUNDOWN_REF *)&SmGlobals[v6];
    _m_prefetchw(&v15[731]);
    v16 = v15[731].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&v15[731], v16 - 2, v16) )
      ExfReleaseRundownProtection(v15 + 731);
    if ( v4 )
      SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(SmGlobals, v4, v12);
    if ( v12 )
      SmFpFree(&unk_140352B30, 0LL, v12, v12);
  }
  return (unsigned int)v21;
}
