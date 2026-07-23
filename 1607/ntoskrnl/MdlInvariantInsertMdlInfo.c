/*
 * XREFs of MdlInvariantInsertMdlInfo @ 0x140222C70
 * Callers:
 *     MdlInvariantPreProcessing1 @ 0x140222FA8 (MdlInvariantPreProcessing1.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MdlInvariantInsertMdlInfo(__int64 a1, _OWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1

  v2 = *(_QWORD **)(a1 + 224);
  if ( !v2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D646C56u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x58uLL);
    *(_DWORD *)v2 = 2;
    v2[1] = v2 + 3;
    *(_QWORD *)(a1 + 224) = v2;
  }
  v6 = 0LL;
  if ( !*(_DWORD *)v2 )
    return 0LL;
  v7 = v2[1];
  while ( *(_QWORD *)(32LL * (unsigned int)v6 + v7) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)v2 )
      return 0LL;
  }
  v9 = 32 * v6;
  result = 1LL;
  v10 = a2[1];
  *(_OWORD *)(v9 + v7) = *a2;
  *(_OWORD *)(v9 + v7 + 16) = v10;
  return result;
}
