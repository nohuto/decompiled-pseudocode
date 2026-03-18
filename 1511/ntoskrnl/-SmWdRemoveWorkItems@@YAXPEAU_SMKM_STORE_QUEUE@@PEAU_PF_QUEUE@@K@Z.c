/*
 * XREFs of ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140207F04
 * Callers:
 *     SmWdProcessStore @ 0x140209578 (SmWdProcessStore.c)
 *     SmWdWritesApcRoutine @ 0x140209994 (SmWdWritesApcRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall SmWdRemoveWorkItems(KSPIN_LOCK *a1, struct _PF_QUEUE *a2, int a3)
{
  char *v6; // rbx
  char *v7; // rbp
  KIRQL v8; // r10
  char **v9; // r8
  char *v10; // r9
  unsigned __int64 v11; // r11
  char *v12; // rdx

  if ( a3 == 2 )
  {
    v6 = (char *)(a1 + 1);
    v7 = (char *)(a1 + 7);
  }
  else
  {
    v6 = (char *)(a1 + 3);
    v7 = (char *)a1 + 60;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(a1);
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
      *(_QWORD *)v10 = *(_QWORD *)v12 ^ (*(_DWORD *)v10 ^ *(_DWORD *)v12) & 7;
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
  KeReleaseSpinLock(a1, v8);
}
