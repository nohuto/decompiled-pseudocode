/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180092AAC
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800911E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180127408 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  __int64 v1; // rsi
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __m128i v8; // xmm1
  int v9; // ebp
  __int64 v10; // xmm5_8
  __m128 v11; // xmm3
  unsigned int v12; // r14d
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // xmm0_8

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 16LL))(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = *((_QWORD *)this + 34);
  v4 = *((unsigned int *)this + 71);
  *((_BYTE *)this + 64) = 0;
  v5 = *(unsigned int *)(v3 + 48);
  if ( v4 >= v5 || *((unsigned int *)this + 70) > v5 - v4 || (v6 = *(_QWORD *)(v3 + 56), v7 = v6 + v4, !v6) )
    v7 = 0LL;
  if ( !v7 )
    goto LABEL_18;
  v8 = *(__m128i *)(v7 + 16);
  v9 = *(_DWORD *)(v7 + 56);
  v10 = *(_QWORD *)(v7 + 48);
  v11 = *(__m128 *)(v7 + 32);
  v12 = _mm_cvtsi128_si32(v8);
  v13 = v12 + 60LL;
  v14 = HIDWORD(_mm_srli_si128(*(__m128i *)v7, 8).m128i_u64[0]);
  v15 = v14 + v13;
  if ( v14 + v13 < v13 )
    goto LABEL_18;
  v16 = HIDWORD(v8.m128i_i64[0]) + v15;
  if ( v16 >= v15
    && *((unsigned int *)this + 70) >= v16
    && (v17 = (unsigned int)v14 / 0x94, v18 = v17 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)), v18 >= v17)
    && ((v19 = _mm_srli_si128(v8, 8).m128i_u64[0], HIDWORD(v19) == -1)
     || (unsigned int)v14 >= 0x94 && HIDWORD(v19) <= (unsigned int)(v14 - 148)) )
  {
    *((_OWORD *)this + 18) = *(_OWORD *)v7;
    *((_QWORD *)this + 45) = v12;
    *((__m128i *)this + 19) = v8;
    *((_QWORD *)this + 44) = v7 + 60;
    *((_DWORD *)this + 105) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 4));
    *((__m128 *)this + 20) = v11;
    *((_QWORD *)this + 46) = v13 + v7;
    *((_QWORD *)this + 48) = v15 + v7;
    *((_DWORD *)this + 102) = v10;
    *((_QWORD *)this + 42) = v10;
    *((_BYTE *)this + 424) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v11, 8)) != 0;
    *((_DWORD *)this + 101) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    *((_DWORD *)this + 103) = HIDWORD(v10);
    *((_DWORD *)this + 104) = v9;
    *((_DWORD *)this + 86) = v9;
    *((_QWORD *)this + 47) = v14;
    *((_QWORD *)this + 49) = HIDWORD(v8.m128i_i64[0]);
    *((_DWORD *)this + 100) = v18;
  }
  else
  {
LABEL_18:
    *((_DWORD *)this + 105) = -1;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 46) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_BYTE *)this + 424) = 0;
    *(_QWORD *)((char *)this + 412) = 0LL;
    *((_DWORD *)this + 102) = 0;
  }
  *((_BYTE *)this + 426) = (unsigned int)(*((_QWORD *)this + 47) / 0x94uLL) < 0x15E;
  if ( *((_BYTE *)this + 425) )
    CPrimitiveGroup::BuildHeatMap(this);
}
