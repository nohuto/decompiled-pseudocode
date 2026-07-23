/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x140579938
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1406608E0 (MiMakePartitionMemoryBlock.c)
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiConvertInitialMemoryBlock(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  int v3; // edi
  _QWORD *v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // r9
  char *result; // rax
  char *v10; // r10
  unsigned int v11; // r11d
  unsigned int v12; // r9d
  __int64 v13; // rdx

  v2 = *a2;
  v3 = 1;
  if ( *a2 > 1 )
  {
    v6 = a2 + 8;
    v7 = a2 + 4;
    v8 = v2 - 1;
    do
    {
      if ( *v6 != *v7 + v7[1] )
        ++v3;
      v7 += 2;
      v6 += 2;
      --v8;
    }
    while ( v8 );
  }
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((unsigned int)(v3 - 1) + 3LL), 0x6C4D6D4Du);
  if ( result )
  {
    *((_QWORD *)result + 1) = 1LL;
    v10 = result + 16;
    *(_QWORD *)result = a1;
    v11 = 0;
    *((_DWORD *)result + 4) = v3;
    v12 = 0;
    for ( *((_QWORD *)result + 3) = *((_QWORD *)a2 + 1); v12 < *a2; ++v12 )
    {
      if ( v12 && *(_QWORD *)&a2[4 * v12 + 4] == *(_QWORD *)&a2[4 * v12] + *(_QWORD *)&a2[4 * v12 + 2] )
      {
        *(_QWORD *)&v10[16 * v11 + 8] += *(_QWORD *)&a2[4 * v12 + 6];
      }
      else
      {
        v13 = 2LL * v11++;
        *(_QWORD *)&v10[8 * v13 + 16] = *(_QWORD *)&a2[4 * v12 + 4];
        *(_QWORD *)&v10[8 * v13 + 24] = *(_QWORD *)&a2[4 * v12 + 6];
      }
    }
    result += 16;
  }
  return result;
}
