/*
 * XREFs of ?Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180001B10
 * Callers:
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1800024B8 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@Mesh@@AEAAXXZ @ 0x1800906E0 (-Clear@Mesh@@AEAAXXZ.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800920C8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 */

__int64 __fastcall Mesh::Init(float **this, const struct Mesh::ContentInfo *a2, const struct D2D_RECT_F *a3)
{
  int v6; // edx
  float *v7; // rax
  float v8; // xmm1_4
  __m128 right_low; // xmm2
  __m128 bottom_low; // xmm1
  char *v11; // rcx
  signed __int64 v12; // rbx
  unsigned int v13; // edi
  int v15; // eax

  if ( ((_BYTE)this[24] & 4) != 0 )
  {
    v15 = Mesh::GrowPreallocatedGraphObjects((Mesh *)this);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x36u);
      return v13;
    }
    *((_DWORD *)this + 48) &= ~4u;
  }
  Mesh::Clear((Mesh *)this);
  v6 = 0;
  v7 = this[2];
  *((_DWORD *)this + 48) ^= (*((_DWORD *)this + 48) ^ (*((unsigned __int8 *)a2 + 16) << 7)) & 0x80;
  v8 = fmaxf(fmaxf(a3->right - a3->left, a3->bottom - a3->top), 1.0) * 0.0000099999997;
  *v7 = v8;
  v7[1] = v8 * 2.0;
  v7[2] = v8 * v8;
  right_low = (__m128)LODWORD(a3->right);
  bottom_low = (__m128)LODWORD(a3->bottom);
  right_low.m128_f32[0] = (float)(right_low.m128_f32[0] + a3->left) * 0.5;
  bottom_low.m128_f32[0] = (float)(bottom_low.m128_f32[0] + a3->top) * 0.5;
  this[5] = (float *)_mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 33);
  if ( *((int *)a2 + 33) > 0 )
  {
    v11 = (char *)a2 + 20;
    v12 = (char *)this - (char *)a2;
    do
    {
      if ( (unsigned __int64)v6 >= 2 )
        break;
      if ( *((_DWORD *)v11 + 13) )
      {
        *(_OWORD *)&v11[v12 + 32] = *(_OWORD *)v11;
        *(_OWORD *)&v11[v12 + 48] = *((_OWORD *)v11 + 1);
        *(_OWORD *)&v11[v12 + 64] = *((_OWORD *)v11 + 2);
        *(_QWORD *)&v11[v12 + 80] = *((_QWORD *)v11 + 6);
      }
      ++v6;
      v11 += 56;
    }
    while ( v6 < *((_DWORD *)a2 + 33) );
  }
  return 0;
}
