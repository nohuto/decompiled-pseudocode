/*
 * XREFs of PpmEstimateIdleDuration @ 0x140161464
 * Callers:
 *     PpmIdleSelectStates @ 0x140160AB0 (PpmIdleSelectStates.c)
 * Callees:
 *     KeEstimateClockTickDuration @ 0x1401615C0 (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 a7,
        int *a8)
{
  unsigned __int64 v9; // rdi
  int v13; // r8d
  char v14; // dl
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int i; // ecx
  unsigned __int64 v19; // rbx
  ULONG v20; // eax
  unsigned __int64 *result; // rax
  char v22; // r14
  __int64 *v23; // rdx
  __int64 v24; // r9
  unsigned __int16 v25; // cx
  __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r8
  unsigned __int16 j; // r10
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  _QWORD v36[21]; // [rsp+58h] [rbp-A8h] BYREF

  v9 = -1LL;
  v13 = 8;
  v14 = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 524LL);
  *a8 = 0;
  v15 = *a8;
  if ( *(_BYTE *)(a1 + 33) )
    v15 = 8;
  *a8 = v15;
  if ( a2 )
    *a8 |= 4u;
  LOBYTE(v13) = a2;
  KeEstimateClockTickDuration(a1, v14, v13, a3, (__int64)&v34, a7);
  v16 = *(_DWORD *)(a1 + 11556);
  v17 = 0;
  for ( i = v16; i; v17 += KeMaximumIncrement )
    i >>= 4;
  v19 = v17;
  if ( !a2 && v16 )
  {
    v20 = KeMaximumIncrement / (v16 + 1);
    if ( !v20 )
      v20 = 1;
    v9 = v20;
  }
  if ( v34 <= v9 )
  {
    v9 = v34;
    v19 = v34;
  }
  else
  {
    if ( v34 < v17 )
      v19 = v34;
    *a8 |= 1u;
  }
  if ( PpmIdleCheckIdleDurationExpiration )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      v35 = 1310721LL;
      v22 = 0;
      memset(v36, 0, 0xA0uLL);
      if ( KeNumberNodes )
      {
        v23 = KeNodeBlock;
        v24 = (unsigned __int16)KeNumberNodes;
        do
        {
          v25 = *(_WORD *)(*v23 + 144);
          v26 = *(_QWORD *)(*v23 + 72);
          if ( (unsigned __int16)v35 <= v25 )
            LOWORD(v35) = v25 + 1;
          v36[v25] |= v26;
          if ( v26 )
            v22 = 1;
          ++v23;
          --v24;
        }
        while ( v24 );
        if ( v22 )
        {
          v27 = v36[0];
          v28 = 0LL;
          for ( j = 0; ; v27 = v36[j] )
          {
            while ( v27 )
            {
              _BitScanForward64(&v30, v27);
              v27 &= ~(1LL << v30);
              v31 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * j + (unsigned __int8)v30];
              if ( (unsigned int)v31 >= (unsigned int)KeNumberProcessors_0 )
              {
                v32 = 0LL;
              }
              else
              {
                _mm_lfence();
                v32 = KiProcessorBlock[v31];
              }
              v33 = *(_QWORD *)(v32 + 23848);
              if ( v33 != -1LL && v33 > v28 )
                v28 = v33;
            }
            if ( ++j >= (unsigned int)(unsigned __int16)v35 )
              break;
          }
          if ( v28 && a3 + v19 > v28 )
          {
            *a8 |= 0x2000u;
            v19 = v28 > a3 ? (unsigned int)(v28 - a3) : 1LL;
            if ( v19 < v9 )
              v9 = v19;
          }
        }
      }
    }
  }
  if ( v9 < a4 )
  {
    *a8 |= 0x1000u;
    v9 = a4;
    v19 = a4;
  }
  *a6 = v19;
  result = a5;
  *a5 = v9;
  return result;
}
