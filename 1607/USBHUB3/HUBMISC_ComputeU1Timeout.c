/*
 * XREFs of HUBMISC_ComputeU1Timeout @ 0x1C002566C
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001BE10 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMISC_ComputeU1Timeout(__int64 a1)
{
  int v2; // edx
  char v3; // cl
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // si
  _QWORD *v6; // r14
  char v7; // r15
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *i; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // r11
  unsigned int v15; // ebp
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r10
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r9
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
    v5 = 0;
    v6 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
    v7 = 0;
    v8 = *v6 - 8LL;
    v9 = v8;
    for ( i = (_QWORD *)*v6; ; i = (_QWORD *)*i )
    {
      if ( v6 == i )
        goto LABEL_19;
      v11 = *(_DWORD *)(v9 + 24);
      v12 = 0;
      if ( v11 )
        break;
LABEL_17:
      v9 = *i - 8LL;
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
    while ( 1 )
    {
      v14 = (_QWORD *)(v8 + 8);
      if ( v6 == (_QWORD *)(v8 + 8) )
        break;
      v15 = *(_DWORD *)(v8 + 24);
      v16 = 0;
      if ( v15 )
      {
        v17 = v8 + 72;
        do
        {
          v18 = *(_QWORD *)v17;
          if ( *(char *)(*(_QWORD *)v17 + 2LL) >= 0 )
            v19 = *(_WORD *)(a1 + 2186);
          else
            v19 = *(unsigned __int8 *)(a1 + 2180);
          if ( (*(_BYTE *)(v18 + 3) & 3) != 0 )
          {
            if ( (*(_BYTE *)(v18 + 3) & 3) == 1 )
            {
              if ( v19 > 125 * *(unsigned __int8 *)(v18 + 6) )
              {
                _InterlockedAnd((volatile signed __int32 *)(a1 + 2200), 0xFFFFFFEF);
                goto LABEL_43;
              }
              v20 = 1;
            }
            else
            {
              if ( (*(_BYTE *)(v18 + 3) & 3u) - 2 < 2 )
                goto LABEL_33;
              v20 = 0;
            }
          }
          else
          {
            if ( !v7 )
            {
LABEL_33:
              v20 = 5 * v19;
              goto LABEL_34;
            }
            v20 = 5;
          }
LABEL_34:
          if ( v5 > v20 )
            v20 = v5;
          ++v16;
          v17 += 64LL;
          v5 = v20;
        }
        while ( v16 < v15 );
      }
      v8 = *v14 - 8LL;
    }
    v4 = 127;
    if ( (unsigned __int8)v5 < 0x7Fu )
      v4 = v5;
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
