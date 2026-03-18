/*
 * XREFs of ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x180166CBC
 * Callers:
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18000CB04 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18001D198 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180070E50 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18009AC74 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall CAnalogTextureTarget::UpdateProtectedContentRegion(CAnalogTextureTarget *this, char a2)
{
  CDirtyRegion *v2; // rbx
  const struct MilRectF *OptimizedDirtyRects; // rax
  unsigned int v5; // edx
  __int64 v6; // r11
  FastRegion::CRegion **v7; // rsi
  __int64 v8; // rdi
  float *v9; // rbx
  FastRegion::CRegion *v10; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+38h] [rbp-60h] BYREF

  v11 = 0;
  v2 = (CDirtyRegion *)*((_QWORD *)this + 35);
  v10 = (FastRegion::CRegion *)&v11;
  if ( !v2 || *((_BYTE *)v2 + 2724) )
  {
    if ( a2 )
      FastRegion::CRegion::SetRectangle(
        (CAnalogTextureTarget *)((char *)this + 288),
        *((_DWORD *)this + 40),
        *((_DWORD *)this + 41),
        *((_DWORD *)this + 42),
        *((_DWORD *)this + 43));
    else
      **((_DWORD **)this + 36) = 0;
  }
  else if ( !CDirtyRegion::IsEmpty(v2) )
  {
    OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(v2);
    if ( v5 )
    {
      v7 = (FastRegion::CRegion **)(v6 + 288);
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
          FastRegion::CRegion::Union(v7, &v10);
        else
          FastRegion::CRegion::Subtract(v7, &v10);
        v9 += 4;
        --v8;
      }
      while ( v8 );
    }
  }
  FastRegion::CRegion::FreeMemory(&v10);
}
