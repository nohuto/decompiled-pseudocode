/*
 * XREFs of ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01D39D0
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01D3C34 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall CopyTouchInputListSorted(
        const struct tagTOUCHINPUTLIST *a1,
        struct tagTOUCHINPUTLIST *a2,
        __int64 a3,
        unsigned int *a4)
{
  __m128i *v6; // r14
  int v7; // r8d
  unsigned int v8; // edi
  __m128i v9; // xmm3
  __m128i v10; // xmm2
  __m128i v11; // xmm4
  __int64 v12; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // ebx
  unsigned int i; // edx
  __int64 v22; // r11
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __m128i v29; // [rsp+38h] [rbp-60h]

  v6 = (__m128i *)*((_QWORD *)a1 + 1);
  v7 = *((_DWORD *)a1 + 1);
  v8 = 1;
  while ( 2 )
  {
    if ( v7 )
    {
      v9 = *v6;
      v29 = *v6;
      v10 = v6[1];
      v11 = v6[2];
      if ( (v10.m128i_i32[1] & 0xFFFFFF00) != 0 || (_mm_cvtsi128_si32(_mm_srli_si128(v10, 8)) & 0xFFFFFFF8) != 0 )
      {
        v12 = 1004LL;
LABEL_5:
        UserSetLastError(v12);
        return 0LL;
      }
      v14 = (_mm_cvtsi128_si32(_mm_srli_si128(v10, 4)) & 0xF) - 4;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
          goto LABEL_15;
        v16 = v15 - 4;
        if ( !v16 )
        {
          v19 = 1;
          goto LABEL_19;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v19 = 2;
          goto LABEL_19;
        }
        if ( (unsigned int)(v17 - 1) < 2 )
        {
LABEL_15:
          v12 = RtlNtStatusToDosError(-1073741811);
          goto LABEL_5;
        }
        v18 = -1;
      }
      else
      {
        v18 = 3;
      }
      if ( v18 == -1 )
        goto LABEL_15;
      v19 = 4;
LABEL_19:
      if ( v8 != v19 )
      {
        if ( v8 == 1 )
        {
          v8 = v19;
        }
        else if ( v19 != 1 )
        {
          goto LABEL_15;
        }
      }
      v20 = *((_DWORD *)a2 + 1);
      for ( i = v20; ; --i )
      {
        if ( !i )
          goto LABEL_31;
        v22 = i - 1;
        v23 = *((_QWORD *)a2 + 1);
        v24 = *(_QWORD *)(v23 + 48 * v22 + 8);
        if ( v29.m128i_i64[1] >= v24
          && (v29.m128i_i64[1] != v24 || v10.m128i_i32[0] >= *(_DWORD *)(v23 + 48 * v22 + 16)) )
        {
          break;
        }
        v25 = 6LL * i;
        *(_OWORD *)(v23 + 8 * v25) = *(_OWORD *)(v23 + 48 * v22);
        *(_OWORD *)(v23 + 8 * v25 + 16) = *(_OWORD *)(v23 + 48 * v22 + 16);
        *(_OWORD *)(v23 + 8 * v25 + 32) = *(_OWORD *)(v23 + 48 * v22 + 32);
      }
      v26 = *((_QWORD *)a2 + 1) + 48LL * (i - 1);
      if ( v29.m128i_i64[1] != *(_QWORD *)(v26 + 8) || v10.m128i_i32[0] != *(_DWORD *)(v26 + 16) )
      {
LABEL_31:
        v27 = 6LL * i;
        v28 = *((_QWORD *)a2 + 1);
        *(__m128i *)(v28 + 8 * v27) = v9;
        *(__m128i *)(v28 + 8 * v27 + 16) = v10;
        *(__m128i *)(v28 + 8 * v27 + 32) = v11;
        *((_DWORD *)a2 + 1) = v20 + 1;
        --v7;
        v6 += 3;
        continue;
      }
      goto LABEL_15;
    }
    break;
  }
  if ( a4 )
    *a4 = v8;
  return 1LL;
}
