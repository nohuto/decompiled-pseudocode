/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z @ 0x180178270
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x180177EE8 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(__m128 *this, const struct LightInfo *a2, unsigned int a3)
{
  float v4; // xmm0_4
  char v5; // r13
  char *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  char *v10; // rdx
  __int64 v11; // rcx
  __m128 *v12; // r15
  __int64 v13; // r12
  __int32 *v14; // r8
  unsigned int i; // ecx
  __int32 v16; // edx
  __int32 v17; // edx
  int v18; // eax
  int v19; // eax

  if ( a3 )
    v4 = FLOAT_1_0;
  else
    v4 = 0.0;
  this[13].m128_f32[0] = v4;
  this[12].m128_u64[0] = 0LL;
  v5 = 0;
  this[12].m128_u64[1] = 0LL;
  if ( a3 )
  {
    v6 = (char *)a2 + 12;
    v7 = a3;
    do
    {
      if ( !*((_DWORD *)v6 - 3) )
      {
        v5 = 1;
        this[12] = _mm_add_ps(*(__m128 *)(v6 - 8), this[12]);
      }
      v6 += 148;
      --v7;
    }
    while ( v7 );
  }
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    v10 = (char *)a2 + 12;
    do
    {
      if ( v8 >= 2 )
        break;
      if ( *((_DWORD *)v10 - 3) )
      {
        this[14] = *(__m128 *)(v10 + 68);
        this[15] = *(__m128 *)(v10 + 84);
        this[16] = *(__m128 *)(v10 + 100);
        this[17] = *(__m128 *)(v10 + 116);
        this[18].m128_i32[0] = *((_DWORD *)v10 + 33);
        v11 = 5LL * v8++;
        this[v11 + 6].m128_i32[3] = *((_DWORD *)v10 - 3);
        this[v11 + 2] = *(__m128 *)(v10 - 8);
        this[v11 + 3].m128_u64[0] = *((_QWORD *)v10 + 3);
        this[v11 + 3].m128_i32[2] = *((_DWORD *)v10 + 8);
        this[v11 + 4] = *(__m128 *)(v10 + 8);
        this[v11 + 5].m128_u64[0] = *(_QWORD *)(v10 + 36);
        this[v11 + 5].m128_i32[2] = *((_DWORD *)v10 + 11);
        this[v11 + 6].m128_u64[0] = *((_QWORD *)v10 + 6);
        this[v11 + 6].m128_i32[2] = *((_DWORD *)v10 + 14);
        this[v11 + 3].m128_i32[3] = *((_DWORD *)v10 + 15);
        this[v11 + 5].m128_i32[3] = *((_DWORD *)v10 + 16);
      }
      ++v9;
      v10 += 148;
    }
    while ( v9 < a3 );
  }
  if ( v8 < 2 )
  {
    v12 = &this[5 * v8 + 2];
    v13 = 2 - v8;
    do
    {
      memset_0(v12, 0, 0x50uLL);
      v12[4].m128_i32[3] = 15;
      v12 += 5;
      --v13;
    }
    while ( v13 );
  }
  this[1].m128_i32[0] = -1;
  v14 = &this[6].m128_i32[3];
  for ( i = 0; i < 8; i += 4 )
  {
    v16 = *v14;
    v14 += 20;
    v17 = v16 << i;
    v18 = this[1].m128_i32[0] & ~(15 << i);
    v19 = v17 | v18;
    this[1].m128_i32[0] = v19;
  }
  if ( v5 )
    this[1].m128_i32[0] = v19 & ~(15 << (4 * v8));
}
