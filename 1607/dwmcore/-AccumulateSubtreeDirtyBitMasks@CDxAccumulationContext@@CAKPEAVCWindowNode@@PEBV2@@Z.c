/*
 * XREFs of ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x18015D2A8
 * Callers:
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x1800B7950 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x18015D2A8 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x18015D2A8 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::AccumulateSubtreeDirtyBitMasks(
        struct CWindowNode *a1,
        const struct CWindowNode *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 *v8; // rbp
  unsigned __int64 v9; // rax
  struct CWindowNode *v11; // [rsp+30h] [rbp+8h]

  v2 = 0;
  if ( a1 != a2 )
  {
    v5 = *((_QWORD *)a1 + 126);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 32);
      if ( v6 < 0x20 )
        v2 = 1 << v6;
    }
  }
  v7 = 0;
  v8 = (__int64 *)((char *)a1 + 136);
  while ( 1 )
  {
    v9 = (*v8 & 2) != 0 ? *(_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCuLL) : *v8 & 1;
    if ( v7 >= v9 )
      break;
    v11 = (struct CWindowNode *)CPtrArrayBase::operator[](v8, v7);
    if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 34LL) )
      v2 |= CDxAccumulationContext::AccumulateSubtreeDirtyBitMasks(v11, a2);
    ++v7;
  }
  return v2;
}
