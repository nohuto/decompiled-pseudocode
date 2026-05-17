/*
 * XREFs of Normalization__IsNormalized @ 0x180002D18
 * Callers:
 *     RtlIsNormalizedString @ 0x180002C90 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1800F0F8C (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F18B8 (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x1800F1A44 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1800F1A90 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x1800F1B78 (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  unsigned __int16 *v5; // r13
  __int64 v7; // rdi
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
  unsigned int v24; // [rsp+34h] [rbp-1Ch] BYREF
  int v25; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-14h]
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
  v25 = 0;
  v27 = 0;
  v29 = 0;
  v22 = 0;
  v28 = a2 - 1;
  v26 = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( a3 <= 0 )
      goto LABEL_6;
    v7 = *v5;
    if ( (int)v7 >= *(_DWORD *)(a1 + 28) )
    {
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_BYTE *)((v7 >> 7) + v9);
      if ( v10 )
      {
        if ( v10 != 0xFB || !*(_BYTE *)(a1 + 113) )
          break;
      }
    }
LABEL_5:
    ++v5;
    v30 = --a3;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        switch ( v10 )
        {
          case 0u:
            goto LABEL_97;
          case 0xFBu:
            goto LABEL_96;
          case 0xFCu:
            return 3221227287LL;
          case 0xFDu:
            goto LABEL_89;
        }
        if ( v10 != 254 )
          break;
        if ( a3 <= 1 )
          return 3221227287LL;
        ++v5;
        v30 = --a3;
        if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
          return 3221227287LL;
        LODWORD(v7) = *v5 + (((_DWORD)v7 - 55287) << 10);
        v10 = *(_BYTE *)(((__int64)(int)v7 >> 7) + v9);
      }
      if ( v10 != 255 )
      {
        v11 = *(_BYTE *)((v7 & 0x7F) + ((__int64)(v10 - 1) << 7) + *(_QWORD *)(a1 + 40));
        if ( v11 )
        {
          v12 = v11 & 0xC0;
          v23 = v11 & 0xC0;
          v13 = v11 & 0x3F;
          if ( (v11 & 0x3F) != 0 && v13 != 63 )
          {
LABEL_48:
            if ( (v11 & 0x80) != 0 )
            {
              Normalization__GetLastChar(
                a1,
                (_DWORD)v5,
                (unsigned int)&v28,
                (unsigned int)&v24,
                (__int64)&v20,
                (__int64)&v29);
              v14 = v20;
              if ( !v20 || v20 == 63 )
              {
                v26 = v24;
                v21 = v20;
                v22 = v29;
                if ( ((v29 - 64) & 0xBF) != 0 || v12 != 0xC0 )
                  goto LABEL_95;
                CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                                   a1,
                                                   v24,
                                                   (unsigned int)v7);
                goto LABEL_88;
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
                  goto LABEL_95;
                v15 = v22;
                v16 = v21;
                if ( ((((v21 | v22) - 64) & 0xBF) == 0 || v22 == 64 && (!v21 || v21 == 63))
                  && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v26, (unsigned int)v7) )
                {
                  goto LABEL_89;
                }
                if ( v13 >= v16 || (v15 & 0xBF) != 0 || (unsigned __int8)(v16 - 1) > 0x3Du )
                  goto LABEL_95;
                if ( v16 == *(_BYTE *)(a1 + 116) )
                {
                  if ( v13 >= *(_BYTE *)(a1 + 114) )
                  {
                    if ( v13 != *(_BYTE *)(a1 + 115) )
                      goto LABEL_95;
                    goto LABEL_69;
                  }
                }
                else if ( v16 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
                {
LABEL_69:
                  CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(
                                                     a1,
                                                     (unsigned int)&v27,
                                                     (unsigned int)&v25,
                                                     v26,
                                                     v7);
                  goto LABEL_88;
                }
                CanCombinableCharactersCombine = Normalization__CanCombineWithStartBase(a1, &v25, v26, (unsigned int)v7);
LABEL_88:
                if ( CanCombinableCharactersCombine )
                  goto LABEL_89;
                goto LABEL_95;
              }
              v18 = v24;
              v26 = v24;
              v25 = 0;
              v27 = 0;
              if ( v23 != 0xC0 )
                goto LABEL_84;
              if ( v29 == 64 )
              {
                if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v24, (unsigned int)v7) )
                  goto LABEL_89;
                v18 = v26;
              }
              if ( v14 <= v13 )
                goto LABEL_84;
              if ( v14 == *(_BYTE *)(a1 + 116) )
              {
                if ( v13 >= *(_BYTE *)(a1 + 114) )
                {
                  if ( v13 != *(_BYTE *)(a1 + 115) )
                  {
LABEL_84:
                    v21 = v14;
LABEL_94:
                    v22 = v12;
LABEL_95:
                    a3 = v30;
                    v24 = v7;
                    v29 = v23;
                    v20 = v13;
LABEL_98:
                    v28 = v5;
                    goto LABEL_5;
                  }
                  goto LABEL_79;
                }
              }
              else if ( v14 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
              {
LABEL_79:
                CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(
                                                 a1,
                                                 (unsigned int)&v27,
                                                 (unsigned int)&v25,
                                                 v18,
                                                 v7);
                goto LABEL_83;
              }
              CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v25, v18, (unsigned int)v7);
LABEL_83:
              if ( CanCombineWithStartFirstPair )
                goto LABEL_89;
              goto LABEL_84;
            }
            v25 = 0;
LABEL_93:
            v26 = v7;
            v21 = v13;
            goto LABEL_94;
          }
          if ( v11 == 64 )
            goto LABEL_93;
          if ( v11 != 127 )
          {
            switch ( v11 )
            {
              case 0x80u:
                goto LABEL_93;
              case 0xBFu:
                goto LABEL_89;
              case 0xC0u:
                Normalization__GetLastChar(
                  a1,
                  (_DWORD)v5,
                  (unsigned int)&v28,
                  (unsigned int)&v24,
                  (__int64)&v20,
                  (__int64)&v29);
                if ( (v20 | v29) == 0x80
                  && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v24, (unsigned int)v7) )
                {
                  goto LABEL_89;
                }
                goto LABEL_93;
              case 0xFFu:
                if ( (_DWORD)v7 || a3 > 1 )
                  return 3221227287LL;
LABEL_6:
                *a4 = 1;
                return 0LL;
            }
            goto LABEL_48;
          }
LABEL_96:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
        }
LABEL_97:
        v29 = 0;
        v20 = 0;
        v24 = v7;
        goto LABEL_98;
      }
      if ( (int)v7 >= 44032 )
        break;
      if ( a3 > 1 )
      {
        if ( (unsigned __int8)CanComposeHangul((unsigned int)v7, v5[1]) )
          goto LABEL_89;
        a3 = v30;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v7 - 4447) > 1 )
        goto LABEL_28;
LABEL_22:
      v10 = -5;
    }
    if ( (int)v7 < 55204 )
      break;
    if ( (unsigned int)(v7 - 55216) > 0x16 && (unsigned int)(v7 - 55243) > 0x30 )
      goto LABEL_22;
LABEL_28:
    v10 = 0;
  }
  if ( *(_BYTE *)(a1 + 112) != 1 )
  {
    if ( a3 <= 1 )
      goto LABEL_97;
    if ( !(unsigned __int8)CanComposeHangul((unsigned int)v7, v5[1]) )
    {
      a3 = v30;
      goto LABEL_97;
    }
  }
LABEL_89:
  *a4 = 0;
  return 0LL;
}
