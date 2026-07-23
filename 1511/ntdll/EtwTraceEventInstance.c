/*
 * XREFs of EtwTraceEventInstance @ 0x1800F3D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     EtwpTraceUmEvent @ 0x18004CC90 (EtwpTraceUmEvent.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall EtwTraceEventInstance(int a1, __m128i *a2, __int64 *a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // edi
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  int v9; // ecx
  __int64 v10; // r10
  __int64 v11; // r8
  unsigned int v12; // eax
  NTSTATUS v14; // eax
  __m128i Fields; // [rsp+20h] [rbp-E0h] BYREF
  __m256i v17; // [rsp+30h] [rbp-D0h]
  int v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+54h] [rbp-ACh]
  __int128 v20; // [rsp+58h] [rbp-A8h]
  __int8 *v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+74h] [rbp-8Ch]

  v4 = 0;
  if ( !a2 )
    return 87LL;
  if ( !a3 )
    return 87LL;
  v6 = a2->m128i_u16[0];
  if ( v6 < 0x38 )
    return 87LL;
  v7 = a2[1];
  Fields = *a2;
  v8 = a2[2];
  *(__m128i *)v17.m256i_i8 = v7;
  *(__m128i *)&v17.m256i_u64[2] = v8;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v17.m256i_i32[7] = v9;
  if ( (v9 & 0x80000) != 0 )
  {
    v9 &= ~0x80000u;
    v17.m256i_i32[7] = v9;
  }
  v10 = *a3;
  if ( !*a3 )
    return 87LL;
  v18 = *((_DWORD *)a3 + 2);
  *(_OWORD *)&v17.m256i_u64[1] = *(_OWORD *)(v10 + 8);
  if ( a4 )
  {
    v11 = *a4;
    if ( !*a4 )
      return 87LL;
    v19 = *((_DWORD *)a4 + 2);
    v20 = *(_OWORD *)(v11 + 8);
  }
  else
  {
    v19 = 0;
    v20 = 0uLL;
  }
  if ( (v9 & 0x100000) == 0 )
  {
    v23 = 0;
    v17.m256i_i32[7] = v9 | 0x100000;
    Fields.m128i_i16[0] = 88;
    v21 = &a2[3].m128i_i8[8];
    v22 = v6 - 56;
LABEL_16:
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)EtwpTraceUmEvent(a1, (unsigned __int16 *)&Fields, 0x48u, -1072365568);
    }
    else
    {
      v14 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x800u, 0x48u, &Fields);
      if ( !v14 )
        return v4;
      return RtlNtStatusToDosError(v14);
    }
  }
  v12 = v6 - 56;
  if ( (((_BYTE)v6 - 56) & 0xF) == 0 && v12 <= 0x100 )
  {
    memmove(&v21, &a2[3].m128i_u64[1], v12);
    Fields.m128i_i16[0] = v6 + 16;
    goto LABEL_16;
  }
  return 87LL;
}
