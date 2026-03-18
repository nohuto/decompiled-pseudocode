/*
 * XREFs of MiAppendSubsectionChain @ 0x14000A4A4
 * Callers:
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiInsertSubsectionNode @ 0x14000C820 (MiInsertSubsectionNode.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A8DA0 (MiDecrementSubsectionViewCount.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiAppendSubsectionChain(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  bool v7; // bp
  __int64 v8; // rsi
  volatile LONG *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // r13
  unsigned int v12; // edi
  __int64 i; // rax
  __int64 inserted; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // [rsp+60h] [rbp+8h]

  v3 = *a1;
  v5 = *(_QWORD *)(a2 + 16);
  v7 = 0;
  v18 = *a1;
  v8 = 0LL;
  v9 = (volatile LONG *)(*a1 + 72);
  v10 = ExAcquireSpinLockExclusive(v9);
  v11 = v10;
  if ( *(_QWORD *)(v3 + 48) )
  {
    if ( *((_DWORD *)a1 + 12) )
    {
      v12 = 2;
      if ( (a3 & 2) == 0 )
        goto LABEL_8;
    }
    else
    {
      v7 = (a3 & 2) != 0;
    }
    if ( (a3 & 1) == 0 )
    {
      v12 = 1;
LABEL_8:
      ExReleaseSpinLockExclusive(v9, v10);
      return v12;
    }
    for ( i = v5; i; i = *(_QWORD *)(i + 16) )
      *(_WORD *)(i + 34) |= 1u;
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v5 + 8) )
  {
    do
    {
      if ( *(_DWORD *)(v5 + 48) )
        *(_DWORD *)(v5 + 48) = -1;
      *(_WORD *)(v5 + 34) &= ~1u;
      inserted = MiInsertUnusedSubsection(v5, 1LL);
      v5 = *(_QWORD *)(v5 + 16);
      v8 += inserted;
    }
    while ( v5 );
    goto LABEL_22;
  }
  if ( (a3 & 2) != 0 )
  {
    v7 = 1;
LABEL_19:
    if ( v7 )
    {
      do
      {
        v16 = MiDecrementSubsectionViewCount(v5, 5LL);
        v5 = *(_QWORD *)(v5 + 16);
        v8 += v16;
      }
      while ( v5 );
    }
  }
  v3 = v18;
LABEL_22:
  *((_WORD *)a1 + 17) &= 0xFu;
  *((_DWORD *)a1 + 10) = *(_DWORD *)(a2 + 40);
  *((_DWORD *)a1 + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)a1 + 13) ^= (*((_DWORD *)a1 + 13) ^ *(_DWORD *)(a2 + 52)) & 0x7FFFFFFF;
  v17 = *(_QWORD *)(a2 + 16);
  a1[2] = v17;
  while ( v17 )
  {
    MiInsertSubsectionNode(v3, v17);
    v17 = *(_QWORD *)(v17 + 16);
  }
  ExReleaseSpinLockExclusive(v9, v11);
  if ( v8 )
    MiReturnSubsectionCharges(v8);
  return 0LL;
}
