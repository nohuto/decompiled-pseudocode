/*
 * XREFs of FstubConvertExtendedToLayout @ 0x14066F1D0
 * Callers:
 *     FstubWritePartitionTableMBR @ 0x1406700C0 (FstubWritePartitionTableMBR.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall FstubConvertExtendedToLayout(_DWORD *a1)
{
  unsigned int v1; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx

  v1 = 0;
  if ( *a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * a1[1] + 8), 0x42747346u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[1] = a1[2];
  *PoolWithTag = a1[1];
  if ( a1[1] )
  {
    do
    {
      v6 = v1;
      v7 = v1++;
      v7 *= 32LL;
      *(_QWORD *)((char *)v5 + v7 + 8) = *(_QWORD *)&a1[36 * v6 + 14];
      *(_QWORD *)((char *)v5 + v7 + 16) = *(_QWORD *)&a1[36 * v6 + 16];
      *((_BYTE *)v5 + v7 + 35) = a1[36 * v6 + 19];
      *(_DWORD *)((char *)v5 + v7 + 28) = a1[36 * v6 + 18];
      *((_BYTE *)v5 + v7 + 32) = a1[36 * v6 + 20];
      *((_BYTE *)v5 + v7 + 33) = BYTE1(a1[36 * v6 + 20]);
      *((_BYTE *)v5 + v7 + 34) = BYTE2(a1[36 * v6 + 20]);
      *(_DWORD *)((char *)v5 + v7 + 24) = a1[36 * v6 + 21];
    }
    while ( v1 < a1[1] );
  }
  return v5;
}
