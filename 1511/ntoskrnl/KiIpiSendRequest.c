/*
 * XREFs of KiIpiSendRequest @ 0x14005DCC0
 * Callers:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KiIpiSendPacket @ 0x140095FD4 (KiIpiSendPacket.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
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
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // r15d
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  unsigned int v23; // edx
  int v24; // ecx
  int v25; // r8d
  _OWORD *v26; // r12
  __int64 v27; // rax
  unsigned __int16 v28; // r11
  unsigned __int64 v29; // r9
  _QWORD *v30; // r15
  int v31; // edi
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  signed __int64 *v35; // rdx
  signed __int64 v36; // rax
  signed __int64 v37; // rcx
  unsigned int v38; // ecx
  char v39; // r8
  __int64 v40; // rcx
  char v41; // al
  __int64 *v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 v44; // r9
  unsigned __int16 v45; // ax
  __int64 v46; // rcx
  unsigned int v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+24h] [rbp-DCh]
  unsigned int v49; // [rsp+28h] [rbp-D8h]
  int v50; // [rsp+2Ch] [rbp-D4h]
  unsigned int v51; // [rsp+30h] [rbp-D0h]
  int v52; // [rsp+34h] [rbp-CCh]
  __int64 v53; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD v58[21]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v59; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v60[21]; // [rsp+118h] [rbp+18h] BYREF

  v48 = a2;
  i = 0;
  v7 = a2;
  v8 = (unsigned int *)a1;
  if ( a2 )
  {
    v56 = KeActiveProcessors[0];
    if ( LOWORD(KeActiveProcessors[0]) )
      memmove(v58, qword_1403825B8, 8LL * LOWORD(KeActiveProcessors[0]));
    if ( v7 == 1 )
    {
      v9 = (unsigned int)KiProcessorIndexToNumberMappingTable[v8[9]] >> 6;
      if ( (unsigned __int16)v56 > (unsigned int)v9 )
      {
        v10 = &v58[v9];
        v11 = *v10;
        _bittestandreset64(&v11, KiProcessorIndexToNumberMappingTable[v8[9]] & 0x3F);
        *v10 = v11;
      }
    }
    v12 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      v13 = KeSleepingProcessors;
      LODWORD(v12) = a6 & 0x7FFFFFFF;
      v14 = 0;
      if ( (_WORD)KeSleepingProcessors )
      {
        while ( !qword_1402E26A8[v14] )
        {
          if ( ++v14 >= (unsigned __int16)KeSleepingProcessors )
            goto LABEL_20;
        }
        v7 = 0;
        v48 = 0;
        v15 = 0;
        if ( (unsigned __int16)v56 < (unsigned __int16)KeSleepingProcessors )
          v13 = v56;
        HIWORD(v56) = 20;
        if ( v13 )
        {
          v15 = v13;
          v16 = 0LL;
          v17 = v13;
          do
          {
            v18 = qword_1402E26A8[v16++];
            *(_QWORD *)((char *)&v56 + v16 * 8) &= ~v18;
            --v17;
          }
          while ( v17 );
        }
        for ( ; v15 < (unsigned __int16)v56; v58[v46] = v58[v46] )
          v46 = v15++;
        for ( i = 0; v15 < HIWORD(v56); v58[v19] = 0LL )
          v19 = v15++;
      }
    }
  }
  else
  {
    v44 = *a3;
    v45 = a3[1];
    LOWORD(v56) = v44;
    HIWORD(v56) = v45;
    if ( v44 )
      memmove(v58, a3 + 4, 8LL * v44);
    v12 = a6;
  }
LABEL_20:
  v20 = (unsigned __int16)KeNumberNodes;
  v8[2881] = (unsigned __int16)KeNumberNodes;
  v59 = 1310721LL;
  v21 = v12 & 0xF | ((_QWORD)a4 << 16) | ((unsigned __int64)a5 << 8);
  v49 = v8[9];
  v8[2880] = 1;
  memset(v60, 0, 0xA0uLL);
  v50 = 0;
  result = 0LL;
  v23 = 0;
  v51 = 0;
  v24 = 0;
  v47 = 0;
  v25 = 0;
  v52 = 0;
  if ( v20 )
  {
    v26 = a4;
    do
    {
      v27 = KeNodeBlock[v23];
      v28 = *(_WORD *)(v27 + 144);
      if ( (unsigned __int16)v56 > v28 && (v29 = v58[v28] & *(_QWORD *)(v27 + 136), (v55 = v29) != 0) )
      {
        v30 = 0LL;
        v31 = v28;
        v32 = v58[v28] & *(_QWORD *)(v27 + 136);
        while ( v32 )
        {
LABEL_26:
          _BitScanForward64(&v33, v32);
          v31 = v28;
          v32 &= ~(1LL << v33);
          v53 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v28 + (unsigned __int8)v33];
          v34 = KiProcessorBlock[v53];
          _m_prefetchw((const void *)(v34 + 26816));
          v35 = (signed __int64 *)(v34 + ((v49 + 506LL) << 6));
          _m_prefetchw(v35);
          if ( !v30 )
          {
            v30 = v35 + 7;
            *((_DWORD *)v35 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v29 - ((v29 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v29 - ((v29 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v29 - ((v29 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v29 - ((v29 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v35[6] = (signed __int64)v30;
          if ( v12 == 5 )
          {
            *((_OWORD *)v35 + 1) = *v26;
            *((_OWORD *)v35 + 2) = v26[1];
          }
          v35[1] = v21;
          v36 = *(_QWORD *)(v34 + 26816);
          do
          {
            v37 = v36;
            *v35 = v36;
            v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 26816), (signed __int64)v35, v36);
          }
          while ( v36 != v37 );
          if ( v36 )
          {
            v29 = v55;
            v25 = 1;
            v50 = 1;
          }
          else
          {
            v47 = 1;
            v38 = KiProcessorIndexToNumberMappingTable[v53];
            v39 = v38 & 0x3F;
            v40 = v38 >> 6;
            if ( (unsigned __int16)v59 <= (unsigned int)v40 )
              LOWORD(v59) = v40 + 1;
            v29 = v55;
            v41 = v39;
            v25 = v50;
            v60[v40] |= 1LL << v41;
          }
        }
        while ( ++v28 < (unsigned int)(v31 + 1) )
        {
          v32 = *(_QWORD *)(8LL * v28 + 8);
          if ( v32 )
            goto LABEL_26;
        }
        LOWORD(v20) = KeNumberNodes;
        v23 = v51;
        v24 = v52;
      }
      else
      {
        v52 = ++v24;
      }
      v51 = ++v23;
    }
    while ( v23 < (unsigned __int16)v20 );
    v8 = (unsigned int *)a1;
    v7 = v48;
    if ( v24 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 11524), -v24) - v24);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(a1 + 11520) = 0;
        return result;
      }
    }
    result = v47;
  }
  if ( v12 == 5 || !v25 )
  {
    if ( v7 - 1 <= 1 )
      ++v8[6243];
    else
      ++v8[6244];
    v42 = (__int64 *)&v56;
    v43 = v7;
    return HalRequestIpi(v43, v42);
  }
  if ( (_DWORD)result )
  {
    ++v8[6244];
    v42 = &v59;
    v43 = 0LL;
    return HalRequestIpi(v43, v42);
  }
  return result;
}
