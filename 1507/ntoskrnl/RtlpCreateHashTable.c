/*
 * XREFs of RtlpCreateHashTable @ 0x14011F4D0
 * Callers:
 *     RtlCreateHashTable @ 0x14011F4C0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x140170868 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x14011F60C (RtlpAllocateSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x140131B40 (RtlDeleteHashTable.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpCreateHashTable(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebp
  _RTL_DYNAMIC_HASH_TABLE *PoolWithTag; // rbx
  int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // rax
  PVOID v14; // rax
  PVOID v15; // rsi
  __int64 v16; // rdi
  __int64 SecondLevelDir; // rax

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0xFF80 )
    return 0;
  PoolWithTag = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62615448u);
    if ( !PoolWithTag )
      return 0;
    v10 = 1;
  }
  memset(PoolWithTag, 0, sizeof(_RTL_DYNAMIC_HASH_TABLE));
  PoolWithTag->Pivot = 0;
  PoolWithTag->DivisorMask = v4;
  v11 = v4 >> 7;
  PoolWithTag->Flags = a4 | v10;
  PoolWithTag->TableSize = a2;
  PoolWithTag->Shift = a3;
  if ( a2 > 0x80 )
  {
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x62615448u);
    v15 = v14;
    if ( v14 )
    {
      memset(v14, 0, 0x1000uLL);
      v16 = 0LL;
      PoolWithTag->Directory = v15;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir();
        if ( !SecondLevelDir )
          break;
        *((_QWORD *)v15 + v16++) = SecondLevelDir;
        if ( v16 > v11 )
          goto LABEL_7;
      }
    }
    goto LABEL_15;
  }
  v12 = RtlpAllocateSecondLevelDir();
  if ( !v12 )
  {
LABEL_15:
    RtlDeleteHashTable(PoolWithTag);
    return 0;
  }
  PoolWithTag->Directory = (void *)v12;
LABEL_7:
  *a1 = PoolWithTag;
  return 1;
}
