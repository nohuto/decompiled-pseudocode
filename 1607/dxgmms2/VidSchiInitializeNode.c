/*
 * XREFs of VidSchiInitializeNode @ 0x1C006B900
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C006B220 (VidSchInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  PVOID PoolWithTag; // rax
  SIZE_T v5; // rdx
  PVOID v6; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 192);
  *(_DWORD *)(a1 + 192) = v3;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 112 * v3, 0x68536956u);
  *(_QWORD *)(a1 + 184) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 112LL * *(unsigned int *)(a1 + 192));
  v5 = 88LL * *(unsigned int *)(v1 + 192);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(v1 + 192);
  v6 = ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x68536956u);
  *(_QWORD *)(a1 + 200) = v6;
  if ( !v6 )
    return 3221225495LL;
  memset(v6, 0, 88LL * *(unsigned int *)(a1 + 208));
  return 0LL;
}
