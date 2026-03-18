/*
 * XREFs of ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0027FA0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0029830 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C002CD50 (-bCompute@DC@@QEAAHXZ.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C003E934 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003EA98 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C007C780 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bSwap(__int64 **this, __m128i **a2)
{
  __m128i *v3; // r9
  __m128i v5; // xmm2
  __int64 v6; // xmm1_8
  __int64 *v7; // rcx
  __m128i *v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rbx
  BOOL v12; // ebp
  BOOL v13; // r15d
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __m128i *v16; // rbx
  __int64 v17; // rcx
  __m128i **v18; // rax
  __m128i *v19; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v21; // rdi
  __int64 *v22; // r14
  _QWORD *v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 *v27; // rax
  __int64 v28; // rcx
  __m128i *v29; // rsi
  __m128i *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int32 v36; // [rsp+70h] [rbp+8h]

  v3 = *a2;
  v5 = **a2;
  v6 = (*a2)[1].m128i_i64[0];
  v3->m128i_i64[0] = **this;
  HIWORD(v36) = v3->m128i_i16[7];
  LOWORD(v36) = *((_WORD *)*this + 6);
  _InterlockedExchange(&v3->m128i_i32[3], v36);
  v3[1].m128i_i64[0] = (*this)[2];
  **this = v5.m128i_i64[0];
  v7 = *this;
  LOWORD(v36) = _mm_srli_si128(v5, 8).m128i_i16[2];
  HIWORD(v36) = *((_WORD *)v7 + 7);
  _InterlockedExchange((volatile __int32 *)v7 + 3, v36);
  (*this)[2] = v6;
  v8 = *a2;
  v9 = *this;
  v10 = *((unsigned int *)*this + 8);
  *((_DWORD *)*this + 8) = v8[2].m128i_i32[0];
  (*a2)[2].m128i_i32[0] = v10;
  v11 = *this + 6;
  v12 = *v11 == (_QWORD)v11;
  v13 = (*a2)[3].m128i_i64[0] == (_QWORD)(*a2 + 3);
  if ( *this != (__int64 *)-48LL )
  {
    KeEnterCriticalRegion();
    v14 = *v11;
    v15 = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v15 != v11 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v11[1] = v11;
    *v11 = v11;
    KeLeaveCriticalRegion();
  }
  v16 = *a2 + 3;
  if ( *a2 != (__m128i *)-48LL )
  {
    KeEnterCriticalRegion();
    v17 = v16->m128i_i64[0];
    v18 = (__m128i **)v16->m128i_i64[1];
    if ( *(__m128i **)(v16->m128i_i64[0] + 8) != v16 || *v18 != v16 )
      __fastfail(3u);
    *v18 = (__m128i *)v17;
    *(_QWORD *)(v17 + 8) = v18;
    v16->m128i_i64[1] = (__int64)v16;
    v16->m128i_i64[0] = (__int64)v16;
    KeLeaveCriticalRegion();
  }
  v19 = (__m128i *)*this;
  *this = (__int64 *)*a2;
  *a2 = v19;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v9, v10);
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v21 = 0LL;
    if ( !v12 )
    {
      v22 = *this;
      v23 = v22 + 6;
      if ( v22 != (__int64 *)-48LL )
      {
        KeEnterCriticalRegion();
        v24 = 0LL;
        v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v25, v26);
        if ( v27 )
          v24 = *v27;
        v22[8] = (__int64)v22;
        v22[9] = (__int64)CleanUpRegion;
        if ( v24 )
        {
          v28 = *(_QWORD *)(v24 + 88);
          *v23 = v28;
          v22[7] = v24 + 88;
          if ( *(_QWORD *)(v28 + 8) != v24 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v28 + 8) = v23;
          *(_QWORD *)(v24 + 88) = v23;
        }
        else
        {
          v22[7] = (__int64)(v22 + 6);
          *v23 = v23;
        }
        KeLeaveCriticalRegion();
      }
    }
    if ( !v13 )
    {
      v29 = *a2;
      v30 = v29 + 3;
      if ( v29 != (__m128i *)-48LL )
      {
        KeEnterCriticalRegion();
        v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v31, v32);
        if ( v33 )
          v21 = *v33;
        v29[4].m128i_i64[0] = (__int64)v29;
        v29[4].m128i_i64[1] = (__int64)CleanUpRegion;
        if ( v21 )
        {
          v34 = *(_QWORD *)(v21 + 88);
          v30->m128i_i64[0] = v34;
          v29[3].m128i_i64[1] = v21 + 88;
          if ( *(_QWORD *)(v34 + 8) != v21 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v34 + 8) = v30;
          *(_QWORD *)(v21 + 88) = v30;
        }
        else
        {
          v29[3].m128i_i64[1] = (__int64)v29[3].m128i_i64;
          v30->m128i_i64[0] = (__int64)v30;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return 1LL;
}
