/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C0006664
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0006310 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00779CC (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        enum tagPOINTER_BUTTON_CHANGE_TYPE *a5)
{
  unsigned int MouseKeyFlags; // edx
  unsigned int v9; // r10d
  int v10; // r11d
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int16 *v16; // r8
  __int64 v17; // r11
  int v18; // r8d
  unsigned int v19; // r9d
  unsigned __int8 v20; // cl
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // r8d
  unsigned int v25; // r10d
  unsigned int v26; // r8d
  unsigned int v28; // r10d
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // r10d
  unsigned int v33; // r10d
  unsigned int v34; // r10d
  unsigned int v35; // r10d
  unsigned int v36; // r10d
  unsigned int v37; // r10d
  bool v38; // zf
  unsigned int v39; // r10d
  unsigned int v40; // r10d
  unsigned int v41; // r10d
  unsigned int v42; // r10d
  unsigned int v43; // r10d
  unsigned int v44; // r10d
  unsigned int v45; // r10d
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx

  MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 392LL));
  switch ( v9 )
  {
    case 0xA1u:
      goto LABEL_41;
    case 0xA4u:
      goto LABEL_60;
    case 0xA7u:
LABEL_59:
      MouseKeyFlags &= ~0x10u;
      goto LABEL_8;
    case 0xABu:
      goto LABEL_8;
    case 0x201u:
LABEL_41:
      MouseKeyFlags &= ~1u;
      goto LABEL_8;
  }
  if ( v9 != 516 )
  {
    if ( v9 != 519 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_60:
  MouseKeyFlags &= ~2u;
LABEL_8:
  if ( v9 > 0x200 )
  {
    v11 = v9 == 514;
    v12 = v9 - 514;
LABEL_10:
    if ( !v11 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          if ( v14 != 4 )
            goto LABEL_14;
        }
      }
    }
    goto LABEL_37;
  }
  if ( v9 != 512 && v9 != 160 )
  {
    v12 = v9 - 162;
    v11 = v9 == 162;
    goto LABEL_10;
  }
LABEL_37:
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    if ( v9 - 160 <= 0xD )
    {
      if ( !v10 )
        v9 += 352;
    }
    else if ( v10 )
    {
      v9 -= 352;
    }
  }
LABEL_14:
  v15 = 0LL;
  v16 = (unsigned __int16 *)&unk_1C02E1D10;
  do
  {
    if ( *v16 == v9 )
      break;
    v15 = (unsigned int)(v15 + 1);
    v16 += 12;
  }
  while ( (unsigned int)v15 < 0x1C );
  if ( (unsigned int)v15 >= 0x1C )
    return 0LL;
  v17 = 3 * v15;
  v18 = *((_DWORD *)&unk_1C02E1D10 + 6 * v15 + 2);
  if ( (v18 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v19 = *((unsigned __int16 *)&unk_1C02E1D10 + 12 * v15 + 2);
    v18 = *((_DWORD *)&unk_1C02E1D10 + 6 * v15 + 3);
  }
  else
  {
    v19 = *((unsigned __int16 *)&unk_1C02E1D10 + 12 * v15 + 1);
  }
  *a4 = MouseKeyFlags;
  v20 = *((_BYTE *)&unk_1C02E1D10 + 24 * v15 + 16);
  if ( v20 )
  {
    if ( v20 != 5 )
    {
LABEL_22:
      v21 = v20 - 1;
      if ( v21 )
      {
        v29 = v21 - 1;
        if ( v29 )
        {
          v30 = v29 - 2;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 )
                v22 = 64;
              else
                v22 = 0;
            }
            else
            {
              v22 = 32;
            }
          }
          else
          {
            v22 = 16;
          }
        }
        else
        {
          v22 = 2;
        }
      }
      else
      {
        v22 = 1;
      }
      if ( (*((_DWORD *)&unk_1C02E1D10 + 2 * v17 + 2) & 0x10000) != 0 )
        *a4 = v22 | MouseKeyFlags;
      else
        *a4 = MouseKeyFlags & ~v22;
      goto LABEL_26;
    }
    if ( (unsigned int)WORD1(a3) - 1 <= 1 )
    {
      v20 = BYTE2(a3) + 4;
      goto LABEL_22;
    }
    return 0LL;
  }
