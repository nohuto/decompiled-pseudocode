/*
 * XREFs of KiIpiSendRequest @ 0x1400427F0
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall KiIpiSendRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        _OWORD *a4,
        unsigned __int8 a5,
        __int64 a6)
{
  __int64 v8; // r13
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // ax
  __int64 v11; // r12
  int v12; // r15d
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned __int16 v19; // r11
  unsigned __int64 v20; // r8
  _QWORD *v21; // r13
  unsigned __int64 v22; // r9
  int v23; // r10d
  unsigned __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rdi
  signed __int64 *v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  unsigned int v30; // ecx
  char v31; // r8
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned __int16 v40; // cx
  unsigned __int16 v41; // ax
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned int v46; // [rsp+20h] [rbp-E0h]
  unsigned int v47; // [rsp+24h] [rbp-DCh]
  unsigned int v48; // [rsp+28h] [rbp-D8h]
  unsigned int v49; // [rsp+2Ch] [rbp-D4h]
  int v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD v57[21]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v58; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v59[21]; // [rsp+118h] [rbp+18h] BYREF

  v49 = a2;
  i = 0;
  v8 = a1;
  if ( a2 )
  {
    v55 = KeActiveProcessors;
    if ( (_WORD)KeActiveProcessors )
      memmove(v57, qword_1403D15E8, 8LL * (unsigned __int16)KeActiveProcessors);
    if ( a2 == 1 )
    {
      v36 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 36)] >> 6;
      if ( (unsigned __int16)v55 > (unsigned int)v36 )
      {
        v37 = &v57[v36];
        v38 = *v37;
        _bittestandreset64(&v38, KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 36)] & 0x3F);
        *v37 = v38;
      }
    }
    v11 = a6;
    if ( (a6 & 0x80000000) != 0 )
    {
      LOWORD(v39) = KeSleepingProcessors;
      LODWORD(v11) = a6 & 0x7FFFFFFF;
      v40 = 0;
      if ( (_WORD)KeSleepingProcessors )
      {
        while ( !qword_140332B28[v40] )
        {
          if ( ++v40 >= (unsigned __int16)KeSleepingProcessors )
            goto LABEL_5;
        }
        v41 = 0;
        v49 = 0;
        if ( (unsigned __int16)v55 < (unsigned __int16)KeSleepingProcessors )
          LOWORD(v39) = v55;
        HIWORD(v55) = 20;
        if ( (_WORD)v39 )
        {
          v41 = v39;
          v42 = 0LL;
          v39 = (unsigned __int16)v39;
          do
          {
            v43 = qword_140332B28[v42++];
            *(_QWORD *)((char *)&v55 + v42 * 8) &= ~v43;
            --v39;
          }
          while ( v39 );
        }
        for ( ; v41 < (unsigned __int16)v55; v57[v45] = v57[v45] )
          v45 = v41++;
        for ( i = 0; v41 < HIWORD(v55); v57[v44] = 0LL )
          v44 = v41++;
      }
    }
  }
  else
  {
    v9 = *a3;
    v10 = a3[1];
    LOWORD(v55) = v9;
    HIWORD(v55) = v10;
    if ( v9 )
      memmove(v57, a3 + 4, 8LL * v9);
    v11 = a6;
  }
LABEL_5:
  v12 = (unsigned __int16)KeNumberNodes;
  *(_DWORD *)(v8 + 11524) = (unsigned __int16)KeNumberNodes;
  v58 = 1310721LL;
  v13 = v11 & 0xF | ((_QWORD)a4 << 16) | ((unsigned __int64)a5 << 8);
  v47 = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v8 + 11520) = 1;
  memset(v59, 0, 0xA0uLL);
  v48 = 0;
  result = 0LL;
  v46 = 0;
  v15 = 0;
  v51 = 0;
  v16 = 0;
  v50 = 0;
  v17 = 0;
  if ( v12 )
  {
    do
    {
      v18 = KeNodeBlock[v17];
      v19 = *(_WORD *)(v18 + 144);
      if ( (unsigned __int16)v55 > v19 && (v20 = v57[v19] & *(_QWORD *)(v18 + 136), (v54 = v20) != 0) )
      {
        v21 = 0LL;
        v22 = v57[v19] & *(_QWORD *)(v18 + 136);
        v23 = v19;
        while ( v22 )
        {
LABEL_10:
          _BitScanForward64(&v24, v22);
          v23 = v19;
          v22 &= ~(1LL << v24);
          v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v19 + (unsigned __int8)v24];
          v26 = KiProcessorBlock[v25];
          _m_prefetchw((const void *)(v26 + 26816));
          v27 = (signed __int64 *)(v26 + ((v47 + 506LL) << 6));
          _m_prefetchw(v27);
          if ( !v21 )
          {
            v21 = v27 + 7;
            *((_DWORD *)v27 + 14) = (unsigned int)((0x101010101010101LL
                                                  * ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                    + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                    + ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                      + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
          }
          v27[6] = (signed __int64)v21;
          if ( v11 == 5 )
          {
            *((_OWORD *)v27 + 1) = *a4;
            *((_OWORD *)v27 + 2) = a4[1];
          }
          v27[1] = v13;
          v28 = *(_QWORD *)(v26 + 26816);
          do
          {
            v29 = v28;
            *v27 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 26816), (signed __int64)v27, v28);
          }
          while ( v28 != v29 );
          if ( v28 )
          {
            v20 = v54;
            v15 = 1;
            v51 = 1;
          }
          else
          {
            v30 = KiProcessorIndexToNumberMappingTable[v25];
            v31 = v30 & 0x3F;
            v32 = v30 >> 6;
            v46 = 1;
            if ( (unsigned __int16)v58 <= (unsigned int)v32 )
              LOWORD(v58) = v32 + 1;
            v33 = v31;
            v20 = v54;
            v59[v32] |= 1LL << v33;
            v15 = v51;
          }
        }
        while ( ++v19 < (unsigned int)(v23 + 1) )
        {
          v22 = *(_QWORD *)(8LL * v19 + 8);
          if ( v22 )
            goto LABEL_10;
        }
        LOWORD(v12) = KeNumberNodes;
        v17 = v48;
        v8 = a1;
        v16 = v50;
      }
      else
      {
        v50 = ++v16;
      }
      v48 = ++v17;
    }
    while ( v17 < (unsigned __int16)v12 );
    if ( v16 )
    {
      result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11524), -v16) - v16);
      if ( !(_DWORD)result )
      {
        *(_DWORD *)(v8 + 11520) = 0;
        return result;
      }
    }
    result = v46;
  }
  if ( v11 == 5 || !v15 )
  {
    v34 = v49;
    if ( v49 - 1 <= 1 )
      ++*(_DWORD *)(v8 + 24972);
    else
      ++*(_DWORD *)(v8 + 24976);
    v35 = &v55;
    return HalRequestIpi(v34, v35);
  }
  if ( (_DWORD)result )
  {
    ++*(_DWORD *)(v8 + 24976);
    v35 = &v58;
    v34 = 0LL;
    return HalRequestIpi(v34, v35);
  }
  return result;
}
