/*
 * XREFs of MiPopulateWorkingSetFreeList @ 0x14007BDD0
 * Callers:
 *     MiInitializeWorkingSetList @ 0x14046CCB8 (MiInitializeWorkingSetList.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPopulateWorkingSetFreeList(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR *SharedWorkingSetList; // rdi
  __int64 v7; // rcx
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  ULONG_PTR *v10; // r8
  ULONG_PTR v11; // r9
  _QWORD *v12; // rdx

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  SharedVm = MiGetSharedVm(v7);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( *SharedWorkingSetList = 0xFFFFFFFFFLL; a3 >= a2; --a3 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v10 = &BugCheckParameter2;
    else
      v10 = (ULONG_PTR *)(*(_QWORD *)(a1 + 16) + 416LL);
    v11 = *v10;
    if ( *v10 != 0xFFFFFFFFFLL )
    {
      if ( v11 < v10[1] || v11 > v10[3] )
        KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v10, v11, v10[3]);
      v12 = (_QWORD *)(v10[10] + v11 * *((unsigned int *)v10 + 8));
      *v12 ^= (*(_DWORD *)v12 ^ (2 * (_DWORD)a3)) & 0xFFFFFFE;
    }
    *(_QWORD *)(a3 * *((unsigned int *)v10 + 8) + v10[10]) = (v11 << 28) | 0xFFFFFFE;
    *v10 = a3;
  }
  return MiUnlockWorkingSetExclusive(a1, v9);
}
