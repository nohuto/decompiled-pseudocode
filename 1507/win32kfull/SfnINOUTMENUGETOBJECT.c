/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0210720
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // r9
  __m128i *v23; // rcx
  unsigned __int64 v25; // [rsp+40h] [rbp-C8h]
  __int128 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  _QWORD v28[3]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[11]; // [rsp+80h] [rbp-88h] BYREF
  __m128i v30; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v31; // [rsp+E8h] [rbp-20h]
  int v32; // [rsp+118h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v12 = 0LL;
  memset(v29, 0, 0x48uLL);
  v29[0] = v12;
  LODWORD(v29[1]) = a2;
  v29[2] = a3;
  *(_OWORD *)&v29[3] = *(_OWORD *)a4;
  *(_OWORD *)&v29[5] = *(_OWORD *)(a4 + 16);
  v29[7] = a5;
  v29[8] = a6;
  v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v28;
  v28[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v14 = *(_QWORD *)(gptiCurrent + 440LL);
  v26 = *(_OWORD *)(v14 + 64);
  v27 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v15;
  if ( a1 )
    v16 = a1[33];
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v16;
  UserSessionSwitchLeaveCrit(v16, v13);
  EtwTraceBeginCallback(101LL);
  v17 = KeUserModeCallback(101LL, v29, 72LL, &a5, &v32);
  EtwTraceEndCallback(101LL);
  EnterCrit(1LL);
  ThreadUnlock1(v19, v18);
  v20 = *(_QWORD *)(gptiCurrent + 440LL);
  *(_OWORD *)(v20 + 64) = v26;
  *(_QWORD *)(v20 + 80) = v27;
  if ( v17 >= 0 && v32 == 24 )
  {
    v21 = (__int64 *)a5;
    if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
      v21 = (__int64 *)W32UserProbeAddress;
    v22 = *v21;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v22;
    v23 = (__m128i *)a5;
    if ( a5 + 24 < a5 || a5 + 24 > W32UserProbeAddress )
      v23 = (__m128i *)W32UserProbeAddress;
    v25 = v23[1].m128i_u64[0];
    v30 = *v23;
    v31 = v25;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v30, 8)) == 8 )
    {
      if ( (v25 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v25 + 8 > W32UserProbeAddress || v25 + 8 < v25 )
        *W32UserProbeAddress = 0;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)v25;
      return v22;
    }
  }
  return 0LL;
}
