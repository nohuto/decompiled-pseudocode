/*
 * XREFs of MiPopulateWorkingSetFreeList @ 0x14009B2F0
 * Callers:
 *     MiInitializeWorkingSetList @ 0x1404631F0 (MiInitializeWorkingSetList.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPopulateWorkingSetFreeList(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR v6; // r8
  KIRQL v7; // r10
  ULONG_PTR v8; // r9
  _QWORD *v9; // rdx

  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1);
  for ( **(_QWORD **)(a1 + 184) = 0xFFFFFFFFFLL; a3 >= a2; --a3 )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v8 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 != 0xFFFFFFFFFLL )
    {
      if ( v8 < *(_QWORD *)(v6 + 8) || v8 > *(_QWORD *)(v6 + 32) )
        KeBugCheckEx(0x1Au, 0x5004uLL, v6, v8, *(_QWORD *)(v6 + 32));
      v9 = (_QWORD *)(*(_QWORD *)(v6 + 496) + v8 * *(unsigned int *)(v6 + 64));
      *v9 ^= (*(_DWORD *)v9 ^ (2 * (_DWORD)a3)) & 0xFFFFFFE;
    }
    *(_QWORD *)(a3 * *(unsigned int *)(v6 + 64) + *(_QWORD *)(v6 + 496)) = (v8 << 28) | 0xFFFFFFE;
    *(_QWORD *)v6 = a3;
  }
  return MiUnlockWorkingSetExclusive(a1, v7, v6);
}
