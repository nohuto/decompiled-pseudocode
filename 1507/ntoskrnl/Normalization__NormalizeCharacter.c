/*
 * XREFs of Normalization__NormalizeCharacter @ 0x1406CEEA8
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x1406CE038 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x1406CECFC (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x140249B0C (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x140249B34 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x140249B64 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x140249B9C (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x140249C48 (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x140249CD0 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x140249E28 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x140249E50 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x140249ED4 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x140249EFC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140249F44 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x14024A078 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x14024A0E8 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x14024A158 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1406CE038 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1406CE140 (Normalization__CanCombinableCharactersCombine.c)
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
  unsigned __int8 v17; // r15
  char v18; // dl
  unsigned __int8 v19; // r15
  int v20; // eax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // dl
  bool v25; // zf
  int v26; // eax
  int CanCombinableCharactersCombine; // r10d
  int v28; // eax
  int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rax
  int StartBasePair; // eax
  __int64 v33; // rax
  char v34; // di
  char v35; // al
  int StartBase; // eax
  char v37; // di
  char v38; // r8
  __int64 v39; // r9
  char v40; // al
  unsigned __int16 *v41; // rcx
  __int64 v42; // rdx
  unsigned __int16 *v43; // r10
  __int64 v44; // rcx
  unsigned __int16 *v45; // rax
  int v46; // edi
  __int64 v47; // rcx
  unsigned __int16 v48; // si
  __int64 v49; // rcx
  int v50; // edi
  unsigned __int16 v51; // di
  int LastChar; // eax
  unsigned int v53; // r9d
  int v54; // eax
  int v55; // r9d
  unsigned __int16 *v56; // r8
  int v57; // edx
  unsigned int v58; // eax
  unsigned __int16 *v59; // r8
  unsigned __int16 *v60; // r9
  __int64 v61; // r10

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
          v40 = NormBuffer__Append(a4, a2);
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
          v46 = a2 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)(v46 / 588 + 4352), 0) )
            return 3221225507LL;
          v48 = v46 % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v47, v48, 0) )
            return 3221225507LL;
          v50 = v46 % 28;
          if ( (_WORD)v50 )
          {
            v51 = v50 + 4519;
            if ( v51 )
            {
              if ( !NormBuffer__AppendEx(v49, v51, 0) )
                return 3221225507LL;
              v48 = v51;
            }
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v48;
LABEL_108:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( !IsHangulLV(a2) || (v41 = *(unsigned __int16 **)(a4 + 16), v41 == *(unsigned __int16 **)(a4 + 8)) )
        {
LABEL_26:
          v13 = NormBuffer__Append(a4, a2);
          return v13 == 0 ? 0xC0000023 : 0;
        }
        v42 = *v41;
        v43 = v41 + 1;
        v44 = (unsigned int)a2;
        goto LABEL_119;
      }
      if ( (unsigned int)(a2 - 4352) <= 0x12 )
      {
        v56 = *(unsigned __int16 **)(a4 + 16);
        if ( v56 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_26;
        v57 = *v56;
        *(_QWORD *)(a4 + 16) = v56 + 1;
        v58 = ComposeHangulLV(a2, v57);
        if ( !v58 )
        {
          v45 = v59 - 1;
LABEL_99:
          *(_QWORD *)(a4 + 16) = v45;
          goto LABEL_26;
        }
        a2 = v58;
        if ( v59 == v60 )
          goto LABEL_26;
        v42 = *v59;
        v43 = v59 + 1;
        v44 = v58;
LABEL_119:
        *(_QWORD *)(a4 + 16) = v43;
        v54 = ComposeHangulLVT(v44, v42);
        if ( v54 )
          goto LABEL_114;
        v45 = (unsigned __int16 *)(v61 - 2);
        goto LABEL_99;
      }
      if ( (unsigned int)(a2 - 4449) <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v54 = ComposeHangulLV(v55, a2);
        goto LABEL_114;
      }
      if ( (unsigned int)(a2 - 4520) <= 0x1A )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(LastChar) )
          goto LABEL_26;
        NormBuffer__RewindOutputCharacter(a4);
        v54 = ComposeHangulLVT(v53, (unsigned int)a2);
LABEL_114:
        a2 = v54;
        goto LABEL_26;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(a2 - 4447) > 1 )
        goto LABEL_26;
LABEL_20:
      v5 = -5;
    }
    v8 = *(_BYTE *)(((unsigned __int64)v5 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
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
      v40 = NormBuffer__AppendEx(a4, a2, 0);
LABEL_125:
      if ( !v40 )
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
  v17 = *(_BYTE *)(a4 + 72);
  if ( !v17 || v17 == 63 || (v18 = *(_BYTE *)(a4 + 73), (v18 & 0xBF) == 0) )
  {
    v18 = *(_BYTE *)(a4 + 73);
    *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
    *(_BYTE *)(a4 + 92) = v17;
    *(_BYTE *)(a4 + 93) = v18;
    *(_QWORD *)(a4 + 96) = 0LL;
  }
  if ( v9 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
  {
    NormBuffer__IsBlocked((_QWORD *)a4, v10);
    goto LABEL_44;
  }
  if ( !v17 || v17 == 63 )
  {
    if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      a2 = v39;
      v10 = *(_BYTE *)((v39 & 0x7F)
                     + ((unsigned __int64)*(unsigned __int8 *)((v39 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                     + *(_QWORD *)(a1 + 40)
                     - 128) & 0x3F;
    }
    goto LABEL_71;
  }
  if ( (v18 & 0xBF) == 0 )
  {
    if ( v18 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(a4);
      if ( NormBuffer__AppendEx(
             a4,
             v30,
             *(_BYTE *)((v30 & 0x7F)
                      + ((unsigned __int64)*(unsigned __int8 *)((v30 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                      + *(_QWORD *)(a1 + 40)
                      - 128) & 0x3F) )
      {
        v31 = *(_QWORD *)(a4 + 64);
        *(_QWORD *)(a4 + 96) = 0LL;
        *(_QWORD *)(a4 + 80) = v31 + 2;
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
        *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
        *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
        return 0LL;
      }
      return 3221225507LL;
    }
    if ( v17 <= v10 )
      goto LABEL_71;
    if ( v17 == *(_BYTE *)(a1 + 116) )
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
        v33 = *(_QWORD *)(a1 + 40);
        v34 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                               + *(_QWORD *)(a1 + 32)) << 7)
                       + v33
                       - 128) & 0xC0;
        v35 = NormBuffer__ReplaceLastStartBasePair(
                a4,
                CanCombinableCharactersCombine,
                *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                                 + *(_QWORD *)(a1 + 32)) << 7)
                         + v33
                         - 128) & 0x3F,
                v34);
        goto LABEL_76;
      }
    }
    else if ( v17 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_74;
    }
    StartBase = NormBuffer__LastStartBase(a4);
    v29 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
    if ( !v29 )
      goto LABEL_71;
    goto LABEL_81;
  }
  if ( NormBuffer__IsBlocked((_QWORD *)a4, v10) )
  {
LABEL_44:
    v13 = NormBuffer__InsertAtBlockedLocation((_QWORD *)a4, a2, v10);
    return v13 == 0 ? 0xC0000023 : 0;
  }
  v19 = *(_BYTE *)(a4 + 92);
  if ( v19 && v19 != 63 && *(_BYTE *)(a4 + 93) != 64 )
    goto LABEL_52;
  v20 = Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2);
  v21 = v20;
  if ( !v20 )
  {
    if ( !v19 || v19 == 63 )
      goto LABEL_44;
LABEL_52:
    if ( v19 <= v10 )
      goto LABEL_44;
    if ( v19 == *(_BYTE *)(a1 + 116) )
    {
      if ( v10 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v10 != *(_BYTE *)(a1 + 115) )
          goto LABEL_44;
        goto LABEL_59;
      }
    }
    else if ( v19 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
    {
LABEL_59:
      v26 = NormBuffer__LastStartBasePair(a4);
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, v26, a2);
      if ( !CanCombinableCharactersCombine )
        goto LABEL_44;
      goto LABEL_75;
    }
    v28 = NormBuffer__LastStartBase(a4);
    v29 = Normalization__CanCombinableCharactersCombine(a1, v28, a2);
    if ( !v29 )
      goto LABEL_44;
LABEL_81:
    v37 = *(_BYTE *)((v29 & 0x7F)
                   + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v29 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                   + *(_QWORD *)(a1 + 40)
                   - 128);
    v38 = v37 & 0x3F;
    v34 = v37 & 0xC0;
    v35 = NormBuffer__ReplaceLastStartBase(a4, v29, v38, v34);
LABEL_76:
    if ( v35 )
    {
      v25 = v34 == 64;
      goto LABEL_78;
    }
    return 3221225507LL;
  }
  v22 = *(_QWORD *)(a1 + 32);
  v23 = *(_QWORD *)(a4 + 80);
  *(_DWORD *)(a4 + 88) = v21;
  v24 = *(_BYTE *)((v21 & 0x7F)
                 + ((unsigned __int64)*(unsigned __int8 *)((v21 >> 7) + v22) << 7)
                 + *(_QWORD *)(a1 + 40)
                 - 128);
  *(_WORD *)(v23 - 2) = v21;
  *(_BYTE *)(a4 + 93) = v24 & 0xC0;
  v25 = (v24 & 0xC0) == 64;
  *(_BYTE *)(a4 + 92) = v24 & 0x3F;
LABEL_78:
  if ( v25 )
    NormBuffer__RecheckStartCombinations(a4);
  return 0LL;
}
