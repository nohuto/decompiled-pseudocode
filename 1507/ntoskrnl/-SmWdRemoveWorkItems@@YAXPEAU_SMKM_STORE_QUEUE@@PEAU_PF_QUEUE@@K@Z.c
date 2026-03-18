/*
 * XREFs of ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140257160
 * Callers:
 *     SmWdProcessStore @ 0x1402586CC (SmWdProcessStore.c)
 *     SmWdWritesApcRoutine @ 0x140258BC0 (SmWdWritesApcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall SmWdRemoveWorkItems(struct _SMKM_STORE_QUEUE *a1, struct _PF_QUEUE *a2, int a3)
{
  char *v6; // rdi
  char *v7; // rbp
  unsigned __int8 CurrentIrql; // r14
  char **v9; // r8
  char *v10; // r9
  unsigned __int64 v11; // r10
  char *v12; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 == 2 )
  {
    v6 = (char *)a1 + 8;
    v7 = (char *)a1 + 56;
  }
  else
  {
    v6 = (char *)a1 + 24;
    v7 = (char *)a1 + 60;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)a1);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a1);
  }
  v9 = (char **)(v6 + 8);
  while ( 1 )
  {
    v10 = v6;
    if ( v6 == *v9 )
      break;
    v6 = (char *)(*(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      break;
    v11 = (unsigned __int64)v6;
    if ( (*(_DWORD *)v6 & 7) == a3 )
    {
      v12 = (char *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)v10 = *(_QWORD *)v12 ^ (*(_DWORD *)v12 ^ (unsigned int)*(_QWORD *)v10) & 7;
      if ( *v9 == v12 )
        *v9 = v10;
      v6 = v10;
      *(_QWORD *)*v9 = *(_QWORD *)*v9 & 7LL | (8LL * (*(_QWORD *)*v9 >> 3) - 8);
      --*(_DWORD *)v7;
      *(_QWORD *)v11 = *(_DWORD *)v11 & 7 | ((**((_QWORD **)a2 + 1) & 0xFFFFFFFFFFFFFFF8uLL) + 8);
      **((_QWORD **)a2 + 1) = v11 | **((_DWORD **)a2 + 1) & 7;
      *((_QWORD *)a2 + 1) = v11;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)a1, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  __writecr8(CurrentIrql);
}
