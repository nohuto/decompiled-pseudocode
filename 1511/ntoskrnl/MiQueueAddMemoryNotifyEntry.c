/*
 * XREFs of MiQueueAddMemoryNotifyEntry @ 0x1401D1F64
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall MiQueueAddMemoryNotifyEntry(__int64 a1, _QWORD *a2, int a3)
{
  volatile LONG *v3; // rbp
  KIRQL v7; // r8
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rax

  v3 = (volatile LONG *)(a1 + 224);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  if ( a3 == 1 )
  {
    v8 = *(_QWORD **)(a1 + 4928);
    *a2 = a1 + 4920;
    a2[1] = v8;
    if ( *v8 != a1 + 4920 )
      __fastfail(3u);
    *v8 = a2;
    *(_QWORD *)(a1 + 4928) = a2;
  }
  else
  {
    v9 = *a2;
    v10 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
  }
  ExReleaseSpinLockExclusive(v3, v7);
}
