/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1C0208A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memset @ 0x1C015A380 (memset.c)
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
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // r9
  __m128i *v22; // rcx
  __int128 v24; // [rsp+60h] [rbp-F8h]
  __int64 v25; // [rsp+70h] [rbp-E8h]
  unsigned __int64 v26; // [rsp+88h] [rbp-D0h]
  _QWORD v27[4]; // [rsp+B0h] [rbp-A8h] BYREF
  _QWORD v28[10]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v29; // [rsp+120h] [rbp-38h]
  unsigned __int64 v30; // [rsp+130h] [rbp-28h]
  int v31; // [rsp+168h] [rbp+10h] BYREF

  if ( a1 )
    v12 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v12 = 0LL;
  memset(v28, 0, 0x48uLL);
  v28[0] = v12;
  LODWORD(v28[1]) = a2;
  v28[2] = a3;
  *(_OWORD *)&v28[3] = *(_OWORD *)a4;
  *(_OWORD *)&v28[5] = *(_OWORD *)(a4 + 16);
  v28[7] = a5;
  v28[8] = a6;
  v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v27;
  v27[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v13 = *(_QWORD *)(gptiCurrent + 432LL);
  v24 = *(_OWORD *)(v13 + 64);
  v25 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(v13 + 72) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v14;
  if ( a1 )
    v15 = a1[33];
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v15;
  if ( gdwInAtomicOperation )
  {
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v15, gdwInAtomicOperation);
  EtwTraceBeginCallback(102LL);
  v16 = KeUserModeCallback(102LL, v28, 72LL, &a5, &v31);
  EtwTraceEndCallback(102LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v18, v17);
  v19 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v19 + 64) = v24;
  *(_QWORD *)(v19 + 80) = v25;
  if ( v16 >= 0 && v31 == 24 )
  {
    v20 = (__int64 *)a5;
    if ( a5 + 8 < a5 || a5 + 8 > W32UserProbeAddress )
      v20 = (__int64 *)W32UserProbeAddress;
    v21 = *v20;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = (__m128i *)a5;
    if ( a5 + 24 < a5 || a5 + 24 > W32UserProbeAddress )
      v22 = (__m128i *)W32UserProbeAddress;
    v26 = v22[1].m128i_u64[0];
    v29 = *v22;
    v30 = v26;
    if ( _mm_cvtsi128_si32(_mm_srli_si128(v29, 8)) == 8 )
    {
      if ( (v26 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v26 + 8 > W32UserProbeAddress || v26 + 8 < v26 )
        *W32UserProbeAddress = 0;
      *(_QWORD *)(a4 + 24) = *(_QWORD *)v26;
      return v21;
    }
  }
  return 0LL;
}
