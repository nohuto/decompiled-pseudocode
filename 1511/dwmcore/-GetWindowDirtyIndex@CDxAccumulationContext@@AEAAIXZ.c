/*
 * XREFs of ?GetWindowDirtyIndex@CDxAccumulationContext@@AEAAIXZ @ 0x1800A9C38
 * Callers:
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z @ 0x180137278 (-AccumulateSubtreeDirtyBitMasks@CDxAccumulationContext@@CAKPEAVCWindowNode@@PEBV2@@Z.c)
 */

__int64 __fastcall CDxAccumulationContext::GetWindowDirtyIndex(const struct CWindowNode **this)
{
  unsigned int v1; // ebp
  struct CWindowNode *v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // eax
  unsigned int i; // ecx

  v1 = 0;
  v3 = (struct CWindowNode *)*((_QWORD *)*this + 8);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)v3 + 8);
      if ( !v4
        || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4 + 48LL))(*((_QWORD *)v3 + 8), 33LL) )
      {
        break;
      }
      v3 = (struct CWindowNode *)*((_QWORD *)v3 + 8);
    }
  }
  if ( this[3] != v3 || *((_DWORD *)this + 8) >= 0x20u )
  {
    if ( v3 && (*(unsigned __int8 (__fastcall **)(struct CWindowNode *, __int64))(*(_QWORD *)v3 + 48LL))(v3, 33LL) )
    {
      v5 = CDxAccumulationContext::AccumulateSubtreeDirtyBitMasks(v3, *this);
      for ( i = 1; i < 0x20; ++i )
      {
        v5 >>= 1;
        if ( (v5 & 1) == 0 )
          break;
      }
      if ( i == 32 )
        i = 64;
      v1 = i;
    }
    *((_DWORD *)this + 8) = v1;
    this[3] = v3;
  }
  return *((unsigned int *)this + 8);
}
