/*
 * XREFs of KeCpuSetReportParkedProcessors @ 0x140111400
 * Callers:
 *     PpmParkReportMask @ 0x1400D315C (PpmParkReportMask.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011131C (KeSetSystemAllowedCpuSets.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x1400841A8 (RtlWriteAcquireTickLock.c)
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1401115F4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall KeCpuSetReportParkedProcessors(unsigned __int16 *a1, unsigned __int8 a2)
{
  unsigned int v2; // r12d
  unsigned __int8 v3; // di
  unsigned __int16 *v4; // r13
  unsigned __int16 v5; // bx
  int v6; // ecx
  unsigned __int16 v7; // si
  int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  _QWORD *v13; // r12
  unsigned __int64 v14; // rax
  __int16 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // r9
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v30; // [rsp+24h] [rbp-124h]
  unsigned int v31; // [rsp+28h] [rbp-120h]
  __int64 v32; // [rsp+30h] [rbp-118h]
  _QWORD *v33; // [rsp+38h] [rbp-110h]
  __int64 v35; // [rsp+48h] [rbp-100h] BYREF
  int v36; // [rsp+50h] [rbp-F8h]
  _QWORD v37[20]; // [rsp+60h] [rbp-E8h]

  v2 = (unsigned __int16)KiActiveGroups;
  v3 = a2;
  v4 = a1;
  v31 = (unsigned __int16)KiActiveGroups;
  _m_prefetchw(KiCpuSetAffinities);
  _m_prefetchw(KiCpuSetAffinitiesShadow);
  v5 = 0;
  if ( a1 )
    KxAcquireSpinLock(&KiCpuSetLock);
  v30 = 0;
  v6 = 0;
  v7 = 0;
  if ( v2 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = qword_1403AA618[v7];
      if ( v4 )
      {
        if ( v7 >= *v4 )
          v18 = 0LL;
        else
          v18 = *(_QWORD *)&v4[4 * v7 + 4];
        v10 = v9 ^ v18;
        v37[v7] = v10;
        if ( KiNonParkedCpuSets[v7] == v10 )
          goto LABEL_47;
      }
      else
      {
        v10 = KiNonParkedCpuSets[v7];
        v37[v7] = v10;
      }
      v11 = v9 & v10;
      v33 = KiCpuSetAffinitiesShadow;
      v6 = 1;
      v12 = v9 ^ v9 & v10;
      v30 = 1;
      if ( (v9 & v10) != 0 )
      {
        v13 = KiCpuSetAffinitiesShadow;
        do
        {
          _BitScanForward64(&v14, v11);
          v36 = v14;
          v11 ^= 1LL << v14;
          v13[(unsigned int)((v8 << 6) + v14)] = 1LL << v14;
        }
        while ( v11 );
        v2 = v31;
        v6 = 1;
      }
      if ( !v12 )
        goto LABEL_12;
      v19 = qword_1403AC7C8[2 * v7];
      v32 = v9 ^ v19;
      if ( ((v9 ^ v19) & v10) == 0 || (v19 & v10) == 0 )
      {
        v19 = 0LL;
        v32 = 0LL;
      }
      v20 = v9 ^ KiSystemAllowedCpuSets[v7];
      v21 = v10 & v20;
      if ( v20 )
      {
        if ( v21 )
        {
          v22 = v12 & v20;
          v12 ^= v22;
          if ( v22 )
          {
            do
            {
              _BitScanForward64((unsigned __int64 *)&v23, v22);
              v24 = v21;
              v22 &= ~(1LL << v23);
              if ( _bittest64(&v19, (unsigned int)v23) )
              {
                if ( (v19 & v21) != 0 )
                  v24 = v19 & v21;
              }
              else if ( (v32 & v21) != 0 )
              {
                v24 = v32 & v21;
              }
              v33[(unsigned int)((v8 << 6) + v23)] = v24;
            }
            while ( v22 );
            v4 = a1;
          }
        }
      }
      if ( v12 )
      {
        v25 = v9 & ~v21;
        if ( (v25 & v10) == 0 )
          v25 = v9;
        v26 = v8 << 6;
        do
        {
          _BitScanForward64((unsigned __int64 *)&v27, v12);
          v28 = v25;
          v12 &= ~(1LL << v27);
          if ( _bittest64(&v19, (unsigned int)v27) )
          {
            if ( (v19 & v25 & v10) != 0 )
              v28 = v19 & v25;
          }
          else if ( (v32 & v25 & v10) != 0 )
          {
            v28 = v32 & v25;
          }
          v33[(unsigned int)(v26 + v27)] = v28;
        }
        while ( v12 );
        v2 = v31;
        v4 = a1;
      }
LABEL_47:
      v6 = v30;
LABEL_12:
      v8 = ++v7;
      if ( v7 >= v2 )
      {
        v3 = a2;
        break;
      }
    }
  }
  v35 = 0LL;
  if ( v6 )
  {
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    if ( v2 )
    {
      do
      {
        v16 = v5;
        v5 += v15;
        KiNonParkedCpuSets[v16] = v37[v16];
      }
      while ( v5 < v2 );
    }
    memmove(KiCpuSetAffinities, KiCpuSetAffinitiesShadow, (unsigned int)KiCpuSetAffinitySize);
    ++KiCpuSetSequence;
    KiUpdateGlobalCpuSetConfiguration(&v35);
  }
  KxReleaseSpinLock(&KiCpuSetLock);
  return KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)&v35, v3);
}