LABEL_26:
  v23 = *a4;
  if ( (*a4 & 0x73) != 0 )
  {
    v24 = v18 | 4;
    if ( (v23 & 1) != 0 )
      v24 |= 0x10u;
    if ( (v23 & 2) != 0 )
      v24 |= 0x20u;
    if ( (v23 & 0x10) != 0 )
      v24 |= 0x40u;
    if ( (v23 & 0x20) != 0 )
      v24 |= 0x80u;
    if ( (v23 & 0x40) != 0 )
      v24 |= 0x100u;
  }
  else
  {
    v19 = *((unsigned __int16 *)&unk_1C02E1D10 + 4 * v17 + 1);
    v24 = *((_DWORD *)&unk_1C02E1D10 + 2 * v17 + 2) | ~*((_DWORD *)&unk_1C02E1D10 + 2 * v17 + 3) & v18;
  }
  *(_DWORD *)a5 = 0;
  if ( v9 <= 0x200 )
  {
    if ( v9 != 512 )
    {
      if ( v9 > 0xA6 )
      {
        v37 = v9 - 167;
        if ( !v37 )
          goto LABEL_108;
        v39 = v37 - 1;
        v38 = v39 == 0;
        goto LABEL_95;
      }
      if ( v9 == 166 )
        goto LABEL_93;
      v32 = v9 - 160;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_32;
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_56;
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_32;
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_33;
          goto LABEL_86;
        }
LABEL_93:
        *(_DWORD *)a5 = 3;
        goto LABEL_33;
      }
    }
    *(_DWORD *)a5 = 0;
    goto LABEL_33;
  }
  if ( v9 <= 0x207 )
  {
    if ( v9 != 519 )
    {
      v25 = v9 - 513;
      if ( !v25 )
      {
LABEL_32:
        *(_DWORD *)a5 = 1;
        goto LABEL_33;
      }
      v28 = v25 - 1;
      if ( !v28 )
      {
LABEL_56:
        *(_DWORD *)a5 = 2;
        goto LABEL_33;
      }
      v40 = v28 - 1;
      if ( !v40 )
        goto LABEL_32;
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( v42 )
        {
          if ( v42 != 1 )
            goto LABEL_33;
          goto LABEL_93;
        }
LABEL_86:
        *(_DWORD *)a5 = 4;
        goto LABEL_33;
      }
      goto LABEL_93;
    }
LABEL_108:
    *(_DWORD *)a5 = 5;
    goto LABEL_33;
  }
  v39 = v9 - 520;
  v38 = v39 == 0;
LABEL_95:
  if ( v38 )
  {
    *(_DWORD *)a5 = 6;
    goto LABEL_33;
  }
  v43 = v39 - 1;
  if ( !v43 )
    goto LABEL_108;
  v44 = v43 - 2;
  if ( !v44 )
    goto LABEL_100;
  v45 = v44 - 1;
  if ( !v45 )
  {
    v47 = a3 >> 16;
    if ( (_WORD)v47 == 1 )
    {
      *(_DWORD *)a5 = 8;
    }
    else if ( (_WORD)v47 == 2 )
    {
      *(_DWORD *)a5 = 10;
    }
    goto LABEL_33;
  }
  if ( v45 == 1 )
  {
LABEL_100:
    v46 = a3 >> 16;
    if ( (_WORD)v46 == 1 )
    {
      *(_DWORD *)a5 = 7;
    }
    else if ( (_WORD)v46 == 2 )
    {
      *(_DWORD *)a5 = 9;
    }
  }
LABEL_33:
  v26 = v24 | 2;
  **(_DWORD **)(gptiCurrent + 1120LL) ^= (**(_DWORD **)(gptiCurrent + 1120LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02E1D10 + 2 * v17 + 5))) & 0x20;
  if ( a1 )
    *a1 = v19;
  return v26;
}
