/*
 * XREFs of ?NtUserfnHkINLPMSG@@YA_JHK_KPEAUtagMSG@@@Z @ 0x1C00EE520
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00EE380 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 */

__int64 __fastcall NtUserfnHkINLPMSG(int a1, unsigned int a2, __int64 a3, struct tagMSG *a4)
{
  struct tagMSG *v7; // r10
  __m128i v8; // xmm2
  __int128 v9; // xmm3
  int v10; // ecx
  __int64 v11; // rdx
  __int64 result; // rax
  _DWORD v13[6]; // [rsp+30h] [rbp-58h] BYREF
  __m128i v14; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+58h] [rbp-30h]
  __int128 v16; // [rsp+68h] [rbp-20h]

  v7 = (struct tagMSG *)W32UserProbeAddress;
  if ( (unsigned __int64)a4 < W32UserProbeAddress )
    v7 = a4;
  v8 = *(__m128i *)v7;
  v14 = *(__m128i *)v7;
  v15 = *((_OWORD *)v7 + 1);
  v9 = *((_OWORD *)v7 + 2);
  v16 = v9;
  if ( a1 == 3 && ((v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)), v10 == 576) || v10 == 281) )
  {
    v11 = gptiCurrent;
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(gptiCurrent + 616LL);
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 624LL);
  }
  else
  {
    v11 = gptiCurrent;
  }
  result = *(_QWORD *)(*(_QWORD *)v11 + 608LL);
  if ( !result )
    goto LABEL_13;
  while ( 1 )
  {
    if ( *(_QWORD *)(result + 40) )
    {
      result = *(_QWORD *)(result + 40);
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(result + 64) & 1) != 0 )
      break;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 416LL) + 8LL * (*(_DWORD *)(result + 48) + 1) + 32);
LABEL_10:
    if ( !result || (*(_DWORD *)(result + 64) & 0x80u) == 0 )
      goto LABEL_12;
  }
  result = 0LL;
LABEL_12:
  result = xxxCallHook2(result, a2, a3, v14.m128i_i32, v13, 0);
  v9 = v16;
  v8 = v14;
LABEL_13:
  if ( a1 == 3 )
  {
    *(__m128i *)a4 = v8;
    *((_OWORD *)a4 + 1) = v15;
    *((_OWORD *)a4 + 2) = v9;
  }
  return result;
}
