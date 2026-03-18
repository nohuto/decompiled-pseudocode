/*
 * XREFs of ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x180121930
 * Callers:
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x180121930 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 *     ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x180121B58 (-GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x180121930 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::AccumulateSubtreeDirtyBitMasks(
        struct CWindowNode *a1,
        const struct CWindowNode *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  unsigned int v6; // ecx
  __int64 *v7; // rcx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  struct CWindowNode *v11; // [rsp+40h] [rbp+8h]
  __int64 *v12; // [rsp+48h] [rbp+10h]

  v2 = 0;
  if ( a1 != a2 )
  {
    v5 = *((_QWORD *)a1 + 156);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 32);
      if ( v6 < 0x20 )
        v2 = 1 << v6;
    }
  }
  v7 = (__int64 *)((char *)a1 + 72);
  v8 = 0;
  v12 = (__int64 *)((char *)a1 + 72);
  while ( 1 )
  {
    v9 = (*v7 & 2) != 0 ? *(_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCuLL) : *v7 & 1;
    if ( v8 >= v9 )
      break;
    v11 = (struct CWindowNode *)CPtrArrayBase::operator[](v7, v8);
    if ( (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 32LL) )
      v2 |= CDxAccumulationContext::AccumulateSubtreeDirtyBitMasks(v11, a2);
    v7 = v12;
    ++v8;
  }
  return v2;
}
