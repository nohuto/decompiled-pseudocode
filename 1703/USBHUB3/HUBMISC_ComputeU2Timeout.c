/*
 * XREFs of HUBMISC_ComputeU2Timeout @ 0x1C0027D68
 * Callers:
 *     HUBDSM_ComputingU1U2TimeoutsAndExitLatency @ 0x1C001DDA0 (HUBDSM_ComputingU1U2TimeoutsAndExitLatency.c)
 * Callees:
 *     <none>
 */

char __fastcall HUBMISC_ComputeU2Timeout(__int64 *a1)
{
  int v2; // edx
  char v3; // cl
  char v4; // dl
  __int64 v5; // rsi
  unsigned __int16 v6; // dx
  char v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 i; // rax
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  __int64 v13; // r10
  char v14; // bp
  char v15; // r12
  unsigned int v16; // r15d
  int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // r10
  unsigned __int16 v20; // r9
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // r9
  __int64 v23; // rax

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
      v5 = a1[6];
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
      v14 = 0;
      v15 = 0;
      if ( v5 == *(_QWORD *)(v5 + 16) - 16LL )
        goto LABEL_51;
      while ( 1 )
      {
        v16 = *(_DWORD *)(v8 + 24);
        v17 = 0;
        if ( v16 )
          break;
LABEL_43:
        v8 = *(_QWORD *)(v8 + 8) - 8LL;
        if ( v5 == v8 - 8 )
        {
          if ( v14 )
          {
            v4 = -1;
            goto LABEL_55;
          }
          if ( v15 && *((_BYTE *)a1 + 2198) )
            *((_BYTE *)a1 + 2198) = -1;
          if ( v6 >= 0xFE00u )
          {
            v4 = -2;
            goto LABEL_55;
          }
LABEL_51:
          v4 = HIBYTE(v6) + 1;
          goto LABEL_55;
        }
      }
      v18 = v8 + 72;
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(char *)(*(_QWORD *)v18 + 2LL) >= 0 ? *((_WORD *)a1 + 1094) : *((_WORD *)a1 + 1091);
        if ( (*(_BYTE *)(v19 + 3) & 3) == 0 )
          break;
        switch ( *(_BYTE *)(v19 + 3) & 3 )
        {
          case 1:
            if ( v20 > 125 * (unsigned int)*(unsigned __int8 *)(v19 + 6) )
            {
              _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
              goto LABEL_54;
            }
LABEL_37:
            v21 = 1;
            break;
          case 2:
            goto LABEL_33;
          case 3:
            if ( (*(_BYTE *)(v19 + 3) & 0x30) != 0
              || (v15 = 1, v20 <= 125 * (unsigned int)*(unsigned __int8 *)(v19 + 6)) )
            {
LABEL_33:
              v22 = 5 * v20;
LABEL_39:
              v21 = v22;
              break;
            }
            v14 = 1;
            v21 = 255;
            break;
          default:
            v21 = 0;
            break;
        }
        if ( v6 > v21 )
          v21 = v6;
        v18 += 64LL;
        v6 = v21;
        if ( ++v17 >= v16 )
          goto LABEL_43;
      }
      if ( !v7 )
      {
        v22 = 5 * v20;
        goto LABEL_39;
      }
      goto LABEL_37;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
LABEL_54:
  v4 = 0;
LABEL_55:
  v23 = *a1;
  if ( (*(_DWORD *)(*a1 + 40) & 0x10000000) != 0 )
  {
    LODWORD(v23) = *((_DWORD *)a1 + 404);
    if ( (v23 & 2) == 0 )
    {
      LOBYTE(v23) = *((_BYTE *)a1 + 2198) - 1;
      if ( (unsigned __int8)v23 <= 0xFDu && v4 == -1 )
      {
        v4 = 0;
        _InterlockedAnd((volatile signed __int32 *)a1 + 550, 0xFFFFFFDF);
      }
    }
  }
  *((_BYTE *)a1 + 2199) = v4;
  return v23;
}
