/*
 * XREFs of MiCreateNodeLists @ 0x140596AF8
 * Callers:
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiCreateNodeLists(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  char *v4; // rdi
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  PVOID v12; // rcx
  __int64 v13; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]

  v1 = 0;
  P[1] = P;
  v15 = 0LL;
  P[0] = P;
  v3 = 0;
  v4 = 0LL;
  while ( (unsigned int)MiDescribePageRun(
                          (__int64)P,
                          *(_QWORD *)(a1 + 16LL * v3 + 16),
                          *(_QWORD *)(a1 + 16LL * v3 + 24)) )
  {
    if ( ++v3 == *(_DWORD *)a1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 18 * v15 + 32, 0x6C4D6D4Du);
      if ( PoolWithTag )
      {
        v4 = (char *)(PoolWithTag + 2);
        PoolWithTag[1] = 1LL;
        *PoolWithTag = MiSystemPartition;
        *((_DWORD *)PoolWithTag + 4) = v15;
        v6 = (__int64)&PoolWithTag[2 * *((unsigned int *)PoolWithTag + 4) + 4];
        PoolWithTag[3] = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v7 = P[0];
          if ( P[0] == P )
            break;
          v8 = *(_QWORD *)P[0];
          if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v8 + 8) != P[0] )
            __fastfail(3u);
          P[0] = *(PVOID *)P[0];
          *(_QWORD *)(v8 + 8) = P;
          v9 = v1;
          v10 = v1++;
          v10 *= 2LL;
          *(_QWORD *)&v4[8 * v10 + 16] = v7[2];
          *(_QWORD *)&v4[8 * v10 + 24] = v7[3];
          *(_BYTE *)(v6 + 2 * v9) = *((_BYTE *)v7 + 32);
          *(_BYTE *)(v6 + 2 * v9 + 1) = *((_BYTE *)v7 + 33);
          ExFreePoolWithTag(v7, 0);
        }
        return v4;
      }
      break;
    }
  }
  while ( 1 )
  {
    v12 = P[0];
    if ( P[0] == P )
      break;
    v13 = *(_QWORD *)P[0];
    if ( *((PVOID **)P[0] + 1) != P || *(PVOID *)(v13 + 8) != P[0] )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v13 + 8) = P;
    ExFreePoolWithTag(v12, 0);
  }
  return v4;
}
