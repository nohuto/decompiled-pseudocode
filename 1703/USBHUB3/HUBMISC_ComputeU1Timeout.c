/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C0027B4C
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001DDA0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 a1)
{
  int v2; // edx
  char v3; // cl
  unsigned __int8 v4; // dl
  __int64 v5; // rsi
  unsigned __int16 v6; // bp
  char v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r9
  __int64 i; // rax
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  unsigned int v14; // r14d
  unsigned int v15; // edi
  __int64 v16; // r11
  __int64 v17; // r10
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r9
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 1628) & 0x80u) != 0
    || (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x8000) != 0
    || (v2 = *(_DWORD *)(a1 + 2200), (v2 & 0x140) != 0) )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2200), 0xFFFFFFEF);
LABEL_43:
    v4 = 0;
  }
  else
  {
    v3 = *(_BYTE *)(a1 + 2204);
    *(_DWORD *)(a1 + 2200) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(16 * v3)) & 0x10;
    if ( (v3 & 4) == 0 )
      goto LABEL_43;
    if ( (v3 & 0x10) == 0 )
    {
      v4 = -1;
      goto LABEL_44;
    }
    if ( v3 < 0 )
    {
      v4 = 1;
      goto LABEL_44;
    }
    if ( (v3 & 0x40) != 0 )
    {
      v4 = 127;
      goto LABEL_44;
    }
    v5 = *(_QWORD *)(a1 + 48);
    v6 = 0;
    v7 = 0;
    v8 = *(_QWORD *)(v5 + 16) - 8LL;
    v9 = v8;
    for ( i = *(_QWORD *)(v5 + 16) - 16LL; ; i = v9 - 8 )
    {
      if ( v5 == i )
        goto LABEL_19;
      v11 = *(_DWORD *)(v9 + 24);
      v12 = 0;
      if ( v11 )
        break;
LABEL_17:
      v9 = *(_QWORD *)(v9 + 8) - 8LL;
    }
    v13 = v9 + 72;
    while ( (*(_BYTE *)(*(_QWORD *)v13 + 3LL) & 3) == 0 )
    {
      ++v12;
      v13 += 64LL;
      if ( v12 >= v11 )
        goto LABEL_17;
    }
    v7 = 1;
LABEL_19:
    while ( v5 != v8 - 8 )
    {
      v14 = *(_DWORD *)(v8 + 24);
      v15 = 0;
      if ( v14 )
      {
        v16 = v8 + 72;
        do
        {
          v17 = *(_QWORD *)v16;
          if ( *(char *)(*(_QWORD *)v16 + 2LL) >= 0 )
            v18 = *(_WORD *)(a1 + 2186);
          else
            v18 = *(unsigned __int8 *)(a1 + 2180);
          if ( (*(_BYTE *)(v17 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v17 + 3) & 3) == 1 )
            {
              if ( v18 > 125 * (unsigned int)*(unsigned __int8 *)(v17 + 6) )
              {
                _InterlockedAnd((volatile signed __int32 *)(a1 + 2200), 0xFFFFFFEF);
                goto LABEL_43;
              }
              v19 = 1;
            }
            else
            {
              if ( (*(_BYTE *)(v17 + 3) & 3u) - 2 < 2 )
                goto LABEL_33;
              v19 = 0;
            }
          }
          else
          {
            if ( !v7 )
            {
LABEL_33:
              v19 = 5 * v18;
              goto LABEL_34;
            }
            v19 = 5;
          }
LABEL_34:
          if ( v6 > v19 )
            v19 = v6;
          ++v15;
          v16 += 64LL;
          v6 = v19;
        }
        while ( v15 < v14 );
      }
      v8 = *(_QWORD *)(v8 + 8) - 8LL;
    }
    v4 = 127;
    if ( (unsigned __int8)v6 < 0x7Fu )
      v4 = v6;
  }
LABEL_44:
  result = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x10000000) != 0 )
  {
    result = *(unsigned int *)(a1 + 1616);
    if ( (result & 2) != 0 )
    {
      result = v4;
      if ( v4 )
        result = 255LL;
      v4 = result;
    }
  }
  *(_BYTE *)(a1 + 2198) = v4;
  return result;
}
