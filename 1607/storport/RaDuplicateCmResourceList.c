/*
 * XREFs of RaDuplicateCmResourceList @ 0x1C005AC5C
 * Callers:
 *     RaidInitializeResourceList @ 0x1C005AC08 (RaidInitializeResourceList.c)
 * Callees:
 *     memmove @ 0x1C001AA40 (memmove.c)
 */

PVOID __fastcall RaDuplicateCmResourceList(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // ecx
  unsigned int v5; // eax
  unsigned int *v6; // r8
  unsigned int i; // edx
  unsigned int v8; // edi
  PVOID PoolWithTag; // rax
  PVOID v10; // rbx

  v2 = *a2;
  v3 = 0;
  v5 = 40;
  if ( *a2 )
  {
    v6 = a2 + 4;
    do
    {
      if ( v3 )
        v5 += 36;
      for ( i = 0; i < *v6; ++i )
      {
        if ( i )
          v5 += 20;
      }
      ++v3;
      v6 += 9;
    }
    while ( v3 < v2 );
  }
  v8 = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4C526152u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, a2, v8);
  return v10;
}
