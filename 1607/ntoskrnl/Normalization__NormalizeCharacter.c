/*
 * XREFs of Normalization__NormalizeCharacter @ 0x14068B744
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x14068A87C (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x14068B598 (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x140214EE0 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x140214F08 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x140214F38 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x140214F70 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x14021501C (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x1402150A4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1402151F8 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x140215220 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1402152A4 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1402152CC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140215314 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x140215448 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1402154B8 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x140215528 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x14068A87C (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14068A984 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // r14
  unsigned __int8 v10; // bp
  int v11; // eax
  int v12; // r9d
  char v13; // al
  unsigned __int16 *v15; // rax
  unsigned __int16 v16; // cx
  unsigned __int8 v17; // r11
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // r15
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rax
  bool v27; // zf
  int v28; // eax
  int CanCombinableCharactersCombine; // r10d
  int v30; // eax
  int v31; // eax
  __int64 v32; // r10
  __int64 v33; // r10
  __int64 v34; // rax
  int StartBasePair; // eax
  __int64 v36; // rax
  char v37; // di
  char v38; // al
  int StartBase; // eax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r9
  char v43; // al
  unsigned __int16 *v44; // rcx
  __int64 v45; // rdx
  unsigned __int16 *v46; // r10
  __int64 v47; // rcx
  unsigned __int16 *v48; // rax
  int v49; // edi
  __int64 v50; // rcx
  unsigned __int16 v51; // si
  __int64 v52; // rcx
  int v53; // edi
  unsigned __int16 v54; // di
  int LastChar; // eax
  unsigned int v56; // r11d
  int v57; // eax
  int v58; // r11d
  unsigned __int16 *v59; // r8
  int v60; // edx
  unsigned int v61; // eax
  unsigned __int16 *v62; // r8
  unsigned __int16 *v63; // r9
  __int64 v64; // r10

  v5 = a3;
  if ( !a3 )
    goto LABEL_26;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_124;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_124:
          v43 = NormBuffer__Append(a4, a2);
          goto LABEL_125;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
        case 0xFEu:
          v15 = *(unsigned __int16 **)(a4 + 16);
          if ( v15 == *(unsigned __int16 **)(a4 + 8) )
            return 3221227287LL;
          v16 = *v15;
          *(_QWORD *)(a4 + 16) = v15 + 1;
          if ( (unsigned __int16)(v16 + 9216) > 0x3FFu )
            return 3221227287LL;
          a2 = v16 + ((a2 - 55287) << 10);
          v5 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
          goto LABEL_31;
      }
      if ( v5 != 255 )
        break;
      if ( a2 >= 44032 )
      {
        if ( a2 >= 55204 )
        {
          if ( (unsigned int)(a2 - 55216) <= 0x16 || (unsigned int)(a2 - 55243) <= 0x30 )
            goto LABEL_26;
          goto LABEL_20;
        }
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v49 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)(v49 / 588 + 4352), 0) )
            return 3221225507LL;
          v51 = v49 % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v50, v51, 0) )
            return 3221225507LL;
          v53 = v49 % 28;
          if ( (_WORD)v53 )
          {
            v54 = v53 + 4519;
            if ( v54 )
            {
              if ( !NormBuffer__AppendEx(v52, v54, 0) )
                return 3221225507LL;
              v51 = v54;
            }
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v51;
LABEL_108:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( !IsHangulLV(a2) || (v44 = *(unsigned __int16 **)(a4 + 16), v44 == *(unsigned __int16 **)(a4 + 8)) )
        {
LABEL_26:
          v13 = NormBuffer__Append(a4, a2);
          return v13 == 0 ? 0xC0000023 : 0;
        }
        v45 = *v44;
        v46 = v44 + 1;
        v47 = (unsigned int)a2;
        goto LABEL_119;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v59 = *(unsigned __int16 **)(a4 + 16);
        if ( v59 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v60 = *v59;
        *(_QWORD *)(a4 + 16) = v59 + 1;
        v61 = ComposeHangulLV(a2, v60);
        if ( !v61 )
        {
          v48 = v62 - 1;
LABEL_99:
          *(_QWORD *)(a4 + 16) = v48;
          goto LABEL_26;
        }
        a2 = v61;
        if ( v62 == v63 )
          goto LABEL_26;
        v45 = *v62;
        v46 = v62 + 1;
        v47 = v61;
LABEL_119:
        *(_QWORD *)(a4 + 16) = v46;
        v57 = ComposeHangulLVT(v47, v45);
        if ( v57 )
          goto LABEL_114;
        v48 = (unsigned __int16 *)(v64 - 2);
        goto LABEL_99;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v57 = ComposeHangulLV(v58, a2);
        goto LABEL_114;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(LastChar) )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v57 = ComposeHangulLVT(v56, (unsigned int)a2);
LABEL_114:
        a2 = v57;
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
LABEL_20:
      v5 = -5;
    }
    v8 = *(_BYTE *)((a2 & 0x7F) + ((__int64)(v5 - 1) << 7) + *(_QWORD *)(a1 + 40));
    if ( !v8 )
      goto LABEL_92;
    v9 = v8 & 0xC0;
    v10 = v8 & 0x3F;
    if ( (v8 & 0x3F) != 0 && v10 != 63 )
      break;
    if ( v8 == 127 )
    {
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_92:
      v43 = NormBuffer__AppendEx(a4, a2, 0);
LABEL_125:
      if ( !v43 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      goto LABEL_108;
    }
    if ( v8 == 191 )
      return Normalization__AppendDecomposedChar(a1, a2, a4);
    if ( v8 != 192 )
    {
      if ( v8 == 255 && (a2 || *(_QWORD *)(a4 + 16) != *(_QWORD *)(a4 + 8)) )
        return 3221227287LL;
LABEL_71:
      v13 = NormBuffer__AppendEx(a4, a2, v10);
      return v13 == 0 ? 0xC0000023 : 0;
    }
    v11 = NormBuffer__GetLastChar(a4);
    if ( !(unsigned int)Normalization__CanCombinableCharactersCombine(a1, v11, a2) )
      goto LABEL_71;
    NormBuffer__RewindOutputCharacter(a4);
    a2 = v12;
LABEL_31:
    if ( !v5 )
      goto LABEL_26;
  }
  if ( (v8 & 0x80) == 0 )
  {
    if ( NormBuffer__AppendEx(a4, a2, v8 & 0x3F) )
    {
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = a2;
      *(_BYTE *)(a4 + 92) = v10;
      *(_BYTE *)(a4 + 93) = v9;
      return 0LL;
    }
    return 3221225507LL;
  }
  NormBuffer__GetLastChar(a4);
  v18 = *(_BYTE *)(a4 + 72);
  if ( !v18 || v18 == 63 || (v19 = *(_BYTE *)(a4 + 73), (v19 & v17) == 0) )
  {
    v19 = *(_BYTE *)(a4 + 73);
    *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
    *(_BYTE *)(a4 + 92) = v18;
    *(_BYTE *)(a4 + 93) = v19;
    *(_QWORD *)(a4 + 96) = 0LL;
  }
  if ( v9 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & v17) == 0 )
  {
    NormBuffer__IsBlocked((_QWORD *)a4, v10);
    goto LABEL_44;
  }
  if ( !v18 || v18 == 63 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v42;
      v10 = *(_BYTE *)((v42 & 0x7F)
                     + ((__int64)(*(unsigned __int8 *)((v42 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                     + *(_QWORD *)(a1 + 40)) & 0x3F;
    }
    goto LABEL_71;
  }
  if ( (v19 & v17) == 0 )
  {
    if ( v19 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      if ( NormBuffer__AppendEx(
             a4,
             v33,
             *(_BYTE *)((v33 & 0x7F)
                      + ((__int64)(*(unsigned __int8 *)((v33 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                      + *(_QWORD *)(a1 + 40)) & 0x3F) )
      {
        v34 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v34 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
    if ( v18 <= v10 )
      goto LABEL_71;
    if ( v18 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_71;
LABEL_74:
        StartBasePair = NormBuffer__LastStartBasePair(a4);
        CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
        if ( !CanCombinableCharactersCombine )
          goto LABEL_71;
LABEL_75:
        v36 = *(_QWORD *)(a1 + 40);
        v37 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                       + ((__int64)(*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                       + *(_QWORD *)(a1 + 32))
                                  - 1) << 7)
                       + v36) & 0xC0;
        v38 = NormBuffer__ReplaceLastStartBasePair(
                a4,
                CanCombinableCharactersCombine,
                *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                         + ((__int64)(*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                         + *(_QWORD *)(a1 + 32))
                                    - 1) << 7)
                         + v36) & 0x3F,
                v37);
        goto LABEL_76;
      }
    }
    else if ( v18 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_74;
    }
    StartBase = NormBuffer__LastStartBase(a4);
    v40 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
    v32 = v40;
    if ( !v40 )
      goto LABEL_71;
    goto LABEL_81;
  }
  if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
  {
LABEL_44:
    v13 = NormBuffer__InsertAtBlockedLocation((_QWORD *)a4, a2, v10);
    return v13 == 0 ? 0xC0000023 : 0;
  }
  v20 = *(_BYTE *)(a4 + 92);
  if ( v20 && v20 != 63 && *(_BYTE *)(a4 + 93) != 64 )
    goto LABEL_52;
  v21 = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
  v22 = v21;
  if ( !v21 )
  {
    if ( !v20 || v20 == 63 )
      goto LABEL_44;
LABEL_52:
    if ( v20 <= v10 )
      goto LABEL_44;
    if ( v20 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_44;
        goto LABEL_59;
      }
    }
    else if ( v20 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
LABEL_59:
      v28 = NormBuffer__LastStartBasePair(a4);
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v28, a2);
      if ( !CanCombinableCharactersCombine )
        goto LABEL_44;
      goto LABEL_75;
    }
    v30 = NormBuffer__LastStartBase(a4);
    v31 = Normalization__CanCombinableCharactersCombine(a1, v30, a2);
    v32 = v31;
    if ( !v31 )
      goto LABEL_44;
LABEL_81:
    v41 = *(_QWORD *)(a1 + 40);
    v37 = *(_BYTE *)((v32 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v32 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7) + v41) & 0xC0;
    v38 = NormBuffer__ReplaceLastStartBase(
            a4,
            v32,
            *(_BYTE *)((v32 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v32 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7) + v41) & 0x3F,
            v37);
LABEL_76:
    if ( v38 )
    {
      v27 = v37 == 64;
      goto LABEL_78;
    }
    return 3221225507LL;
  }
  v23 = *(_QWORD *)(a1 + 32);
  v24 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a4 + 88) = v22;
  v25 = *(_BYTE *)((v22 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v22 >> 7) + v23) - 1) << 7) + v24);
  v26 = *(_QWORD *)(a4 + 80);
  *(_BYTE *)(a4 + 93) = v25 & 0xC0;
  v27 = (v25 & 0xC0) == 64;
  *(_BYTE *)(a4 + 92) = v25 & 0x3F;
  *(_WORD *)(v26 - 2) = v22;
LABEL_78:
  if ( v27 )
    NormBuffer__RecheckStartCombinations(a4);
  return 0LL;
}
