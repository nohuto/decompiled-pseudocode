/*
 * XREFs of MiReturnPartitionPagesToParent @ 0x1401F1F74
 * Callers:
 *     MiFreePartitionPhysicalPages @ 0x1406605B4 (MiFreePartitionPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiDrainZeroLookasides @ 0x1400A8C34 (MiDrainZeroLookasides.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F07A4 (MiActOnPartitionNodePages.c)
 */

void __fastcall MiReturnPartitionPagesToParent(__int64 a1)
{
  __int16 *v2; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rcx
  KIRQL v5; // bp
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // rcx
  __int16 *v10[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v10[1], 0, 0x30uLL);
  v2 = (__int16 *)MiSystemPartition;
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(__int16 **)(a1 + 24);
  MiDrainZeroLookasides(a1, 0LL, 0LL, 0);
  v10[0] = v2;
  v10[1] = (__int16 *)a1;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v4 = *(_QWORD **)(a1 + 56);
  v5 = v3;
  LOBYTE(v10[2]) = v3;
  v6 = 0LL;
  while ( v4 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
  }
  while ( v6 )
  {
    v7 = (_QWORD *)v6[1];
    v8 = (__int64)v6;
    v9 = v6;
    if ( v7 )
    {
      do
      {
        v6 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v9 )
          break;
        v9 = v6;
      }
    }
    MiActOnPartitionNodePages(v8, 3, v10);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232), v5);
}
