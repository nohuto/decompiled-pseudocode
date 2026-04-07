/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180088B60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18001C938 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18001C978 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Hide@CImage@@UEAAXXZ @ 0x180071150 (-Hide@CImage@@UEAAXXZ.c)
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x1800711BC (-Unhide@CImage@@QEAAXN@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x180088AD0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this)
{
  float v1; // xmm0_4
  float v3; // xmm8_4
  float v4; // xmm8_4
  float v5; // xmm2_4
  int v6; // esi
  LONG v7; // edi
  int v8; // ebp
  struct tagSIZE *v9; // rcx
  LONG v10; // ebx
  CImage *v11; // rcx
  double v12; // xmm1_8
  float v13; // xmm1_4
  float v14; // xmm8_4
  float v15; // xmm2_4
  float v16; // xmm6_4
  __m128i v17; // xmm0
  struct tagSIZE *v18; // rcx
  LONG v19; // edi
  LONG v20; // ebx
  struct tagSIZE v22; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((float *)this + 87);
  v3 = *(double *)(*((_QWORD *)this + 48) + 48LL);
  if ( v1 < v3 )
  {
    v13 = (float)*((int *)this + 79);
    v14 = (float)(v3 - v1) / *((float *)this + 88);
    v15 = *((float *)this + 89) + (float)((float)(*((float *)this + 90) - *((float *)this + 89)) * v14);
    v16 = (float)(1.0 - *((float *)this + 94)) * v14;
    v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 78));
    v18 = (struct tagSIZE *)*((_QWORD *)this + 41);
    v19 = (int)(float)(v13 * v15);
    v20 = (int)(float)(_mm_cvtepi32_ps(v17).m128_f32[0] * v15);
    if ( v20 < 1 )
      v20 = 1;
    v22.cx = v20;
    if ( v19 < 1 )
      v19 = 1;
    v22.cy = v19;
    CVisual::SetSize(v18, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 41), *((_DWORD *)this + 72) - v20 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 41), *((_DWORD *)this + 73) - v19 / 2);
    CImage::Hide(*((CImage **)this + 42));
    v11 = (CImage *)*((_QWORD *)this + 41);
    v12 = (float)(1.0 - v16);
  }
  else
  {
    v4 = v3 / v1;
    v5 = *((float *)this + 91) + (float)((float)(*((float *)this + 92) - *((float *)this + 91)) * v4);
    v6 = *((_DWORD *)this + 74) + (int)(float)((float)(*((_DWORD *)this + 76) - *((_DWORD *)this + 74)) * v4);
    v7 = (int)(float)((float)*((int *)this + 81) * v5);
    v8 = *((_DWORD *)this + 75) + (int)(float)((float)(*((_DWORD *)this + 77) - *((_DWORD *)this + 75)) * v4);
    v9 = (struct tagSIZE *)*((_QWORD *)this + 42);
    v10 = (int)(float)((float)*((int *)this + 80) * v5);
    if ( v10 < 1 )
      v10 = 1;
    v22.cx = v10;
    if ( v7 < 1 )
      v7 = 1;
    v22.cy = v7;
    CVisual::SetSize(v9, &v22);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 42), v6 - v10 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 42), v8 - v7 / 2);
    v11 = (CImage *)*((_QWORD *)this + 42);
    v12 = (float)(1.0 - (float)((float)(1.0 - *((float *)this + 93)) * v4));
  }
  CImage::Unhide(v11, v12);
  if ( *(_BYTE *)(*((_QWORD *)this + 48) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
