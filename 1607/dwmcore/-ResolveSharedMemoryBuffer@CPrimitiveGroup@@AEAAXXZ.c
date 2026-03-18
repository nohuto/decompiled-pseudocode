/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18004CC70
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CF6C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180144A84 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ebp
  __m128i v10; // xmm1
  __int64 v11; // xmm5_8
  __m128 v12; // xmm3
  unsigned int v13; // eax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  v4 = *((_QWORD *)this + 44);
  v5 = *((unsigned int *)this + 91);
  *((_BYTE *)this + 144) = 0;
  v6 = *(unsigned int *)(v4 + 120);
  if ( v5 >= v6 || *((unsigned int *)this + 90) > v6 - v5 || (v7 = *(_QWORD *)(v4 + 128), v8 = v7 + v5, !v7) )
    v8 = 0LL;
  if ( !v8 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v8 + 56);
  v10 = *(__m128i *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 48);
  v12 = *(__m128 *)(v8 + 32);
  v13 = _mm_cvtsi128_si32(v10);
  v14 = HIDWORD(_mm_srli_si128(*(__m128i *)v8, 8).m128i_u64[0]);
  v15 = HIDWORD(_mm_srli_si128(v10, 8).m128i_u64[0]);
  v16 = v13 + 60LL;
  v17 = v13;
  v18 = v14 + v16;
  if ( v14 + v16 < v16 )
    goto LABEL_18;
  v19 = v18 + HIDWORD(v10.m128i_i64[0]);
  if ( v19 >= v18
    && *((unsigned int *)this + 90) >= v19
    && (v20 = (unsigned int)v14 / 0x94, v21 = v20 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)), v21 >= v20)
    && ((_DWORD)v15 == -1 || (unsigned int)v14 >= 0x94 && (unsigned int)v15 <= (int)v14 - 148) )
  {
    *((_OWORD *)this + 23) = *(_OWORD *)v8;
    *((_QWORD *)this + 55) = v17;
    *((__m128i *)this + 24) = v10;
    *((_QWORD *)this + 54) = v8 + 60;
    *((_DWORD *)this + 125) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 4));
    *((__m128 *)this + 25) = v12;
    *((_QWORD *)this + 56) = v16 + v8;
    *((_QWORD *)this + 58) = v18 + v8;
    *((_DWORD *)this + 122) = v11;
    *((_QWORD *)this + 52) = v11;
    *((_BYTE *)this + 504) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 8)) != 0;
    *((_DWORD *)this + 121) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    *((_DWORD *)this + 123) = HIDWORD(v11);
    *((_DWORD *)this + 124) = v9;
    *((_DWORD *)this + 106) = v9;
    *((_QWORD *)this + 57) = v14;
    *((_QWORD *)this + 59) = HIDWORD(v10.m128i_i64[0]);
    *((_DWORD *)this + 120) = v21;
  }
  else
  {
LABEL_18:
    *((_DWORD *)this + 125) = -1;
    *((_QWORD *)this + 45) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_BYTE *)this + 504) = 0;
    *(_QWORD *)((char *)this + 492) = 0LL;
    *((_DWORD *)this + 122) = 0;
  }
  *((_BYTE *)this + 506) = (unsigned int)(*((_QWORD *)this + 57) / 0x94uLL) < 0x15E;
  if ( *((_BYTE *)this + 505) )
    CPrimitiveGroup::BuildHeatMap(this);
}
