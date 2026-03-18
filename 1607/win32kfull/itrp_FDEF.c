/*
 * XREFs of itrp_FDEF @ 0x1C00CB3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_FDEF(unsigned __int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r11
  unsigned __int8 v5; // al
  __int64 v6; // rdi
  __int16 v7; // si
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // r10
  unsigned __int8 *v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned __int16 v17; // ax
  int v18; // r9d
  int v19; // r9d
  _BYTE *v20; // rax
  int v21; // r9d
  __int64 v22; // r9

  v1 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v3 = qword_1C03294C8, !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  qword_1C03294C8 -= 4LL;
  v4 = *(int *)(v3 - 4);
  if ( (int)v4 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C03294E0 + 344) + 20LL) || (int)v4 < 0 )
  {
    dword_1C0329530 = 4372;
    return qword_1C0329538;
  }
  v5 = *(_BYTE *)(qword_1C03294E0 + 333);
  if ( v5 >= 2u )
  {
    dword_1C0329530 = 4360;
    return qword_1C0329538;
  }
  v6 = *(_QWORD *)(qword_1C03294E0 + 160);
  v7 = a1;
  *(_WORD *)(v6 + 8 * v4 + 6) = v5;
  *(_DWORD *)(v6 + 8 * v4) = a1 - *(_DWORD *)(v1 + 16LL * v5 + 200);
  v8 = qword_1C0329540;
  if ( (unsigned int)(v4 - 64) > 2 )
  {
LABEL_7:
    v9 = qword_1C0329538;
    goto LABEL_8;
  }
  v9 = qword_1C0329538;
  if ( a1 >= qword_1C0329540 && a1 + 4 <= qword_1C0329538 && a1 + 4 >= a1 && *(_DWORD *)a1 == 1480791728 )
  {
    *(_WORD *)(qword_1C03294E0 + 454) |= 0x100u;
    v8 = qword_1C0329540;
    goto LABEL_7;
  }
LABEL_8:
  if ( ((unsigned int)v4 <= 2 || (_DWORD)v4 == 4 || (unsigned int)(v4 - 7) <= 1) && a1 >= v8 )
  {
    if ( a1 + 5 <= v9 && a1 + 5 >= a1 )
    {
      v18 = *(_DWORD *)a1 - 1125691393;
      if ( *(_DWORD *)a1 == 1125691393 )
        v18 = *(unsigned __int8 *)(a1 + 4) - 88;
      if ( !v18 )
        goto LABEL_61;
    }
    if ( a1 + 6 <= v9 && a1 + 6 >= a1 )
    {
      v19 = *(_DWORD *)a1 - 414193665;
      if ( *(_DWORD *)a1 == 414193665 )
        v19 = *(unsigned __int16 *)(a1 + 4) - 22595;
      if ( !v19 )
      {
LABEL_61:
        *(_WORD *)(qword_1C03294E0 + 454) |= 0x200u;
        v8 = qword_1C0329540;
        v9 = qword_1C0329538;
      }
    }
  }
  if ( !(_DWORD)v4 )
  {
    if ( a1 < v8 )
      goto LABEL_98;
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
    *(_WORD *)(qword_1C03294E0 + 454) |= 0x400u;
    v8 = qword_1C0329540;
    v9 = qword_1C0329538;
  }
  if ( (_DWORD)v4 == 58 )
  {
    if ( a1 < v8 )
      goto LABEL_98;
    if ( a1 + 10 <= v9 && a1 + 10 >= a1 )
    {
      v22 = *(_QWORD *)a1 - 0x40B0466001B02020LL;
      if ( *(_QWORD *)a1 == 0x40B0466001B02020LL )
        v22 = *(unsigned __int16 *)(a1 + 8) - 16931LL;
      if ( !v22 )
      {
        *(_WORD *)(qword_1C03294E0 + 454) |= 0x800u;
        v8 = qword_1C0329540;
        v9 = qword_1C0329538;
      }
    }
  }
LABEL_13:
  if ( a1 < v8 )
    goto LABEL_98;
  v10 = (unsigned __int8 *)(a1 + 1);
  if ( a1 + 1 <= v9 && (unsigned __int64)v10 >= a1 && *(_BYTE *)a1 == 75 )
  {
    if ( a1 + 9 <= v9 && a1 + 9 >= a1 )
    {
      v15 = *(_QWORD *)a1 - 0x5921211B3858544BLL;
      if ( *(_QWORD *)a1 == 0x5921211B3858544BLL )
        v15 = *(unsigned __int8 *)(a1 + 8) - 45LL;
      if ( !v15 )
        goto LABEL_48;
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
LABEL_48:
        v17 = *(_WORD *)(qword_1C03294E0 + 456);
        if ( v17 < 4u )
        {
          *(_WORD *)(qword_1C03294E0 + 2LL * v17 + 458) = v4;
          ++*(_WORD *)(qword_1C03294E0 + 456);
          v8 = qword_1C0329540;
          v9 = qword_1C0329538;
        }
      }
    }
  }
  if ( a1 < v8 || (unsigned __int64)v10 > v9 || (unsigned __int64)v10 < a1 )
    goto LABEL_98;
  while ( *(_BYTE *)a1 != 45 )
  {
    a1 = (unsigned __int64)v10;
    if ( (unsigned __int64)v10 >= v9 )
      goto LABEL_35;
    v11 = v10 - 1;
    if ( (unsigned __int64)(v10 - 1) < v8 || v10 < v11 )
    {
LABEL_90:
      dword_1C0329530 = 4381;
      goto LABEL_97;
    }
    _mm_lfence();
    v8 = qword_1C0329540;
    v12 = byte_1C02E9060[*v11];
    v9 = qword_1C0329538;
    switch ( v12 )
    {
      case 0:
        goto LABEL_25;
      case 21:
        if ( (unsigned __int64)v10 < qword_1C0329540 || (unsigned __int64)(v10 + 1) > qword_1C0329538 || v10 + 1 < v10 )
          goto LABEL_90;
        v12 = *v10 + 1;
        break;
      case 22:
        if ( (unsigned __int64)v10 < qword_1C0329540 || (unsigned __int64)(v10 + 1) > qword_1C0329538 || v10 + 1 < v10 )
          goto LABEL_90;
        v12 = 2 * *v10 + 1;
        break;
    }
    v13 = (unsigned __int64)&v10[v12];
    a1 = v13;
    if ( v13 < qword_1C0329540 )
    {
      dword_1C0329530 = 4363;
    }
    else if ( v13 <= qword_1C0329538 )
    {
      goto LABEL_25;
    }
LABEL_97:
    a1 = v9;
LABEL_25:
    if ( a1 >= v8 )
    {
      v10 = (unsigned __int8 *)(a1 + 1);
      if ( a1 + 1 <= v9 && (unsigned __int64)v10 >= a1 )
        continue;
    }
    goto LABEL_98;
  }
  ++a1;
LABEL_35:
  if ( a1 != v9 )
  {
LABEL_36:
    *(_WORD *)(v6 + 8 * v4 + 4) = a1 - v7 - 1;
    return a1;
  }
  v20 = (_BYTE *)(a1 - 1);
  if ( a1 - 1 >= v8 && a1 >= (unsigned __int64)v20 )
  {
    if ( *v20 != 45 )
      dword_1C0329530 = 4356;
    goto LABEL_36;
  }
LABEL_98:
  dword_1C0329530 = 4381;
  return v9;
}
