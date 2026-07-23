/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140121744
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x1400C5260 (KeQueryPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // rbp
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  KIRQL v7; // r14
  __int64 *v8; // r9
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // edi
  unsigned __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 i; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 5880);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 5880));
  v6 = (unsigned __int64 *)(a1 + 5920);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 5928);
  if ( v8 == (__int64 *)(a1 + 5920) )
  {
    v9 = (unsigned __int64 *)(a1 + 5888);
    v10 = *(__int64 **)(a1 + 5896);
    if ( v10 == (__int64 *)(a1 + 5888) )
    {
      if ( !*(_DWORD *)(a1 + 5944) )
      {
        v11 = *(unsigned __int8 *)(a1 + 5862);
        v12 = (_DWORD)v11 == 4
            ? *(_DWORD *)(a1 + 6568)
            : `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v11];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6040)) > v12 )
        {
          v19 = *(unsigned __int8 *)(a1 + 5862);
          if ( (_DWORD)v19 == 4 )
            v20 = *(_DWORD *)(a1 + 6568);
          else
            v20 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v19];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6040), v20);
        }
      }
      v13 = (unsigned __int64 *)(a1 + 5904);
      v14 = *(__int64 **)(a1 + 5912);
      if ( v14 == (__int64 *)(a1 + 5904) )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v13;
        *v13 = *(_QWORD *)*v13 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v15 == v14 )
        {
          *v13 = 0LL;
          *(_QWORD *)(a1 + 5912) = a1 + 5904;
        }
        else
        {
          *v14 = *v14 & 7 | (8 * ((unsigned __int64)*v14 >> 3) - 8);
        }
        if ( (*(_DWORD *)(a1 + 5940))-- == 1 && (*(_BYTE *)v15 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 5862) )
          {
            v18 = *(struct _KTHREAD **)(a1 + 6040);
            if ( KeQueryPriorityThread(v18) > 4 )
              KeSetActualBasePriorityThread((__int64)v18, 4u);
          }
        }
      }
    }
    else
    {
      v15 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 5896) = a1 + 5888;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
      }
      --*(_DWORD *)(a1 + 5936);
    }
  }
  else
  {
    v15 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 5928) = a1 + 5920;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * ((unsigned __int64)*v8 >> 3) - 8);
    }
    --*(_DWORD *)(a1 + 5940);
    *a2 = 1;
  }
  if ( !v15 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 5960) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 5952) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v15 & 7) == 2 && *(_BYTE *)(a1 + 5860) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v15 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v22 = *(_QWORD *)(i + 8);
    v23 = *(_QWORD *)(a1 + 5960);
    if ( v23 > v22 )
    {
      *(_QWORD *)(a1 + 5960) = v23 - v22;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
LABEL_13:
  KeReleaseSpinLock(v2, v7);
  return v15;
}
