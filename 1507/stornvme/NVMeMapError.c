/*
 * XREFs of NVMeMapError @ 0x1C000CE84
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C000C700 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0005E04 (GetSrbScsiData.c)
 *     memmove @ 0x1C000EAC0 (memmove.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

unsigned __int8 __fastcall NVMeMapError(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r8d
  char v4; // bl
  char v5; // si
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  int v8; // ecx
  char v9; // al
  unsigned int v10; // r8d
  char v11; // al
  unsigned __int8 result; // al
  char *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // r14
  unsigned int v16; // ebx
  char *v17; // rcx
  unsigned int v18; // ebx
  char Src; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+31h] [rbp-1Fh]
  __int64 v21; // [rsp+39h] [rbp-17h]
  char v22; // [rsp+41h] [rbp-Fh]
  unsigned __int8 v23; // [rsp+90h] [rbp+40h] BYREF
  char *v24; // [rsp+98h] [rbp+48h] BYREF
  void *v25; // [rsp+A0h] [rbp+50h] BYREF

  if ( *(_BYTE *)(a1 + 2) == 40 )
    v2 = *(_QWORD *)(a1 + 104);
  else
    v2 = *(_QWORD *)(a1 + 56);
  if ( (v2 & 0xFFF) != 0 )
    v2 = v2 - (v2 & 0xFFF) + 4096;
  v3 = *(unsigned __int16 *)(v2 + 4184);
  v24 = 0LL;
  v20 = 0LL;
  v4 = 0;
  Src = 0;
  v5 = 0;
  v21 = 0LL;
  v22 = 0;
  v25 = 0LL;
  v23 = 0;
  if ( ((v3 >> 9) & 7) == 0 )
  {
    v10 = v3 >> 1;
    if ( (unsigned __int8)v10 <= 0x80u )
    {
      if ( (unsigned __int8)v10 == 128 )
      {
        *(_WORD *)((char *)&v21 + 3) = 33;
        v9 = BYTE1(v20) & 0xF0 | 5;
        goto LABEL_86;
      }
      if ( (unsigned __int8)v10 > 9u )
      {
        if ( (unsigned __int8)v10 != 10 )
        {
          if ( (unsigned __int8)v10 == 11 )
          {
            *(_WORD *)((char *)&v21 + 3) = 2336;
            v9 = BYTE1(v20) & 0xF0 | 5;
            goto LABEL_86;
          }
          if ( (unsigned __int8)v10 == 12 )
          {
            *(_WORD *)((char *)&v21 + 3) = 44;
            v9 = BYTE1(v20) & 0xF0 | 5;
            goto LABEL_86;
          }
          if ( (unsigned __int8)v10 != 13
            && (unsigned __int8)v10 != 14
            && (unsigned __int8)v10 != 15
            && (unsigned int)(unsigned __int8)v10 - 16 > 1 )
          {
            goto LABEL_88;
          }
          goto LABEL_73;
        }
      }
      else if ( (unsigned __int8)v10 != 9 )
      {
        if ( !(_BYTE)v10 )
        {
          *(_BYTE *)(a1 + 3) = 1;
          v5 = 0;
          goto LABEL_89;
        }
        switch ( (unsigned __int8)v10 )
        {
          case 1u:
            *(_WORD *)((char *)&v21 + 3) = 32;
            v9 = BYTE1(v20) & 0xF0 | 5;
            goto LABEL_86;
          case 2u:
            goto LABEL_35;
          case 3u:
            *(_WORD *)((char *)&v21 + 3) = 35;
            v9 = BYTE1(v20) & 0xF0 | 5;
            goto LABEL_86;
        }
        if ( (unsigned __int8)v10 != 4 )
        {
          if ( (unsigned __int8)v10 == 5 )
          {
            v5 = 34;
            *(_WORD *)((char *)&v21 + 3) = 2059;
            v9 = BYTE1(v20) & 0xF0 | 0xB;
            goto LABEL_87;
          }
          if ( (unsigned __int8)v10 == 6 )
          {
            *(_WORD *)((char *)&v21 + 3) = 68;
            v9 = BYTE1(v20) & 0xF0 | 4;
            goto LABEL_86;
          }
          if ( (unsigned int)(unsigned __int8)v10 - 7 > 1 )
            goto LABEL_88;
          goto LABEL_60;
        }
LABEL_84:
        v9 = BYTE1(v20) & 0xF0 | 3;
        goto LABEL_85;
      }
LABEL_60:
      v5 = 34;
      *(_WORD *)((char *)&v21 + 3) = 0;
      v9 = BYTE1(v20) & 0xF0 | 0xB;
      goto LABEL_87;
    }
    if ( (unsigned __int8)v10 != 129 )
    {
      if ( (unsigned __int8)v10 == 130 )
      {
        v5 = 2;
        v11 = BYTE1(v20) & 0xF2;
        *(_BYTE *)(a1 + 3) = 4;
        BYTE6(v20) = 10;
        BYTE1(v20) = v11 | 2;
        v4 = -16;
        Src = -16;
        if ( *(__int16 *)(v2 + 4184) >= 0 )
          *(_WORD *)((char *)&v21 + 3) = 260;
        else
          *(_WORD *)((char *)&v21 + 3) = 4;
        goto LABEL_89;
      }
      if ( (unsigned __int8)v10 != 131 )
      {
LABEL_88:
        *(_BYTE *)(a1 + 3) = 4;
        goto LABEL_89;
      }
      v5 = 24;
      *(_WORD *)((char *)&v21 + 3) = 2348;
      v9 = BYTE1(v20) & 0xF0 | 5;
LABEL_87:
      v4 = -16;
      BYTE6(v20) = 10;
      Src = -16;
      BYTE1(v20) = v9;
      goto LABEL_88;
    }
    goto LABEL_84;
  }
  if ( ((v3 >> 9) & 7) == 1 )
  {
    v7 = v3 >> 1;
    if ( (unsigned __int8)v7 > 0x80u )
    {
      v8 = (unsigned __int8)v7 - 129;
      if ( (unsigned __int8)v7 != 129 )
      {
LABEL_34:
        if ( v8 != 1 )
          goto LABEL_88;
        goto LABEL_35;
      }
      goto LABEL_35;
    }
    if ( (unsigned __int8)v7 == 128 )
      goto LABEL_35;
    if ( (unsigned __int8)v7 > 9u )
    {
      if ( (unsigned __int8)v7 == 10 )
      {
        *(_WORD *)((char *)&v21 + 3) = 305;
        v9 = BYTE1(v20) & 0xF0 | 5;
        goto LABEL_86;
      }
      if ( (unsigned __int8)v7 != 11 )
      {
        if ( (unsigned __int8)v7 == 12
          || (unsigned __int8)v7 == 13
          || (unsigned __int8)v7 == 14
          || (unsigned __int8)v7 == 15 )
        {
          goto LABEL_35;
        }
        if ( (unsigned __int8)v7 != 16 )
          goto LABEL_88;
      }
      v9 = BYTE1(v20) & 0xF0 | 6;
LABEL_85:
      *(_WORD *)((char *)&v21 + 3) = 0;
      goto LABEL_86;
    }
    if ( (unsigned __int8)v7 == 9 )
    {
LABEL_35:
      *(_WORD *)((char *)&v21 + 3) = 36;
      v9 = BYTE1(v20) & 0xF0 | 5;
LABEL_86:
      v5 = 2;
      goto LABEL_87;
    }
    if ( !(_BYTE)v7 || (unsigned __int8)v7 == 1 )
    {
      *(_WORD *)((char *)&v21 + 3) = 38;
      v9 = BYTE1(v20) & 0xF0 | 5;
      goto LABEL_86;
    }
    if ( (unsigned __int8)v7 != 2 && (unsigned __int8)v7 != 3 && (unsigned __int8)v7 != 5 )
    {
      if ( (unsigned __int8)v7 != 6 )
      {
        v8 = (unsigned __int8)v7 - 7;
        if ( (unsigned __int8)v7 != 7 )
          goto LABEL_34;
        goto LABEL_73;
      }
      goto LABEL_35;
    }
LABEL_73:
    v9 = BYTE1(v20) & 0xF0 | 5;
    goto LABEL_85;
  }
  if ( ((v3 >> 9) & 7) != 2 )
    goto LABEL_88;
  v6 = v3 >> 1;
  *(_BYTE *)(a1 + 3) = 4;
  switch ( (unsigned __int8)v6 )
  {
    case 0x80u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 3;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 3;
      break;
    case 0x81u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 3;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 17;
      break;
    case 0x82u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 3;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 272;
      break;
    case 0x83u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 3;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 529;
      break;
    case 0x84u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 3;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 785;
      break;
    case 0x85u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 0xE;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 29;
      break;
    case 0x86u:
      v4 = -16;
      Src = -16;
      BYTE6(v20) = 10;
      BYTE1(v20) = BYTE1(v20) & 0xF0 | 5;
      v5 = 2;
      *(_WORD *)((char *)&v21 + 3) = 2336;
      break;
  }
LABEL_89:
  result = GetSrbScsiData(a1, 0LL, &v24, &v25, &v23);
  if ( v24 )
    *v24 = v5;
  if ( v4 < 0 )
  {
    v13 = (char *)v25;
    if ( v25 )
    {
      result = v23;
      if ( v23 )
      {
        v14 = v23;
        v15 = v23;
        if ( v23 > 0x12u )
          v15 = 18LL;
        result = (unsigned __int8)memmove(v25, &Src, (unsigned int)v15);
        *(_BYTE *)(a1 + 3) |= 0x80u;
        if ( v14 > (unsigned int)v15 )
        {
          v16 = v14 - v15;
          v17 = &v13[v15];
          if ( (v16 & 3) != 0 )
          {
            if ( v16 )
              return (unsigned __int8)memset(v17, 0, v16);
          }
          else
          {
            v18 = v16 >> 2;
            if ( v18 )
              return (unsigned __int8)memset(v17, 0, 4LL * v18);
          }
        }
      }
    }
  }
  return result;
}
