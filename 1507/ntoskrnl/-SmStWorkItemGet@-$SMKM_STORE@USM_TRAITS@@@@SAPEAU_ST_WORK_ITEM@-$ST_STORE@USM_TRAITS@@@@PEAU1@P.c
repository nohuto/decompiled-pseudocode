/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401458E0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  volatile signed __int32 *v2; // rsi
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 *v6; // rcx
  __int64 *v7; // rdx
  unsigned __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rax
  KPRIORITY v11; // edi
  unsigned __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 *v14; // rdi
  struct _KTHREAD *v17; // rbp
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 i; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v2 = (volatile signed __int32 *)(a1 + 4504);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 4504);
  }
  else if ( _interlockedbittestandset64(v2, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 4504));
  }
  v6 = (unsigned __int64 *)(a1 + 4544);
  v7 = *(__int64 **)(a1 + 4552);
  if ( v7 == (__int64 *)(a1 + 4544) )
  {
    v8 = (unsigned __int64 *)(a1 + 4512);
    v9 = *(__int64 **)(a1 + 4520);
    if ( v9 == (__int64 *)(a1 + 4512) )
    {
      if ( !*(_DWORD *)(a1 + 4568) )
      {
        v10 = *(unsigned __int8 *)(a1 + 4486);
        v11 = (_DWORD)v10 == 4
            ? *(_DWORD *)(a1 + 5160)
            : `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v10];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 4664)) > v11 )
        {
          v18 = *(unsigned __int8 *)(a1 + 4486);
          if ( (_DWORD)v18 == 4 )
            v19 = *(_DWORD *)(a1 + 5160);
          else
            v19 = `SMKM_STORE<SM_TRAITS>::SmStGetDesiredStoreWorkerPriority'::`2'::PriorityByMemoryCondition[v18];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 4664), v19);
        }
      }
      v12 = (unsigned __int64 *)(a1 + 4528);
      v13 = *(__int64 **)(a1 + 4536);
      if ( v13 == (__int64 *)(a1 + 4528) )
      {
        v14 = 0LL;
      }
      else
      {
        v14 = (__int64 *)*v12;
        *v12 = *(_QWORD *)*v12 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v14 == v13 )
        {
          *v12 = 0LL;
          *(_QWORD *)(a1 + 4536) = a1 + 4528;
        }
        else
        {
          *v13 = *v13 & 7 | (8 * ((unsigned __int64)*v13 >> 3) - 8);
        }
        if ( (*(_DWORD *)(a1 + 4564))-- == 1 && (*(_BYTE *)v14 & 7) == 6 )
        {
          v17 = *(struct _KTHREAD **)(a1 + 4664);
          if ( KeQueryPriorityThread(v17) > 4 )
            KeSetActualBasePriorityThread((__int64)v17, 4u);
        }
      }
    }
    else
    {
      v14 = (__int64 *)*v8;
      *v8 = *(_QWORD *)*v8 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v14 == v9 )
      {
        *v8 = 0LL;
        *(_QWORD *)(a1 + 4520) = a1 + 4512;
      }
      else
      {
        *v9 = *v9 & 7 | (8 * ((unsigned __int64)*v9 >> 3) - 8);
      }
      --*(_DWORD *)(a1 + 4560);
    }
  }
  else
  {
    v14 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v14 == v7 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 4552) = a1 + 4544;
    }
    else
    {
      *v7 = *v7 & 7 | (8 * ((unsigned __int64)*v7 >> 3) - 8);
    }
    --*(_DWORD *)(a1 + 4564);
    *a2 = 1;
  }
  if ( !v14 )
    goto LABEL_24;
  *(_QWORD *)(a1 + 4576) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v14 & 7) != 2 || !*(_BYTE *)(a1 + 4484) )
    goto LABEL_16;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2448) + 16LL);
        *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v14 + 2) << 12;
        i += 32LL )
  {
    ;
  }
  v21 = *(_QWORD *)(i + 8);
  v22 = *(_QWORD *)(a1 + 4584);
  if ( v22 > v21 )
    *(_QWORD *)(a1 + 4584) = v22 - v21;
  else
LABEL_24:
    *(_QWORD *)(a1 + 4584) = 0LL;
LABEL_16:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v2, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
  __writecr8(CurrentIrql);
  return v14;
}
