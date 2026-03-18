/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C000B2E4
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AF9C (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        enum tagPOINTER_BUTTON_CHANGE_TYPE *a5)
{
  unsigned int MouseKeyFlags; // r9d
  unsigned int v9; // r10d
  int v10; // r11d
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdx
  __int64 v13; // r11
  int v14; // r8d
  unsigned int v15; // ebx
  unsigned __int8 v16; // cl
  int v17; // eax
  int v18; // r8d
  unsigned int v19; // r8d
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // r10d
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
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rdi

  MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 384LL));
  switch ( v9 )
  {
    case 0xA1u:
      goto LABEL_43;
    case 0xA4u:
      goto LABEL_62;
    case 0xA7u:
LABEL_61:
      MouseKeyFlags &= ~0x10u;
      goto LABEL_8;
    case 0xABu:
      goto LABEL_8;
    case 0x201u:
LABEL_43:
      MouseKeyFlags &= ~1u;
      goto LABEL_8;
  }
  if ( v9 != 516 )
  {
    if ( v9 != 519 )
      goto LABEL_8;
    goto LABEL_61;
  }
LABEL_62:
  MouseKeyFlags &= ~2u;
LABEL_8:
  if ( v9 > 0x200 )
  {
    v21 = v9 == 514;
    v22 = v9 - 514;
LABEL_28:
    if ( !v21 )
    {
      v23 = v22 - 3;
      if ( v23 )
      {
        v24 = v23 - 3;
        if ( v24 )
        {
          if ( v24 != 4 )
            goto LABEL_11;
        }
      }
    }
    goto LABEL_10;
  }
  if ( v9 != 512 && v9 != 160 )
  {
    v22 = v9 - 162;
    v21 = v9 == 162;
    goto LABEL_28;
  }
LABEL_10:
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
LABEL_11:
  v11 = 0LL;
  v12 = (unsigned __int16 *)&unk_1C02E8090;
  do
  {
    if ( *v12 == v9 )
      break;
    v11 = (unsigned int)(v11 + 1);
    v12 += 12;
  }
  while ( (unsigned int)v11 < 0x1C );
  if ( (unsigned int)v11 >= 0x1C )
    return 0LL;
  v13 = 3 * v11;
  v14 = *((_DWORD *)&unk_1C02E8090 + 6 * v11 + 2);
  if ( (v14 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v15 = *((unsigned __int16 *)&unk_1C02E8090 + 12 * v11 + 2);
    v14 = *((_DWORD *)&unk_1C02E8090 + 6 * v11 + 3);
  }
  else
  {
    v15 = *((unsigned __int16 *)&unk_1C02E8090 + 12 * v11 + 1);
  }
  *a4 = MouseKeyFlags;
  v16 = *((_BYTE *)&unk_1C02E8090 + 24 * v11 + 16);
  if ( v16 )
  {
    if ( v16 != 5 )
    {
LABEL_34:
      v25 = v16 - 1;
      if ( v25 )
      {
        v29 = v25 - 1;
        if ( v29 )
        {
          v30 = v29 - 2;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 == 1 )
                v26 = 64;
              else
                v26 = 0;
            }
            else
            {
              v26 = 32;
            }
          }
          else
          {
            v26 = 16;
          }
        }
        else
        {
          v26 = 2;
        }
      }
      else
      {
        v26 = 1;
      }
      if ( (*((_DWORD *)&unk_1C02E8090 + 2 * v13 + 2) & 0x10000) != 0 )
        *a4 = v26 | MouseKeyFlags;
      else
        *a4 = MouseKeyFlags & ~v26;
      goto LABEL_17;
    }
    if ( (unsigned int)WORD1(a3) - 1 <= 1 )
    {
      v16 = BYTE2(a3) + 4;
      goto LABEL_34;
    }
    return 0LL;
  }
LABEL_17:
  v17 = *a4;
  if ( (*a4 & 0x73) != 0 )
  {
    v18 = v14 | 4;
    if ( (v17 & 1) != 0 )
      v18 |= 0x10u;
    if ( (v17 & 2) != 0 )
      v18 |= 0x20u;
    if ( (v17 & 0x10) != 0 )
      v18 |= 0x40u;
    if ( (v17 & 0x20) != 0 )
      v18 |= 0x80u;
    if ( (v17 & 0x40) != 0 )
      v18 |= 0x100u;
  }
  else
  {
    v15 = *((unsigned __int16 *)&unk_1C02E8090 + 4 * v13 + 1);
    v18 = *((_DWORD *)&unk_1C02E8090 + 2 * v13 + 2) | ~*((_DWORD *)&unk_1C02E8090 + 2 * v13 + 3) & v14;
  }
  *(_DWORD *)a5 = 0;
  if ( v9 <= 0x200 )
  {
    if ( v9 == 512 )
    {
LABEL_21:
      *(_DWORD *)a5 = 0;
      goto LABEL_22;
    }
    if ( v9 <= 0xA6 )
    {
      if ( v9 == 166 )
        goto LABEL_94;
      v32 = v9 - 160;
      if ( !v32 )
        goto LABEL_21;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_60;
      v34 = v33 - 1;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            if ( v36 != 1 )
              goto LABEL_22;
LABEL_87:
            *(_DWORD *)a5 = 4;
            goto LABEL_22;
          }
          goto LABEL_94;
        }
        goto LABEL_60;
      }
      goto LABEL_42;
    }
    v37 = v9 - 167;
    if ( v37 )
    {
      v39 = v37 - 1;
      v38 = v39 == 0;
      goto LABEL_96;
    }
LABEL_109:
    *(_DWORD *)a5 = 5;
    goto LABEL_22;
  }
  if ( v9 <= 0x207 )
  {
    if ( v9 != 519 )
    {
      v27 = v9 - 513;
      if ( !v27 )
        goto LABEL_60;
      v28 = v27 - 1;
      if ( v28 )
      {
        v40 = v28 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( !v42 )
              goto LABEL_87;
            if ( v42 != 1 )
              goto LABEL_22;
          }
LABEL_94:
          *(_DWORD *)a5 = 3;
          goto LABEL_22;
        }
LABEL_60:
        *(_DWORD *)a5 = 1;
        goto LABEL_22;
      }
LABEL_42:
      *(_DWORD *)a5 = 2;
      goto LABEL_22;
    }
    goto LABEL_109;
  }
  v39 = v9 - 520;
  v38 = v39 == 0;
LABEL_96:
  if ( v38 )
  {
    *(_DWORD *)a5 = 6;
    goto LABEL_22;
  }
  v43 = v39 - 1;
  if ( !v43 )
    goto LABEL_109;
  v44 = v43 - 2;
  if ( !v44 )
    goto LABEL_101;
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
    goto LABEL_22;
  }
  if ( v45 == 1 )
  {
LABEL_101:
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
LABEL_22:
  v19 = v18 | 2;
  **(_DWORD **)(gptiCurrent + 1136LL) ^= (**(_DWORD **)(gptiCurrent + 1136LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02E8090 + 2 * v13 + 5))) & 0x20;
  if ( a1 )
    *a1 = v15;
  return v19;
}
