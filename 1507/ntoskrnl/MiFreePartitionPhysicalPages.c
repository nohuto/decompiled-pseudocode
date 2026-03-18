/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1406A3D40
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  __int64 *i; // rdx
  _QWORD *v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // r9

  do
    MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 5328) );
  for ( i = *(__int64 **)(a1 + 48); i; i = (__int64 *)*i )
  {
    v3 = i + 6;
    v4 = (unsigned __int64)*((unsigned int *)i + 10) >> 12;
    v5 = 0LL;
    v6 = (8 * v4 + 7) >> 3;
    if ( i + 6 > &i[v4 + 6] )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( (*v3 & 0x4000000000000000LL) != 0 )
          *v3 &= ~0x4000000000000000uLL;
        ++v3;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
}
