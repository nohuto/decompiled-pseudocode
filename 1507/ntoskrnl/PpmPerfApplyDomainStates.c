/*
 * XREFs of PpmPerfApplyDomainStates @ 0x1400E8500
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x1400EA8F0 (PpmPerfApplyDomainState.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char PpmPerfApplyDomainStates()
{
  unsigned __int64 v0; // rdi
  unsigned __int16 v1; // bx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  char *v6; // rcx
  unsigned __int16 v7; // r10
  __int64 *v8; // r8
  unsigned __int16 v9; // dx
  _QWORD *v10; // r9
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int16 v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // di
  unsigned __int16 *v20; // rbx
  unsigned __int16 v21; // r8
  unsigned __int16 v22; // ax
  unsigned __int16 i; // dx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 *v26; // r11
  unsigned __int16 v27; // dx
  __int64 v28; // r9
  unsigned __int16 v29; // r8
  unsigned __int16 v30; // ax
  unsigned __int16 j; // dx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int16 *v34; // r10
  unsigned __int16 v35; // dx
  __int64 v36; // rcx
  unsigned int v37; // r8d
  __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int16 v41; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v42; // [rsp+22h] [rbp-DEh]
  int v43; // [rsp+24h] [rbp-DCh]
  _QWORD v44[21]; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v45; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v46; // [rsp+D2h] [rbp-2Eh]
  int v47; // [rsp+D4h] [rbp-2Ch]
  _QWORD v48[21]; // [rsp+D8h] [rbp-28h]

  if ( PpmPerfArtificialDomainEnabled )
  {
    v14 = qword_140320838[0];
    v15 = 0;
    while ( 1 )
    {
LABEL_19:
      if ( !v14 )
      {
        while ( ++v15 < (unsigned int)(unsigned __int16)PpmPerfDomainsToUpdate )
        {
          v14 = qword_140320838[v15];
          if ( v14 )
            goto LABEL_22;
        }
        goto LABEL_2;
      }
LABEL_22:
      _BitScanForward64(&v16, v14);
      v14 &= ~(1LL << v16);
      v17 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v15 + (unsigned __int8)v16];
      if ( (unsigned int)v17 >= (unsigned int)KeNumberProcessors_0 )
      {
        v18 = 0LL;
      }
      else
      {
        _mm_lfence();
        v18 = KiProcessorBlock[v17];
      }
      v19 = PpmPerfNewCoreParkingMask;
      v20 = (unsigned __int16 *)(*(_QWORD *)(v18 + 24176) + 24LL);
      v21 = *v20;
      v22 = *v20;
      if ( *v20 >= (unsigned __int16)PpmPerfNewCoreParkingMask )
        v22 = PpmPerfNewCoreParkingMask;
      v41 = v22;
      for ( i = 0; i < v41; v22 = v41 )
      {
        v24 = i++;
        v44[v24] = qword_1403225C8[v24] & *(_QWORD *)&v20[4 * v24 + 4];
      }
      v42 = 20;
      v43 = 0;
      if ( i < 0x14u )
      {
        do
        {
          v25 = i++;
          v44[v25] = 0LL;
        }
        while ( i < v42 );
        v22 = v41;
      }
      if ( v21 >= v22 )
      {
        v26 = v20;
        v21 = v22;
      }
      else
      {
        v26 = &v41;
      }
      v27 = 0;
      if ( v21 )
        break;
LABEL_38:
      if ( v27 < *v26 )
      {
        while ( !*(_QWORD *)&v26[4 * v27 + 4] )
        {
          if ( ++v27 >= *v26 )
            goto LABEL_19;
        }
        goto LABEL_42;
      }
    }
    while ( *(_QWORD *)&v20[4 * v27 + 4] == v44[v27] )
    {
      if ( ++v27 >= v21 )
        goto LABEL_38;
    }
LABEL_42:
    v28 = PpmPerfDomainHead;
    if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
    {
      while ( 2 )
      {
        v29 = *(_WORD *)(v28 + 24);
        v30 = v29;
        if ( v29 >= v19 )
          v30 = v19;
        v45 = v30;
        for ( j = 0; j < v45; v30 = v45 )
        {
          v32 = j++;
          v48[v32] = *(_QWORD *)(8 * v32 + v28 + 32) & qword_1403225C8[v32];
        }
        v46 = 20;
        v47 = 0;
        if ( j < 0x14u )
        {
          do
          {
            v33 = j++;
            v48[v33] = 0LL;
          }
          while ( j < v46 );
          v30 = v45;
        }
        if ( v29 >= v30 )
        {
          v34 = (unsigned __int16 *)(v28 + 24);
          v29 = v30;
        }
        else
        {
          v34 = &v45;
        }
        v35 = 0;
        if ( v29 )
        {
          while ( *(_QWORD *)(8LL * v35 + v28 + 32) == v48[v35] )
          {
            if ( ++v35 >= v29 )
              goto LABEL_56;
          }
LABEL_60:
          v36 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v28 + 16) + 36LL)] >> 6;
          v37 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v28 + 16) + 36LL)] & 0x3F;
          if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v36 )
            LOWORD(PpmPerfDomainsToUpdate) = v36 + 1;
          v38 = &qword_140320838[v36];
          v39 = *v38;
          _bittestandset64(&v39, v37);
          *v38 = v39;
        }
        else
        {
LABEL_56:
          if ( v35 < *v34 )
          {
            while ( !*(_QWORD *)&v34[4 * v35 + 4] )
            {
              if ( ++v35 >= *v34 )
                goto LABEL_63;
            }
            goto LABEL_60;
          }
        }
LABEL_63:
        v28 = *(_QWORD *)v28;
        if ( (__int64 *)v28 == &PpmPerfDomainHead )
          break;
        continue;
      }
    }
  }
LABEL_2:
  v0 = qword_140320838[0];
  v1 = 0;
  while ( v0 )
  {
LABEL_6:
    _BitScanForward64(&v3, v0);
    v0 &= ~(1LL << v3);
    v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v3];
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      v5 = 0LL;
    }
    else
    {
      _mm_lfence();
      v5 = KiProcessorBlock[v4];
    }
    if ( (unsigned __int8)PpmPerfApplyDomainState(v5) )
    {
      v6 = (char *)(*(_QWORD *)(v5 + 24176) + 24LL);
      v7 = *(_WORD *)v6;
      if ( *(_WORD *)v6 < LOWORD(PpmPerfProcessorsToUpdate[0]) )
      {
        v8 = PpmPerfProcessorsToUpdate;
      }
      else
      {
        v8 = (__int64 *)(*(_QWORD *)(v5 + 24176) + 24LL);
        v7 = PpmPerfProcessorsToUpdate[0];
      }
      WORD1(PpmPerfProcessorsToUpdate[0]) = 20;
      v9 = 0;
      LOWORD(PpmPerfProcessorsToUpdate[0]) = *(_WORD *)v8;
      if ( v7 )
      {
        v9 = v7;
        v10 = &unk_140320788;
        v11 = v6 - (char *)&unk_140320788 + 8;
        v12 = v7;
        do
        {
          *v10 |= *(_QWORD *)((char *)v10 + v11);
          ++v10;
          --v12;
        }
        while ( v12 );
      }
      for ( ; v9 < *(_WORD *)v8; PpmPerfProcessorsToUpdate[v40 + 1] = v8[v40 + 1] )
        v40 = v9++;
      for ( HIDWORD(PpmPerfProcessorsToUpdate[0]) = 0;
            v9 < WORD1(PpmPerfProcessorsToUpdate[0]);
            PpmPerfProcessorsToUpdate[v13 + 1] = 0LL )
      {
        v13 = v9++;
      }
    }
  }
  while ( ++v1 < (unsigned int)(unsigned __int16)PpmPerfDomainsToUpdate )
  {
    v0 = qword_140320838[v1];
    if ( v0 )
      goto LABEL_6;
  }
  PpmPerfDomainsToUpdate = 1310721LL;
  memset(qword_140320838, 0, 0xA0uLL);
  return 1;
}
