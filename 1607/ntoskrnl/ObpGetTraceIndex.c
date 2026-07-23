/*
 * XREFs of ObpGetTraceIndex @ 0x140667C84
 * Callers:
 *     ObpPushRefDerefInfo @ 0x140668054 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpGetTraceIndex(unsigned __int16 *Source2)
{
  unsigned int v1; // edi
  unsigned __int16 *v3; // r8
  __int64 v4; // r9
  int v5; // edx
  int v6; // eax
  unsigned __int16 *v7; // r9
  char *v8; // r14
  unsigned __int16 v9; // di
  int v10; // esi
  __int64 i; // rax
  int v12; // ebx
  PVOID PoolWithTag; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8

  v1 = 0;
  v3 = Source2;
  v4 = 32LL;
  do
  {
    v5 = v3[1];
    v6 = *v3;
    v3 += 2;
    v1 += v6 ^ v5;
    --v4;
  }
  while ( v4 );
  v7 = (unsigned __int16 *)ObpStackTable;
  v8 = (char *)ObpStackTable + 8;
  v9 = v1 % 0x3FFD;
  LOWORD(v10) = v9;
  for ( i = v9; ; i = (unsigned __int16)v10 )
  {
    LOWORD(v12) = v7[i + 68];
    if ( (_WORD)v12 == 0xFFFF )
      break;
    if ( RtlCompareMemory(
           (const void *)(*(_QWORD *)&v8[8 * ((unsigned __int64)(unsigned __int16)v12 >> 10)]
                        + ((__int64)((unsigned __int16)v12 % 1024) << 7)),
           Source2,
           0x80uLL) == 128 )
      return (unsigned __int16)v12;
    v10 = ((unsigned __int16)v10 + 1) % 16381;
    if ( (_WORD)v10 == v9 )
      return 16381LL;
    v7 = (unsigned __int16 *)ObpStackTable;
  }
  if ( *v7 == v7[1] )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x7452624Fu);
    if ( !PoolWithTag )
      return 16381LL;
    v7 = (unsigned __int16 *)ObpStackTable;
    *((_QWORD *)ObpStackTable + ((unsigned __int64)*((unsigned __int16 *)ObpStackTable + 1) >> 10) + 1) = PoolWithTag;
    v7[1] += 1024;
  }
  v12 = *v7;
  v15 = (unsigned __int64)*v7 >> 10;
  v7[(unsigned __int16)v10 + 68] = v12;
  v16 = *(_QWORD *)&v7[4 * v15 + 4];
  v17 = (__int64)(v12 % 1024) << 7;
  *(_OWORD *)(v16 + v17) = *(_OWORD *)Source2;
  *(_OWORD *)(v16 + v17 + 16) = *((_OWORD *)Source2 + 1);
  *(_OWORD *)(v16 + v17 + 32) = *((_OWORD *)Source2 + 2);
  *(_OWORD *)(v16 + v17 + 48) = *((_OWORD *)Source2 + 3);
  *(_OWORD *)(v16 + v17 + 64) = *((_OWORD *)Source2 + 4);
  *(_OWORD *)(v16 + v17 + 80) = *((_OWORD *)Source2 + 5);
  *(_OWORD *)(v16 + v17 + 96) = *((_OWORD *)Source2 + 6);
  *(_OWORD *)(v16 + v17 + 112) = *((_OWORD *)Source2 + 7);
  ++*v7;
  return (unsigned __int16)v12;
}
