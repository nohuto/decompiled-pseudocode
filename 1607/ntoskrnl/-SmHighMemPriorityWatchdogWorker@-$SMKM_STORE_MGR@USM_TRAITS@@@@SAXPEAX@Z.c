/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174
 * Callers:
 *     <none>
 * Callees:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStGetDataInUseKb@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z @ 0x1400033B4 (-SmStGetDataInUseKb@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@@Z.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // rdi
  _DWORD *PoolWithTag; // r14
  unsigned int i; // esi
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  _DWORD *v9; // r12
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax
  _DWORD *v12; // rsi
  __int64 v13; // r13
  _DWORD *v14; // rsi
  __int64 v15; // r12
  unsigned int v16; // r15d
  unsigned __int64 DataInUseKb; // rcx
  __int64 v19; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = a1 - 1632;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x77486D73u);
  if ( !PoolWithTag )
  {
LABEL_11:
    if ( (_DWORD)v3 )
    {
      v12 = PoolWithTag;
      do
      {
        SmKmStoreDereference(v2, *v12++);
        --v3;
      }
      while ( v3 );
    }
    goto LABEL_14;
  }
  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(v2, i);
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 5863) )
      {
        PoolWithTag[v3] = i;
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        SmKmStoreDereference(v2, i);
      }
    }
  }
  if ( (_DWORD)v3 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v3;
    v9 = PoolWithTag;
    do
    {
      v10 = (_QWORD *)SmKmStoreRefFromStoreIndex(v2, *v9++ & 0x3FF);
      v7 += (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(*v10);
      --v8;
    }
    while ( v8 );
    v11 = 4LL * (MEMORY[0xFFFFF780000002E8] / 0x14u);
    if ( v11 >= 0x7D000 )
      v11 = 512000LL;
    if ( v7 >= v11 )
    {
      v13 = 0LL;
      v14 = PoolWithTag;
      v15 = (unsigned int)v3;
      v16 = 0;
      do
      {
        v19 = *(_QWORD *)SmKmStoreRefFromStoreIndex(v2, *v14 & 0x3FF);
        DataInUseKb = (unsigned int)SMKM_STORE<SM_TRAITS>::SmStGetDataInUseKb(v19);
        if ( v16 <= DataInUseKb )
        {
          v13 = v19;
          v16 = DataInUseKb;
        }
        ++v14;
        --v15;
      }
      while ( v15 );
      v1 = a1;
      SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v13, 0);
    }
    goto LABEL_11;
  }
LABEL_14:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  _InterlockedExchange64((volatile __int64 *)(v1 + 24), 0LL);
}
