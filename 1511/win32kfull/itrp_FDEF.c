/*
 * XREFs of itrp_FDEF @ 0x1C00C4900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_FDEF(unsigned __int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r10
  unsigned __int8 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbx
  __int16 v7; // di
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int8 *v10; // rdx
  unsigned __int8 *v11; // rax
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r11
  unsigned __int16 v17; // ax
  int v18; // edx
  int v19; // edx
  _BYTE *v20; // rax
  int v21; // edx
  __int16 v22; // dx
  __int64 v23; // rdx

  v1 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v2 = qword_1C0323E18, !((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2)) )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
    return result;
  }
  qword_1C0323E18 -= 4LL;
  v3 = *(int *)(v2 - 4);
  if ( (int)v3 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0323E30 + 344) + 20LL) || (int)v3 < 0 )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4372;
    return result;
  }
  v4 = *(_BYTE *)(qword_1C0323E30 + 333);
  if ( v4 >= 2u )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4360;
    return result;
  }
  v5 = *(_QWORD *)(qword_1C0323E30 + 160);
  *(_WORD *)(v5 + 8 * v3 + 6) = v4;
  v6 = v5 + 8 * v3;
  v7 = a1;
  *(_DWORD *)v6 = a1 - *(_DWORD *)(v1 + 16LL * v4 + 200);
  v8 = qword_1C0323E90;
  if ( (unsigned int)(v3 - 64) > 2 )
    goto LABEL_7;
  v9 = qword_1C0323E88;
  if ( a1 >= qword_1C0323E90 && a1 + 4 <= qword_1C0323E88 && a1 + 4 >= a1 && *(_DWORD *)a1 == 1480791728 )
  {
    *(_WORD *)(qword_1C0323E30 + 454) |= 0x100u;
    v8 = qword_1C0323E90;
LABEL_7:
    v9 = qword_1C0323E88;
  }
  if ( ((unsigned int)v3 <= 2 || (_DWORD)v3 == 4 || (unsigned int)(v3 - 7) <= 1) && a1 >= v8 )
  {
    if ( a1 + 5 <= v9 && a1 + 5 >= a1 )
    {
      v18 = *(_DWORD *)a1 - 1125691393;
      if ( *(_DWORD *)a1 == 1125691393 )
        v18 = *(unsigned __int8 *)(a1 + 4) - 88;
      if ( !v18 )
        goto LABEL_62;
    }
    if ( a1 + 6 <= v9 && a1 + 6 >= a1 )
    {
      v19 = *(_DWORD *)a1 - 414193665;
      if ( *(_DWORD *)a1 == 414193665 )
        v19 = *(unsigned __int16 *)(a1 + 4) - 22595;
      if ( !v19 )
      {
LABEL_62:
        *(_WORD *)(qword_1C0323E30 + 454) |= 0x200u;
        v8 = qword_1C0323E90;
        v9 = qword_1C0323E88;
      }
    }
  }
  if ( !(_DWORD)v3 )
  {
    if ( a1 < v8 )
      goto LABEL_100;
    if ( a1 + 7 > v9 || a1 + 7 < a1 )
      goto LABEL_13;
    v21 = *(_DWORD *)a1 - 1615209285;
    if ( *(_DWORD *)a1 == 1615209285 )
    {
      v21 = *(unsigned __int16 *)(a1 + 4) - 45088;
      if ( *(unsigned __int16 *)(a1 + 4) == 45088 )
        v21 = *(unsigned __int8 *)(a1 + 6) - 38;
    }
    if ( v21 )
      goto LABEL_13;
    v22 = 1024;
    goto LABEL_80;
  }
  if ( (_DWORD)v3 == 58 )
  {
    if ( a1 < v8 )
      goto LABEL_100;
    if ( a1 + 10 <= v9 && a1 + 10 >= a1 )
    {
      v23 = *(_QWORD *)a1 - 0x40B0466001B02020LL;
      if ( *(_QWORD *)a1 == 0x40B0466001B02020LL )
        v23 = *(unsigned __int16 *)(a1 + 8) - 16931LL;
      if ( !v23 )
      {
        v22 = 2048;
LABEL_80:
        *(_WORD *)(qword_1C0323E30 + 454) |= v22;
        v9 = qword_1C0323E88;
        v8 = qword_1C0323E90;
      }
    }
  }
LABEL_13:
  if ( a1 < v8 )
    goto LABEL_100;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( a1 + 1 <= v9 && (unsigned __int64)v10 >= a1 && *(_BYTE *)a1 == 75 )
  {
    if ( a1 + 9 <= v9 && a1 + 9 >= a1 )
    {
      v15 = *(_QWORD *)a1 - 0x5921211B3858544BLL;
      if ( *(_QWORD *)a1 == 0x5921211B3858544BLL )
        v15 = *(unsigned __int8 *)(a1 + 8) - 45LL;
      if ( !v15 )
        goto LABEL_49;
    }
    if ( a1 + 13 <= v9 && a1 + 13 >= a1 )
    {
      v16 = *(_QWORD *)a1 - 0x38585A514B23534BLL;
      if ( *(_QWORD *)a1 == 0x38585A514B23534BLL )
      {
        v16 = *(unsigned int *)(a1 + 8) - 1495343387LL;
        if ( *(_DWORD *)(a1 + 8) == 1495343387LL )
          v16 = *(unsigned __int8 *)(a1 + 12) - 45LL;
      }
      if ( !v16 )
      {
LABEL_49:
        v17 = *(_WORD *)(qword_1C0323E30 + 456);
        if ( v17 < 4u )
        {
          *(_WORD *)(qword_1C0323E30 + 2LL * v17 + 458) = v3;
          ++*(_WORD *)(qword_1C0323E30 + 456);
          v8 = qword_1C0323E90;
          v9 = qword_1C0323E88;
        }
      }
    }
  }
  if ( a1 < v8 || (unsigned __int64)v10 > v9 || (unsigned __int64)v10 < a1 )
    goto LABEL_100;
  if ( *(_BYTE *)a1 != 45 )
  {
    while ( 1 )
    {
      a1 = (unsigned __int64)v10;
      if ( (unsigned __int64)v10 >= v9 )
        goto LABEL_30;
      v11 = v10 - 1;
      if ( (unsigned __int64)(v10 - 1) < v8 || v10 < v11 )
        break;
      _mm_lfence();
      v8 = qword_1C0323E90;
      v9 = qword_1C0323E88;
      v12 = byte_1C02E1DB0[*v11];
      if ( v12 )
      {
        if ( v12 == 21 )
        {
          if ( (unsigned __int64)v10 < qword_1C0323E90 || (unsigned __int64)(v10 + 1) > qword_1C0323E88 || v10 + 1 < v10 )
            break;
          v12 = *v10 + 1;
        }
        else if ( v12 == 22 )
        {
          if ( (unsigned __int64)v10 < qword_1C0323E90 || (unsigned __int64)(v10 + 1) > qword_1C0323E88 || v10 + 1 < v10 )
            break;
          v12 = 2 * *v10 + 1;
        }
        v14 = (unsigned __int64)&v10[v12];
        a1 = v14;
        if ( v14 < qword_1C0323E90 )
        {
          dword_1C0323E80 = 4363;
          goto LABEL_99;
        }
        if ( v14 > qword_1C0323E88 )
          goto LABEL_99;
      }
LABEL_25:
      if ( a1 < v8 )
        goto LABEL_100;
      v10 = (unsigned __int8 *)(a1 + 1);
      if ( a1 + 1 > v9 || (unsigned __int64)v10 < a1 )
        goto LABEL_100;
      if ( *(_BYTE *)a1 == 45 )
        goto LABEL_29;
    }
    dword_1C0323E80 = 4381;
LABEL_99:
    a1 = v9;
    goto LABEL_25;
  }
LABEL_29:
  ++a1;
LABEL_30:
  if ( a1 != v9 )
    goto LABEL_31;
  v20 = (_BYTE *)(a1 - 1);
  if ( a1 - 1 < v8 || a1 < (unsigned __int64)v20 )
  {
LABEL_100:
    dword_1C0323E80 = 4381;
    return v9;
  }
  if ( *v20 != 45 )
    dword_1C0323E80 = 4356;
LABEL_31:
  *(_WORD *)(v6 + 4) = a1 - v7 - 1;
  return a1;
}
