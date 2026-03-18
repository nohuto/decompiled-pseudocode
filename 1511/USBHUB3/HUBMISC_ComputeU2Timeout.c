/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x1C0025830
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001BD60 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  int v2; // edx
  char v3; // cl
  char v4; // dl
  unsigned __int16 v5; // dx
  _QWORD *v6; // rsi
  char v7; // r13
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *i; // rbx
  unsigned int v11; // edi
  unsigned int v12; // r11d
  __int64 v13; // r10
  _QWORD *v14; // rbx
  char v15; // bp
  char v16; // r15
  unsigned int v17; // r12d
  int v18; // r14d
  __int64 v19; // rdi
  __int64 v20; // r10
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // r9
  __int64 v24; // rax

  if ( (*((_DWORD *)a1 + 407) & 0x80u) == 0 && (*(_DWORD *)(*a1 + 40) & 0x8000) == 0 )
  {
    v2 = *((_DWORD *)a1 + 550);
    if ( (v2 & 0x180) == 0 )
    {
      v3 = *((_BYTE *)a1 + 2204);
      *((_DWORD *)a1 + 550) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(16 * v3)) & 0x20;
      if ( (v3 & 8) == 0 )
        goto LABEL_54;
      if ( (a1[202] & 2) != 0 || (v3 & 0x20) == 0 )
      {
        v4 = -1;
        goto LABEL_55;
      }
      if ( v3 < 0 )
      {
        v4 = 1;
        goto LABEL_55;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v4 = -2;
        goto LABEL_55;
      }
      v5 = 0;
      v6 = (_QWORD *)(a1[6] + 16);
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
      v14 = (_QWORD *)*v6;
      v15 = 0;
      v16 = 0;
      if ( v6 == (_QWORD *)*v6 )
        goto LABEL_51;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v8 + 24);
        v18 = 0;
        if ( v17 )
          break;
LABEL_43:
        v8 = *v14 - 8LL;
        v14 = (_QWORD *)*v14;
        if ( v6 == v14 )
        {
          if ( v15 )
          {
            v4 = -1;
            goto LABEL_55;
          }
          if ( v16 && *((_BYTE *)a1 + 2198) )
            *((_BYTE *)a1 + 2198) = -1;
          if ( v5 >= 0xFE00u )
          {
            v4 = -2;
            goto LABEL_55;
          }
LABEL_51:
          v4 = HIBYTE(v5) + 1;
          goto LABEL_55;
        }
      }
      v19 = v8 + 72;
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(char *)(*(_QWORD *)v19 + 2LL) >= 0 ? *((_WORD *)a1 + 1094) : *((_WORD *)a1 + 1091);
        if ( (*(_BYTE *)(v20 + 3) & 3) == 0 )
          break;
        switch ( *(_BYTE *)(v20 + 3) & 3 )
        {
          case 1:
            if ( v21 > 125 * *(unsigned __int8 *)(v20 + 6) )
            {
              _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
              goto LABEL_54;
            }
LABEL_37:
            v22 = 1;
            break;
          case 2:
            goto LABEL_33;
          case 3:
            if ( (*(_BYTE *)(v20 + 3) & 0x30) != 0 || (v16 = 1, v21 <= 125 * *(unsigned __int8 *)(v20 + 6)) )
            {
LABEL_33:
              v23 = 5 * v21;
LABEL_39:
              v22 = v23;
              break;
            }
            v15 = 1;
            v22 = 255;
            break;
          default:
            v22 = 0;
            break;
        }
        if ( v5 > v22 )
          v22 = v5;
        v19 += 64LL;
        v5 = v22;
        if ( ++v18 >= v17 )
          goto LABEL_43;
      }
      if ( !v7 )
      {
        v23 = 5 * v21;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
LABEL_54:
  v4 = 0;
LABEL_55:
  v24 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v24) = *((_DWORD *)a1 + 404);
    if ( (v24 & 2) == 0 )
    {
      LOBYTE(v24) = *((_BYTE *)a1 + 2198) - 1;
      if ( (unsigned __int8)v24 <= 0xFDu && v4 == -1 )
      {
        v4 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2199) = v4;
  return v24;
}
