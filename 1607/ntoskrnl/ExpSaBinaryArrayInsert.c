/*
 * XREFs of ExpSaBinaryArrayInsert @ 0x14013405C
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpSaBinaryArrayInsert(_QWORD **a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  _QWORD *PoolWithTag; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v11; // ebp

  v2 = 0;
  while ( 1 )
  {
    v5 = *a1;
    v6 = 1 << (v2 + 2);
    if ( !*a1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x61537845u);
      v5 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( !v5 )
        return (unsigned int)-1;
      *a1 = v5;
    }
    if ( *v5 < (unsigned __int64)v6 )
      break;
    ++v2;
    ++a1;
    if ( v2 >= 0x10 )
      return (unsigned int)-1;
  }
  v8 = *(unsigned int *)v5;
  if ( v5[v8 + 1] )
  {
    v11 = v6 - 1;
    do
      v8 = v11 & ((_DWORD)v8 + 1);
    while ( v5[v8 + 1] );
  }
  ++*v5;
  v9 = v8 | (1 << (v2 + 2));
  v5[v8 + 1] = a2;
  return v9;
}
