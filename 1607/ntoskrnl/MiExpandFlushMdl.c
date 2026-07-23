/*
 * XREFs of MiExpandFlushMdl @ 0x1400A5BA8
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiExpandFlushMdl(unsigned int *Src, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  PVOID PoolWithTag; // rax
  __int64 v6; // rsi
  __int64 result; // rax

  v2 = Src[10];
  if ( (_DWORD)v2 == 1048574 )
    return 0LL;
  v4 = (unsigned int)(2 * v2);
  if ( (unsigned int)v4 <= (unsigned int)v2 || (unsigned int)v4 > 0xFFFFE )
    return 0LL;
  if ( (unsigned int)v4 > a2 )
    v4 = a2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4 + 48, 0x6C466D4Du);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, Src, 8 * v2 + 48);
  result = v6;
  *(_DWORD *)(v6 + 44) = v4;
  return result;
}
