/*
 * XREFs of ?RestoreCachedGraph@Mesh@@AEAAJAEBUMeshGraph@1@@Z @ 0x1800FFFD4
 * Callers:
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180009D48 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z @ 0x180060244 (-CopyGraph@Mesh@@CAJAEBUMeshGraph@1@PEAU21@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall Mesh::RestoreCachedGraph(void ***this, const void **a2)
{
  int v3; // eax
  int v4; // r8d
  unsigned int v5; // ebx
  void **v6; // rax
  __int64 v7; // rdx
  char *v8; // rcx
  __int64 v9; // rax
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  void **v12; // rax
  int v13; // r9d
  __int64 v14; // r8

  v3 = Mesh::CopyGraph(a2, this[2]);
  v4 = 0;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = this[2];
    if ( *((int *)v6 + 8) > 0 )
    {
      v7 = 0LL;
      do
      {
        v8 = (char *)v6[2];
        ++v4;
        v9 = *(_QWORD *)&v8[v7 + 8];
        v10 = (__m128)*(unsigned int *)(v9 + 32);
        v11 = (__m128)*(unsigned int *)(v9 + 36);
        v10.m128_f32[0] = v10.m128_f32[0] - *((float *)this + 14);
        v11.m128_f32[0] = v11.m128_f32[0] - *((float *)this + 15);
        *(_QWORD *)&v8[v7 + 16] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
        v7 += 72LL;
        v6 = this[2];
      }
      while ( v4 < *((_DWORD *)v6 + 8) );
    }
    v12 = this[2];
    v13 = 0;
    if ( *((int *)v12 + 14) > 0 )
    {
      v14 = 0LL;
      do
      {
        v14 += 88LL;
        ++v13;
        *(_QWORD *)((char *)v12[5] + v14 - 80) = *(_QWORD *)(**(_QWORD **)((char *)v12[5] + v14 - 40) + 16LL);
        v12 = this[2];
      }
      while ( v13 < *((_DWORD *)v12 + 14) );
    }
    return 0;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x8D0u);
  }
  return v5;
}
