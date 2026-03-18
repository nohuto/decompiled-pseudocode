/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C002D710
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002BDE0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C002DD1C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0036790 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002D364 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C002D9C0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002E150 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C002E660 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // r11
  struct RGNOBJ *v6; // r14
  RGNOBJ *v7; // rsi
  unsigned int v8; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __m128i v18; // xmm1
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // xmm0_8
  unsigned __int64 v21; // rax
  LONG v22; // r8d
  unsigned __int64 v23; // xmm1_8
  LONG v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r11
  __int64 v28; // r8
  struct _RECTL v29; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  v8 = 1;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v9 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 160 )
    {
      v10 = *(_DWORD **)a3;
      if ( v9[22] <= *(_DWORD *)(*(_QWORD *)a3 + 88LL) && v9[24] >= v10[24] && v9[23] <= v10[23] && v9[25] >= v10[25] )
      {
        v11 = 216;
        if ( a4 == 1 )
          v6 = a3;
        v12 = *(_DWORD *)(v4 + 24);
        v13 = *(_QWORD *)v6;
        v14 = *(unsigned int *)(*(_QWORD *)v6 + 80LL);
        if ( (v12 >= (unsigned int)v14 || *(_DWORD *)(v13 + 24) <= 0xD8u)
          && (v12 <= 0xD8 || *(_DWORD *)(v13 + 24) > 0xD8u) )
        {
          memmove((void *)(v4 + 80), (const void *)(*(_QWORD *)v6 + 80LL), v14 - 80);
          *(_QWORD *)(*(_QWORD *)v7 + 40LL) = *(_DWORD *)(*(_QWORD *)v6 + 40LL)
                                            - *(_DWORD *)v6
                                            - 104
                                            + *(_QWORD *)v7
                                            + 104LL;
LABEL_13:
          if ( *(_DWORD *)(*(_QWORD *)v7 + 84LL) != 1 )
            return (unsigned int)(*(_DWORD *)(*(_QWORD *)v7 + 80LL) > 0xA0u) + 2;
          return v8;
        }
        if ( (unsigned int)v14 > 0xD8 )
          v11 = *(_DWORD *)(*(_QWORD *)v6 + 80LL);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29, v11);
        if ( *(_QWORD *)&v29.left )
        {
          RGNOBJ::vCopy((RGNOBJ *)&v29, v6);
          RGNOBJ::vSwap(v7, (struct RGNOBJ *)&v29);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
          goto LABEL_13;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
LABEL_49:
        v28 = *(_QWORD *)v7;
        *(_DWORD *)(v28 + 80) = 120;
        *(_QWORD *)(v28 + 84) = 1LL;
        *(_QWORD *)(v28 + 92) = 0LL;
        result = 0LL;
        *(_DWORD *)(v28 + 100) = 0;
        *(_DWORD *)(v28 + 104) = 0;
        *(_DWORD *)(v28 + 108) = 0x80000000;
        *(_QWORD *)(v28 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v28 + 40) = v28 + 120;
        return result;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160 && RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 == 1 )
        v5 = v6;
      if ( !(unsigned int)RGNOBJ::bCopy(v7, v5) )
        goto LABEL_49;
      this = v7;
      return RGNOBJ::iComplexity(this);
    }
  }
  if ( a4 != 1
    || (v16 = *(_QWORD *)v6, *(_DWORD *)(*(_QWORD *)v6 + 80LL) != 160)
    || (v17 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160) )
  {
    if ( (unsigned int)RGNOBJ::bMerge(v7, v6, v5, *((_BYTE *)&gafjRgnOp + a4)) )
      goto LABEL_13;
    goto LABEL_49;
  }
  v18 = *(__m128i *)(v16 + 88);
  v19 = *(_QWORD *)(v17 + 88);
  v20 = _mm_srli_si128(*(__m128i *)(v17 + 88), 8).m128i_u64[0];
  v21 = *(_QWORD *)(v16 + 88);
  v22 = v19;
  v23 = _mm_srli_si128(v18, 8).m128i_u64[0];
  if ( (int)v21 > (int)v19 )
    v22 = v21;
  v24 = v20;
  v29.left = v22;
  if ( (int)v23 < (int)v20 )
    v24 = v23;
  v25 = HIDWORD(v21);
  v26 = HIDWORD(v19);
  v29.right = v24;
  if ( (int)v25 > (int)v26 )
    LODWORD(v26) = v25;
  v27 = HIDWORD(v20);
  v29.top = v26;
  if ( SHIDWORD(v23) < SHIDWORD(v20) )
    LODWORD(v27) = HIDWORD(v23);
  v29.bottom = v27;
  if ( (int)v26 >= (int)v27 || v22 >= v24 )
  {
    *(_DWORD *)(v4 + 80) = 120;
    *(_QWORD *)(v4 + 84) = 1LL;
    *(_QWORD *)(v4 + 92) = 0LL;
    *(_DWORD *)(v4 + 100) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 108) = 0x80000000;
    *(_QWORD *)(v4 + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(v4 + 40) = v4 + 120;
  }
  else
  {
    RGNOBJ::vSet(v7, &v29);
  }
  return 2LL;
}
