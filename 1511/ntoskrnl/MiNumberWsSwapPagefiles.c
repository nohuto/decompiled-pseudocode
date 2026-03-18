/*
 * XREFs of MiNumberWsSwapPagefiles @ 0x14001358C
 * Callers:
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNumberWsSwapPagefiles(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = *(_DWORD *)(a1 + 5720);
  result = 0LL;
  if ( v1 )
  {
    v3 = a1 + 5728;
    v4 = v1;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v3 + 204LL) & 0x10) != 0 )
        result = (unsigned int)(result + 1);
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
