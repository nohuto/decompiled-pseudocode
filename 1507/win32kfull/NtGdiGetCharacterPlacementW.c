/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C02A6910
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreGetCharacterPlacementW @ 0x1C02921F0 (GreGetCharacterPlacementW.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(HDC a1, char *a2, int a3, signed int a4, unsigned __int64 a5, int a6)
{
  signed int v6; // r12d
  char *v7; // r10
  int v8; // ebx
  unsigned int v9; // edi
  __m128i *v10; // r15
  __int64 v11; // rsi
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  size_t v21; // r8
  char *v22; // rcx
  __int64 v23; // rax
  void *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // rdi
  __int64 v29; // r13
  __int64 v30; // r12
  const void *v31; // rdx
  const void *v32; // rdx
  const void *v33; // rdx
  const void *v34; // rdx
  const void *v35; // rdx
  const void *v36; // rdx
  unsigned int v38; // [rsp+34h] [rbp-C4h]
  int CharacterPlacementW; // [rsp+38h] [rbp-C0h]
  unsigned int v40; // [rsp+3Ch] [rbp-BCh]
  unsigned int v41; // [rsp+40h] [rbp-B8h]
  unsigned int v42; // [rsp+44h] [rbp-B4h]
  unsigned int v43; // [rsp+48h] [rbp-B0h]
  unsigned int v44; // [rsp+4Ch] [rbp-ACh]
  void *v45[2]; // [rsp+70h] [rbp-88h]
  void *Src[2]; // [rsp+80h] [rbp-78h]
  void *v47[2]; // [rsp+90h] [rbp-68h]
  void *v48[2]; // [rsp+A0h] [rbp-58h]

  v6 = a3;
  v7 = a2;
  v8 = 0;
  CharacterPlacementW = 0;
  v9 = 0;
  v42 = 0;
  v44 = 0;
  v41 = 0;
  v43 = 0;
  v40 = 0;
  v38 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a3 < 0 || a4 < -1 || !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a5;
    if ( a5 >= W32UserProbeAddress )
      v12 = (_BYTE *)W32UserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    *(_OWORD *)v45 = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v47 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v48 = *(_OWORD *)(a5 + 48);
    v6 = a3;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v48, 8));
    if ( a3 > v13 )
      v6 = v13;
  }
  if ( (unsigned __int64)v6 > 0x9C4000 )
    return 0LL;
  v14 = (unsigned int)(2 * v6);
  v15 = 4 * v6;
  if ( a5 )
  {
    v9 = 64;
    if ( v45[1] )
    {
      v42 = 64;
      v9 = ((v14 + 3) & 0xFFFFFFFC) + 64;
      if ( v9 < 0x40 )
        return 0LL;
    }
    if ( Src[0] )
    {
      v44 = v9;
      v9 += v15;
      if ( v9 < v44 )
        return 0LL;
    }
    v16 = (char *)Src[1];
    if ( Src[1] )
    {
      v17 = v9;
      v41 = v9;
      v9 += v15;
      if ( v9 < v17 )
        return 0LL;
    }
    if ( v47[0] )
    {
      v18 = v9;
      v43 = v9;
      v9 += v15;
      if ( v9 < v18 )
        return 0LL;
    }
    if ( v47[1] )
    {
      v19 = v9;
      v40 = v9;
      v9 += (v6 + 3) & 0xFFFFFFFC;
      if ( v9 < v19 )
        return 0LL;
    }
    if ( v48[0] )
    {
      v20 = v9;
      v38 = v9;
      v9 += v14;
      if ( v9 < v20 )
        return 0LL;
    }
  }
  else
  {
    v16 = (char *)Src[1];
  }
  if ( v9 <= 40960000 - (int)v14 )
  {
    v11 = AllocFreeTmpBuffer(v9 + (unsigned int)v14);
    v14 = (unsigned int)(2 * v6);
    v7 = a2;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      v10 = (__m128i *)v11;
      if ( v45[1] )
        *(_QWORD *)(v11 + 8) = v11 + v42;
      else
        *(_QWORD *)(v11 + 8) = 0LL;
      if ( Src[0] )
        *(_QWORD *)(v11 + 16) = v11 + v44;
      else
        *(_QWORD *)(v11 + 16) = 0LL;
      if ( v16 )
        *(_QWORD *)(v11 + 24) = v11 + v41;
      else
        *(_QWORD *)(v11 + 24) = 0LL;
      if ( v47[0] )
        *(_QWORD *)(v11 + 32) = v11 + v43;
      else
        *(_QWORD *)(v11 + 32) = 0LL;
      if ( v47[1] )
        *(_QWORD *)(v11 + 40) = v11 + v40;
      else
        *(_QWORD *)(v11 + 40) = 0LL;
      if ( v48[0] )
        *(_QWORD *)(v11 + 48) = v11 + v38;
      else
        *(_QWORD *)(v11 + 48) = 0LL;
      *(_DWORD *)v11 = v9;
      *(_DWORD *)(v11 + 56) = v6;
    }
    v21 = (unsigned int)v14;
    v22 = &v7[v14];
    if ( v22 < v7 || (unsigned __int64)v22 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove((void *)(v11 + v9), v7, v21);
    if ( (a6 & 0x200000) != 0 && a5 && v16 )
    {
      v23 = (unsigned int)(4 * v6);
      v24 = (void *)v10[1].m128i_i64[1];
      if ( &v16[v23] < v16 || (unsigned __int64)&v16[v23] > W32UserProbeAddress )
        *W32UserProbeAddress = 0;
      memmove(v24, v16, (unsigned int)(4 * v6));
    }
    CharacterPlacementW = GreGetCharacterPlacementW(a1, (__m128i *)(v11 + v9), v6, a4, v10, a6);
    if ( CharacterPlacementW && a5 )
    {
      *(_DWORD *)(a5 + 60) = v10[3].m128i_i32[3];
      v28 = v10[3].m128i_i32[2];
      *(_DWORD *)(a5 + 56) = v28;
      v29 = (unsigned int)(2 * v28);
      v30 = (unsigned int)(4 * v28);
      if ( v45[1] )
      {
        v31 = (const void *)v10->m128i_i64[1];
        if ( (unsigned __int64)v45[1] + v29 > W32UserProbeAddress || (char *)v45[1] + v29 <= v45[1] )
          *W32UserProbeAddress = 0;
        memmove(v45[1], v31, (unsigned int)v29);
      }
      if ( Src[0] )
      {
        v32 = (const void *)v10[1].m128i_i64[0];
        if ( (unsigned __int64)Src[0] + v30 > W32UserProbeAddress || (char *)Src[0] + v30 <= Src[0] )
          *W32UserProbeAddress = 0;
        memmove(Src[0], v32, (unsigned int)v30);
      }
      if ( v16 )
      {
        v33 = (const void *)v10[1].m128i_i64[1];
        if ( (unsigned __int64)&v16[v30] > W32UserProbeAddress || &v16[v30] <= v16 )
          *W32UserProbeAddress = 0;
        memmove(v16, v33, (unsigned int)v30);
      }
      if ( v47[0] )
      {
        v34 = (const void *)v10[2].m128i_i64[0];
        if ( (unsigned __int64)v47[0] + v30 > W32UserProbeAddress || (char *)v47[0] + v30 <= v47[0] )
          *W32UserProbeAddress = 0;
        memmove(v47[0], v34, (unsigned int)v30);
      }
      if ( v47[1] )
      {
        v35 = (const void *)v10[2].m128i_i64[1];
        if ( (char *)v47[1] + v28 > (void *)W32UserProbeAddress || (char *)v47[1] + v28 <= v47[1] )
          *W32UserProbeAddress = 0;
        memmove(v47[1], v35, v28);
      }
      if ( v48[0] )
      {
        v36 = (const void *)v10[3].m128i_i64[0];
        if ( (unsigned __int64)v48[0] + v29 > W32UserProbeAddress || (char *)v48[0] + v29 <= v48[0] )
          *W32UserProbeAddress = 0;
        memmove(v48[0], v36, (unsigned int)v29);
      }
      v8 = 1;
    }
    else
    {
      v8 = 1;
    }
    FreeTmpBuffer(v11, v25, v26, v27);
  }
  return CharacterPlacementW & (unsigned int)-(v8 != 0);
}
