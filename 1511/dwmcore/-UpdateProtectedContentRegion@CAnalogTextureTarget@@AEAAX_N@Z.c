/*
 * XREFs of ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30
 * Callers:
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DA6C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x180079820 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800FB690 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 */

void __fastcall CAnalogTextureTarget::UpdateProtectedContentRegion(CAnalogTextureTarget *this, char a2)
{
  CDirtyRegion *v2; // rbx
  const struct MilRectF *OptimizedDirtyRects; // rax
  unsigned int v5; // edx
  __int64 v6; // r11
  const struct FastRegion::Internal::CRgnData **v7; // rsi
  __int64 v8; // rdi
  float *v9; // rbx
  int *v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h] BYREF

  v11 = 0;
  v2 = (CDirtyRegion *)*((_QWORD *)this + 25);
  v10 = &v11;
  if ( !v2 || *((_BYTE *)v2 + 1012) )
  {
    if ( a2 )
      FastRegion::CRegion::SetRectangle(
        (CAnalogTextureTarget *)((char *)this + 208),
        *((_DWORD *)this + 22),
        *((_DWORD *)this + 23),
        *((_DWORD *)this + 24),
        *((_DWORD *)this + 25));
    else
      **((_DWORD **)this + 26) = 0;
  }
  else if ( !CDirtyRegion::IsEmpty(v2) )
  {
    OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(v2);
    if ( v5 )
    {
      v7 = (const struct FastRegion::Internal::CRgnData **)(v6 + 208);
      v8 = v5;
      v9 = (float *)((char *)OptimizedDirtyRects + 8);
      do
      {
        FastRegion::CRegion::SetRectangle(
          (FastRegion::CRegion *)&v10,
          (int)*(v9 - 2),
          (int)*(v9 - 1),
          (int)*v9,
          (int)v9[1]);
        if ( a2 )
          FastRegion::CRegion::Union(v7, (const struct FastRegion::Internal::CRgnData **)&v10);
        else
          FastRegion::CRegion::Subtract(v7, (const struct FastRegion::Internal::CRgnData **)&v10);
        v9 += 4;
        --v8;
      }
      while ( v8 );
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v10);
}
