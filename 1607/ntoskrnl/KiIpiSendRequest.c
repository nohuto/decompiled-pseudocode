/*
 * XREFs of KiIpiSendRequest @ 0x1400DE980
 * Callers:
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KiIpiSendPacket @ 0x1400C68B8 (KiIpiSendPacket.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiIpiSendRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  unsigned int v7; // r12d
  unsigned int *v8; // r13
  __int64 v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r15d
  unsigned __int64 v20; // rbx
  __int64 result; // rax
  unsigned int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  unsigned __int16 v26; // r11
  unsigned __int64 v27; // r9
  _QWORD *v28; // r15
  int v29; // edi
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r8
  signed __int64 *v34; // rdx
  signed __int64 v35; // rax
  signed __int64 v36; // rcx
  unsigned int v37; // ecx
  char v38; // r8
  __int64 v39; // rcx
  char v40; // al
  int *v41; // rdx
  __int64 v42; // rcx
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // ax
  __int64 v45; // rcx
  unsigned int v46; // [rsp+20h] [rbp-E0h]
  unsigned int v47; // [rsp+24h] [rbp-DCh]
  unsigned int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+2Ch] [rbp-D4h]
  int v50; // [rsp+30h] [rbp-D0h]
  unsigned int v51; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h]
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD v57[21]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v58[44]; // [rsp+110h] [rbp+10h] BYREF

  v46 = a2;
  v7 = a2;
  i = 0;
  v8 = (unsigned int *)a1;
  if ( a2 )
  {
    v55 = KeActiveProcessors[0];
    if ( LOWORD(KeActiveProcessors[0]) )
      memmove(v57, qword_1403AA618, 8LL * LOWORD(KeActiveProcessors[0]));
    if ( v7 == 1 )
    {
      v9 = (unsigned int)KiProcessorIndexToNumberMappingTable[v8[9]] >> 6;
      if ( (unsigned __int16)v55 > (unsigned int)v9 )
      {
        v10 = &v57[v9];
        v11 = *v10;
        _bittestandreset64(&v11, KiProcessorIndexToNumberMappingTable[v8[9]] & 0x3F);
        *v10 = v11;
      }
    }
    v12 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      LOWORD(v13) = KeSleepingProcessors;
      LODWORD(v12) = a6 & 0x7FFFFFFF;
      v14 = 0;
      if ( (_WORD)KeSleepingProcessors )
      {
        while ( !qword_140307BE8[v14] )
        {
          if ( ++v14 >= (unsigned __int16)KeSleepingProcessors )
            goto LABEL_20;
        }
        v7 = 0;
        v46 = 0;
        v15 = 0;
        if ( (unsigned __int16)v55 < (unsigned __int16)KeSleepingProcessors )
          LOWORD(v13) = v55;
        HIWORD(v55) = 20;
        if ( (_WORD)v13 )
        {
          v15 = v13;
          v16 = 0LL;
          v13 = (unsigned __int16)v13;
          do
          {
            v17 = qword_140307BE8[v16++];
            *(_QWORD *)((char *)&v55 + v16 * 8) &= ~v17;
            --v13;
          }
          while ( v13 );
        }
        for ( ; v15 < (unsigned __int16)v55; v57[v45] = v57[v45] )
          v45 = v15++;
        for ( i = 0; v15 < HIWORD(v55); v57[v18] = 0LL )
          v18 = v15++;
      }
    }
  }
  else
  {
    v43 = *a3;
    v44 = a3[1];
    LOWORD(v55) = v43;
    HIWORD(v55) = v44;
    if ( v43 )
      memmove(v57, a3 + 4, 8LL * v43);
    v12 = a6;
  }
LABEL_20:
  v19 = (unsigned __int16)KeNumberNodes;
  v8[2881] = (unsigned __int16)KeNumberNodes;
  v58[0] = 1310721;
  v20 = v12 & 0xF | ((_QWORD)a4 << 16) | ((unsigned __int64)a5 << 8);
  v51 = v8[9];
  v8[2880] = 1;
  memset(&v58[1], 0, 0xA4uLL);
  v49 = 0;
  result = 0LL;
  v22 = 0;
  v48 = 0;
  v23 = 0;
  v47 = 0;
  v24 = 0;
  v50 = 0;
  if ( v19 )
  {
    do
    {
      v25 = KeNodeBlock[v22];
      v26 = *(_WORD *)(v25 + 144);
      if ( (unsigned __int16)v55 > v26 && (v27 = v57[v26] & *(_QWORD *)(v25 + 136), (v54 = v27) != 0) )
      {
        v28 = 0LL;
        v29 = v26;
        v30 = v57[v26] & *(_QWORD *)(v25 + 136);
        while ( v30 )
        {
LABEL_25:
          _BitScanForward64(&v31, v30);
          v29 = v26;
          v30 &= ~(1LL << v31);
          v32 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v26 + (unsigned __int8)v31];
          v33 = KiProcessorBlock[v32];
          _m_prefetchw((const void *)(v33 + 26944));
          v34 = (signed __int64 *)(v33 + ((v51 + 506LL) << 6));
          _m_prefetchw(v34);
          if ( !v28 )
          {
            v28 = v34 + 7;
            *((_DWORD *)v34 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v27 - ((v27 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v27 - ((v27 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v34[6] = (signed __int64)v28;
          if ( v12 == 5 )
          {
            *((_OWORD *)v34 + 1) = *a4;
            *((_OWORD *)v34 + 2) = a4[1];
          }
          v34[1] = v20;
          v35 = *(_QWORD *)(v33 + 26944);
          do
          {
            v36 = v35;
            *v34 = v35;
            v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v33 + 26944), (signed __int64)v34, v35);
          }
          while ( v35 != v36 );
          if ( v35 )
          {
            v27 = v54;
            v24 = 1;
            v49 = 1;
          }
          else
          {
            v47 = 1;
            v37 = KiProcessorIndexToNumberMappingTable[v32];
            v38 = v37 & 0x3F;
            v39 = v37 >> 6;
            if ( LOWORD(v58[0]) <= (unsigned int)v39 )
              LOWORD(v58[0]) = v39 + 1;
            v27 = v54;
            v40 = v38;
            v24 = v49;
            *(_QWORD *)&v58[2 * v39 + 2] |= 1LL << v40;
          }
        }
        while ( ++v26 < (unsigned int)(v29 + 1) )
        {
          v30 = *(_QWORD *)(8LL * v26 + 8);
          if ( v30 )
            goto LABEL_25;
        }
        LOWORD(v19) = KeNumberNodes;
        v22 = v48;
        v23 = v50;
      }
      else
      {
        v50 = ++v23;
      }
      v48 = ++v22;
    }
    while ( v22 < (unsigned __int16)v19 );
    v8 = (unsigned int *)a1;
    if ( v23 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11524), -v23) - v23);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11520) = 0;
        return result;
      }
    }
    result = v47;
    v7 = v46;
  }
  if ( v12 == 5 || !v24 )
  {
    if ( v7 - 1 <= 1 )
      ++v8[6275];
    else
      ++v8[6276];
    v41 = &v55;
    v42 = v7;
    return HalRequestIpi(v42, v41);
  }
  if ( (_DWORD)result )
  {
    ++v8[6276];
    v41 = v58;
    v42 = 0LL;
    return HalRequestIpi(v42, v41);
  }
  return result;
}
