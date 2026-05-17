/*
 * XREFs of Normalization__IsNormalized @ 0x1800E39AC
 * Callers:
 *     RtlIsNormalizedString @ 0x1800E3E90 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1800E2D10 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800E3518 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800E3668 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800E36B4 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x1800E3798 (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned __int16 *v5; // r13
  int v8; // edi
  __int64 v9; // r9
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // r14
  unsigned __int8 v15; // r12
  unsigned __int8 v16; // r14
  int CanCombinableCharactersCombine; // eax
  unsigned int v18; // eax
  int CanCombineWithStartFirstPair; // eax
  unsigned __int8 v20; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v21; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v22; // [rsp+32h] [rbp-1Eh]
  unsigned __int8 v23; // [rsp+33h] [rbp-1Dh]
  int v24; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v25; // [rsp+38h] [rbp-18h]
  int v26; // [rsp+3Ch] [rbp-14h] BYREF
  int v27; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v29; // [rsp+98h] [rbp+48h] BYREF
  int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v24 = 0;
  v20 = 0;
  v26 = 0;
  v27 = 0;
  v29 = 0;
  v22 = 0;
  v28 = a2 - 1;
  v25 = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( a3 <= 0 )
      goto LABEL_94;
    v8 = *v5;
    if ( v8 >= *(_DWORD *)(a1 + 28) )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_BYTE *)(((__int64)*v5 >> 7) + v9);
      if ( v10 )
      {
        if ( v10 != 0xFB || !*(_BYTE *)(a1 + 113) )
          break;
      }
    }
LABEL_92:
    ++v5;
    v30 = --a3;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v10 )
      {
        case 0u:
          goto LABEL_90;
        case 0xFBu:
          goto LABEL_89;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          goto LABEL_82;
      }
      if ( v10 != 254 )
        break;
      if ( a3 <= 1 )
        return 3221227287LL;
      ++v5;
      v30 = --a3;
      if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
        return 3221227287LL;
      v8 = *v5 + ((v8 - 55287) << 10);
      v10 = *(_BYTE *)(((__int64)v8 >> 7) + v9);
    }
    if ( v10 != 255 )
      break;
    if ( v8 < 44032 )
    {
      if ( a3 > 1 )
      {
        if ( CanComposeHangul(v8, v5[1]) )
          goto LABEL_82;
        a3 = v30;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) == 0 && (unsigned int)(v8 - 4447) <= 1 )
        goto LABEL_18;
LABEL_24:
      v10 = 0;
    }
    else
    {
      if ( v8 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( a3 <= 1 )
            goto LABEL_90;
          if ( !CanComposeHangul(v8, v5[1]) )
          {
            a3 = v30;
            goto LABEL_90;
          }
        }
LABEL_82:
        *a4 = 0;
        return 0LL;
      }
      if ( (unsigned int)(v8 - 55216) <= 0x16 || (unsigned int)(v8 - 55243) <= 0x30 )
        goto LABEL_24;
LABEL_18:
      v10 = -5;
    }
  }
  v11 = *(_BYTE *)((v8 & 0x7F) + ((unsigned __int64)v10 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v11 )
    goto LABEL_90;
  v12 = v11 & 0xC0;
  v23 = v11 & 0xC0;
  v13 = v11 & 0x3F;
  if ( (v11 & 0x3F) != 0 && v13 != 63 )
  {
LABEL_41:
    if ( (v11 & 0x80) == 0 )
    {
      v26 = 0;
LABEL_86:
      v25 = v8;
      v21 = v13;
      goto LABEL_87;
    }
    Normalization__GetLastChar(a1, (__int64)v5, &v28, (unsigned int *)&v24, &v20, &v29);
    v14 = v20;
    if ( !v20 || v20 == 63 )
    {
      v25 = v24;
      v21 = v20;
      v22 = v29;
      if ( ((v29 - 64) & 0xBF) != 0 || v12 != 0xC0 )
        goto LABEL_88;
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v24, v8);
      goto LABEL_81;
    }
    v12 = v29;
    if ( (v29 & 0xBF) != 0 )
    {
      if ( v20 > v13 )
      {
        *a4 = 0;
        return 0LL;
      }
      if ( v23 != 0xC0 || v20 == v13 )
        goto LABEL_88;
      v15 = v22;
      v16 = v21;
      if ( ((((v21 | v22) - 64) & 0xBF) == 0 || v22 == 64 && (!v21 || v21 == 63))
        && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v8) )
      {
        goto LABEL_82;
      }
      if ( v13 >= v16 || (v15 & 0xBF) != 0 || (unsigned __int8)(v16 - 1) > 0x3Du )
        goto LABEL_88;
      if ( v16 == *(_BYTE *)(a1 + 116) )
      {
        if ( v13 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v13 != *(_BYTE *)(a1 + 115) )
          {
LABEL_88:
            a3 = v30;
            v24 = v8;
            v29 = v23;
            v20 = v13;
LABEL_91:
            v28 = v5;
            goto LABEL_92;
          }
          goto LABEL_62;
        }
      }
      else if ( v16 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
      {
LABEL_62:
        CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(a1, &v27, &v26, v25, v8);
        goto LABEL_81;
      }
      CanCombinableCharactersCombine = Normalization__CanCombineWithStartBase(a1, &v26, v25, v8);
LABEL_81:
      if ( CanCombinableCharactersCombine )
        goto LABEL_82;
      goto LABEL_88;
    }
    v18 = v24;
    v25 = v24;
    v26 = 0;
    v27 = 0;
    if ( v23 != 0xC0 )
      goto LABEL_77;
    if ( v29 == 64 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v24, v8) )
        goto LABEL_82;
      v18 = v25;
    }
    if ( v14 <= v13 )
      goto LABEL_77;
    if ( v14 == *(_BYTE *)(a1 + 116) )
    {
      if ( v13 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v13 == *(_BYTE *)(a1 + 115) )
        {
LABEL_72:
          CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v27, &v26, v18, v8);
          goto LABEL_76;
        }
LABEL_77:
        v21 = v14;
LABEL_87:
        v22 = v12;
        goto LABEL_88;
      }
    }
    else if ( v14 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_72;
    }
    CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v26, v18, v8);
LABEL_76:
    if ( CanCombineWithStartFirstPair )
      goto LABEL_82;
    goto LABEL_77;
  }
  switch ( v11 )
  {
    case 0x40u:
      goto LABEL_86;
    case 0x7Fu:
LABEL_89:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_90:
      v29 = 0;
      v20 = 0;
      v24 = v8;
      goto LABEL_91;
    case 0x80u:
      goto LABEL_86;
    case 0xBFu:
      goto LABEL_82;
    case 0xC0u:
      Normalization__GetLastChar(a1, (__int64)v5, &v28, (unsigned int *)&v24, &v20, &v29);
      if ( (v20 | v29) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v24, v8) )
        goto LABEL_82;
      goto LABEL_86;
  }
  if ( v11 != 255 )
    goto LABEL_41;
  if ( !v8 && a3 <= 1 )
  {
LABEL_94:
    *a4 = 1;
    return 0LL;
  }
  return 3221227287LL;
}
