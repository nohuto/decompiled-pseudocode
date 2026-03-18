/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x14011283C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
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
  __int64 v13; // r8
  unsigned __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rdi
  struct _KTHREAD *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 i; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 4504);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4504));
  v6 = (unsigned __int64 *)(a1 + 4544);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 4552);
  if ( v8 == (__int64 *)(a1 + 4544) )
  {
    v9 = (unsigned __int64 *)(a1 + 4512);
    v10 = *(__int64 **)(a1 + 4520);
    if ( v10 == (__int64 *)(a1 + 4512) )
    {
      if ( !*(_DWORD *)(a1 + 4568) )
      {
        v11 = *(unsigned __int8 *)(a1 + 4486);
        v12 = (_DWORD)v11 == 4
            ? *(_DWORD *)(a1 + 5168)
            : `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v11];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 4664)) > v12 )
        {
          v21 = *(unsigned __int8 *)(a1 + 4486);
          if ( (_DWORD)v21 == 4 )
            v22 = *(unsigned int *)(a1 + 5168);
          else
            v22 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v21];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 4664), v22, v13);
        }
      }
      v14 = (unsigned __int64 *)(a1 + 4528);
      v15 = *(__int64 **)(a1 + 4536);
      if ( v15 == (__int64 *)(a1 + 4528) )
      {
        v16 = 0LL;
      }
      else
      {
        v16 = (__int64 *)*v14;
        *v14 = *(_QWORD *)*v14 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v16 == v15 )
        {
          *v14 = 0LL;
          *(_QWORD *)(a1 + 4536) = a1 + 4528;
        }
        else
        {
          *v15 = *v15 & 7 | (8 * ((unsigned __int64)*v15 >> 3) - 8);
        }
        if ( (*(_DWORD *)(a1 + 4564))-- == 1 && (*(_BYTE *)v16 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 4486) )
          {
            v19 = *(struct _KTHREAD **)(a1 + 4664);
            if ( KeQueryPriorityThread(v19) > 4 )
              KeSetActualBasePriorityThread((__int64)v19, 4LL, v20);
          }
        }
      }
    }
    else
    {
      v16 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v16 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 4520) = a1 + 4512;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * ((unsigned __int64)*v10 >> 3) - 8);
      }
      --*(_DWORD *)(a1 + 4560);
    }
  }
  else
  {
    v16 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v16 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 4552) = a1 + 4544;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * ((unsigned __int64)*v8 >> 3) - 8);
    }
    --*(_DWORD *)(a1 + 4564);
    *a2 = 1;
  }
  if ( !v16 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 4584) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 4576) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v16 & 7) == 2 && *(_BYTE *)(a1 + 4484) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2448) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v16 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v24 = *(_QWORD *)(i + 8);
    v25 = *(_QWORD *)(a1 + 4584);
    if ( v25 > v24 )
    {
      *(_QWORD *)(a1 + 4584) = v25 - v24;
      goto LABEL_13;
    }
    goto LABEL_20;
  }
LABEL_13:
  KeReleaseSpinLock(v2, v7);
  return v16;
}
