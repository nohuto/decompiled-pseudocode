/*
 * XREFs of MiAppendSubsectionChain @ 0x1400FAF08
 * Callers:
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 * Callees:
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiInsertSubsectionNode @ 0x1400FB238 (MiInsertSubsectionNode.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  bool v7; // bp
  __int64 v8; // rsi
  volatile LONG *v9; // r12
  KIRQL v10; // al
  __int64 v11; // r9
  KIRQL v12; // r13
  __int64 v13; // rbx
  unsigned int v15; // edi
  __int64 i; // rax
  __int64 inserted; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+60h] [rbp+8h]

  v3 = *a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v19 = *a1;
  v8 = 0LL;
  v9 = (volatile LONG *)(*a1 + 72);
  v10 = ExAcquireSpinLockExclusive(v9);
  v12 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    v15 = 2;
    if ( *((_DWORD *)a1 + 12) )
    {
      if ( (a3 & 2) == 0 )
        goto LABEL_15;
    }
    else
    {
      v7 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) != 0 )
    {
      for ( i = v5; i; i = *(_QWORD *)(i + 16) )
        *(_WORD *)(i + 34) |= 1u;
      goto LABEL_18;
    }
    v15 = 1;
LABEL_15:
    ExReleaseSpinLockExclusive(v9, v10);
    return v15;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 48) )
        *(_DWORD *)(v5 + 48) = -1;
      *(_QWORD *)(v5 + 96) = 0LL;
      inserted = MiInsertUnusedSubsection(v5, 1LL, 1LL, v11);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
    }
    while ( v5 );
    goto LABEL_5;
  }
  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
LABEL_18:
    if ( v7 )
    {
      do
      {
        v18 = MiDecrementSubsectionViewCount(v5, 5);
        v5 = *(_QWORD *)(v5 + 16);
        v8 += v18;
      }
      while ( v5 );
    }
  }
  v3 = v19;
LABEL_5:
  *((_WORD *)a1 + 17) &= 0xFu;
  *((_DWORD *)a1 + 10) = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)a1 + 13) ^= (*((_DWORD *)a1 + 13) ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
  v13 = *(_QWORD *)(a2 + 16);
  a1[2] = v13;
  while ( v13 )
  {
    MiInsertSubsectionNode(v3, v13, 1LL);
    v13 = *(_QWORD *)(v13 + 16);
  }
  ExReleaseSpinLockExclusive(v9, v12);
  if ( v8 )
    MiReturnSubsectionCharges(v8);
  return 0LL;
}
