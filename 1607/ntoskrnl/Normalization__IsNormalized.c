/*
 * XREFs of Normalization__IsNormalized @ 0x14068AEDC
 * Callers:
 *     RtlIsNormalizedString @ 0x14068BF8C (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x140214EA0 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14068A984 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x14068AB08 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x14068AB4C (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x14068AC28 (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned __int16 *v5; // r13
  int v8; // eax
  int v9; // edi
  __int64 v10; // r9
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r12
  unsigned __int8 v14; // r15
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // r12
  unsigned __int8 v17; // r14
  int CanCombinableCharactersCombine; // eax
  unsigned int v19; // eax
  int CanCombineWithStartFirstPair; // eax
  unsigned __int8 v21; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v22; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v23; // [rsp+32h] [rbp-1Eh]
  unsigned __int8 v24; // [rsp+33h] [rbp-1Dh]
  int v25; // [rsp+34h] [rbp-1Ch] BYREF
  int v26; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-14h]
  int v28; // [rsp+40h] [rbp-10h]
  int v29; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int16 *v30; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v31; // [rsp+98h] [rbp+48h] BYREF
  int v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v25 = 0;
  v21 = 0;
  v26 = 0;
  v29 = 0;
  v31 = 0;
  v30 = a2 - 1;
  v27 = 0;
  v22 = 0;
  v23 = 0;
  if ( a3 <= 0 )
    goto LABEL_95;
  v8 = *(_DWORD *)(a1 + 28);
  v28 = v8;
  while ( 1 )
  {
    v9 = *v5;
    if ( v9 >= v8 )
      break;
LABEL_94:
    --a3;
    ++v5;
    v32 = a3;
    if ( a3 <= 0 )
      goto LABEL_95;
  }
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_BYTE *)(((__int64)*v5 >> 7) + v10);
  if ( !v11 || v11 == 0xFB && *(_BYTE *)(a1 + 113) )
  {
LABEL_93:
    v8 = v28;
    goto LABEL_94;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v11 )
      {
        case 0u:
          goto LABEL_91;
        case 0xFBu:
          goto LABEL_90;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          goto LABEL_83;
      }
      if ( v11 != 254 )
        break;
      if ( a3 <= 1 )
        return 3221227287LL;
      ++v5;
      v32 = --a3;
      if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
        return 3221227287LL;
      v9 = *v5 + ((v9 - 55287) << 10);
      v11 = *(_BYTE *)(((__int64)v9 >> 7) + v10);
    }
    if ( v11 != 255 )
      break;
    if ( v9 < 44032 )
    {
      if ( a3 > 1 )
      {
        if ( CanComposeHangul((unsigned int)v9, v5[1]) )
          goto LABEL_83;
        a3 = v32;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) == 0 && (unsigned int)(v9 - 4447) <= 1 )
        goto LABEL_19;
LABEL_25:
      v11 = 0;
    }
    else
    {
      if ( v9 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( a3 <= 1 )
            goto LABEL_91;
          if ( !CanComposeHangul((unsigned int)v9, v5[1]) )
          {
            a3 = v32;
            goto LABEL_91;
          }
        }
LABEL_83:
        *a4 = 0;
        return 0LL;
      }
      if ( (unsigned int)(v9 - 55216) <= 0x16 || (unsigned int)(v9 - 55243) <= 0x30 )
        goto LABEL_25;
LABEL_19:
      v11 = -5;
    }
  }
  v12 = *(_BYTE *)((v9 & 0x7F) + ((__int64)(v11 - 1) << 7) + *(_QWORD *)(a1 + 40));
  if ( !v12 )
    goto LABEL_91;
  v13 = v12 & 0xC0;
  v24 = v12 & 0xC0;
  v14 = v12 & 0x3F;
  if ( (v12 & 0x3F) != 0 && v14 != 63 )
  {
LABEL_42:
    if ( (v12 & 0x80) == 0 )
    {
      v26 = 0;
LABEL_87:
      v27 = v9;
      v22 = v14;
      goto LABEL_88;
    }
    Normalization__GetLastChar(a1, (__int64)v5, &v30, (unsigned int *)&v25, &v21, &v31);
    v15 = v21;
    if ( !v21 || v21 == 63 )
    {
      v27 = v25;
      v22 = v21;
      v23 = v31;
      if ( ((v31 - 64) & 0xBF) != 0 || v13 != 0xC0 )
        goto LABEL_89;
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v25, v9);
      goto LABEL_82;
    }
    v13 = v31;
    if ( (v31 & 0xBF) != 0 )
    {
      if ( v21 > v14 )
      {
        *a4 = 0;
        return 0LL;
      }
      if ( v24 != 0xC0 || v21 == v14 )
        goto LABEL_89;
      v16 = v23;
      v17 = v22;
      if ( ((((v22 | v23) - 64) & 0xBF) == 0 || v23 == 64 && (!v22 || v22 == 63))
        && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v27, v9) )
      {
        goto LABEL_83;
      }
      if ( v14 >= v17 || (v16 & 0xBF) != 0 || (unsigned __int8)(v17 - 1) > 0x3Du )
        goto LABEL_89;
      if ( v17 == *(_BYTE *)(a1 + 116) )
      {
        if ( v14 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v14 != *(_BYTE *)(a1 + 115) )
          {
LABEL_89:
            a3 = v32;
            v25 = v9;
            v31 = v24;
            v21 = v14;
LABEL_92:
            v30 = v5;
            goto LABEL_93;
          }
          goto LABEL_63;
        }
      }
      else if ( v17 == *(_BYTE *)(a1 + 118) && v14 == *(_BYTE *)(a1 + 117) )
      {
LABEL_63:
        CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(a1, &v29, &v26, v27, v9);
        goto LABEL_82;
      }
      CanCombinableCharactersCombine = Normalization__CanCombineWithStartBase(a1, &v26, v27, v9);
LABEL_82:
      if ( CanCombinableCharactersCombine )
        goto LABEL_83;
      goto LABEL_89;
    }
    v19 = v25;
    v27 = v25;
    v26 = 0;
    v29 = 0;
    if ( v24 != 0xC0 )
      goto LABEL_78;
    if ( v31 == 64 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v9) )
        goto LABEL_83;
      v19 = v27;
    }
    if ( v15 <= v14 )
      goto LABEL_78;
    if ( v15 == *(_BYTE *)(a1 + 116) )
    {
      if ( v14 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v14 == *(_BYTE *)(a1 + 115) )
        {
LABEL_73:
          CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v29, &v26, v19, v9);
          goto LABEL_77;
        }
LABEL_78:
        v22 = v15;
LABEL_88:
        v23 = v13;
        goto LABEL_89;
      }
    }
    else if ( v15 == *(_BYTE *)(a1 + 118) && v14 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_73;
    }
    CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v26, v19, v9);
LABEL_77:
    if ( CanCombineWithStartFirstPair )
      goto LABEL_83;
    goto LABEL_78;
  }
  switch ( v12 )
  {
    case 0x40u:
      goto LABEL_87;
    case 0x7Fu:
LABEL_90:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_91:
      v25 = v9;
      v21 = 0;
      v31 = 0;
      goto LABEL_92;
    case 0x80u:
      goto LABEL_87;
    case 0xBFu:
      goto LABEL_83;
    case 0xC0u:
      Normalization__GetLastChar(a1, (__int64)v5, &v30, (unsigned int *)&v25, &v21, &v31);
      if ( (v21 | v31) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v9) )
        goto LABEL_83;
      goto LABEL_87;
  }
  if ( v12 != 255 )
    goto LABEL_42;
  if ( !v9 && a3 <= 1 )
  {
LABEL_95:
    *a4 = 1;
    return 0LL;
  }
  return 3221227287LL;
}
