/*
 * XREFs of ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003F720 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C003FA90 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0042CD0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bSwap(__int64 **this, __m128i **a2)
{
  __m128i *v3; // r11
  __int16 v5; // r8
  __m128i v6; // xmm2
  __int16 v7; // bx
  __int16 v8; // r10
  __int32 v9; // r8d
  __int32 v10; // r8d
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
  __int64 *v25; // rax
  __int64 v26; // rcx
  __m128i *v27; // rsi
  __m128i *v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-38h]
  __int32 v33; // [rsp+70h] [rbp+8h]

  v3 = *a2;
  v5 = *((_WORD *)*this + 7);
  v6 = **a2;
  v7 = (*a2)->m128i_i16[7] & 0x4000;
  v32 = (*a2)[1].m128i_i64[0];
  v8 = (*a2)->m128i_i16[7] & 0x8000 | v5 & 0x4000;
  v3->m128i_i64[0] = **this;
  HIWORD(v33) = v8;
  LOWORD(v33) = *((_WORD *)*this + 6);
  _InterlockedExchange(&v3->m128i_i32[3], v33);
  HIWORD(v33) = v5 & 0x8000 | v7;
  v3[1].m128i_i64[0] = (*this)[2];
  **this = v6.m128i_i64[0];
  LOWORD(v33) = _mm_srli_si128(v6, 8).m128i_i16[2];
  _InterlockedExchange((volatile __int32 *)*this + 3, v33);
  (*this)[2] = v32;
  v9 = *((_DWORD *)*this + 8);
  *((_DWORD *)*this + 8) = (*a2)[2].m128i_i32[0];
  (*a2)[2].m128i_i32[0] = v9;
  v10 = *((_DWORD *)*this + 9);
  *((_DWORD *)*this + 9) = (*a2)[2].m128i_i32[1];
  (*a2)[2].m128i_i32[1] = v10;
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
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
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
        v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v25 )
          v24 = *v25;
        v22[8] = (__int64)v22;
        v22[9] = (__int64)CleanUpRegion;
        if ( v24 )
        {
          v26 = *(_QWORD *)(v24 + 88);
          *v23 = v26;
          v22[7] = v24 + 88;
          if ( *(_QWORD *)(v26 + 8) != v24 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v26 + 8) = v23;
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
      v27 = *a2;
      v28 = v27 + 3;
      if ( v27 != (__m128i *)-48LL )
      {
        KeEnterCriticalRegion();
        v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v29 )
          v21 = *v29;
        v27[4].m128i_i64[0] = (__int64)v27;
        v27[4].m128i_i64[1] = (__int64)CleanUpRegion;
        if ( v21 )
        {
          v30 = *(_QWORD *)(v21 + 88);
          v28->m128i_i64[0] = v30;
          v27[3].m128i_i64[1] = v21 + 88;
          if ( *(_QWORD *)(v30 + 8) != v21 + 88 )
            __fastfail(3u);
          *(_QWORD *)(v30 + 8) = v28;
          *(_QWORD *)(v21 + 88) = v28;
        }
        else
        {
          v27[3].m128i_i64[1] = (__int64)v27[3].m128i_i64;
          v28->m128i_i64[0] = (__int64)v28;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return 1LL;
}
