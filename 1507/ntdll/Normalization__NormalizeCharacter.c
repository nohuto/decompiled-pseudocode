/*
 * XREFs of Normalization__NormalizeCharacter @ 0x18005F468
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x1800021DC (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x18005F2DC (Normalization__Normalize.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x180001640 (NormBuffer__AppendEx.c)
 *     Normalization__AppendDecomposedChar @ 0x1800021DC (Normalization__AppendDecomposedChar.c)
 *     NormBuffer__Append @ 0x18005F438 (NormBuffer__Append.c)
 *     IsHangulLV @ 0x1800810F8 (IsHangulLV.c)
 *     ComposeHangulLV @ 0x1800E2D58 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1800E2D88 (ComposeHangulLVT.c)
 *     NormBuffer__GetLastChar @ 0x1800E2E98 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800E3004 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x1800E3034 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1800E30DC (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1800E310C (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800E315C (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800E32D8 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800E3350 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800E3410 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800E3518 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // r15
  unsigned int v6; // edi
  unsigned __int8 v8; // dl
  char v9; // r14
  unsigned __int8 v10; // bp
  char v11; // al
  char v13; // al
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int16 *v18; // rax
  unsigned __int16 v19; // cx
  __int64 v20; // rdx
  unsigned __int8 v21; // r15
  char v22; // cl
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int8 v25; // r15
  int v26; // eax
  __int64 v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // dl
  bool v31; // zf
  unsigned int StartBasePair; // eax
  unsigned int v33; // r10d
  unsigned int StartBase; // eax
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  char v38; // di
  char v39; // di
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  unsigned int v48; // eax
  int CanCombinableCharactersCombine; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int16 *v53; // rax
  __int64 v54; // rdx
  unsigned __int16 *v55; // r10
  __int64 v56; // rcx
  unsigned __int16 *v57; // rax
  signed int v58; // edi
  __int64 v59; // rcx
  unsigned __int16 v60; // si
  __int64 v61; // rcx
  int v62; // edi
  unsigned __int16 v63; // di
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int v70; // r9d
  unsigned int v71; // eax
  unsigned int LastChar; // eax
  __int64 v73; // rdx
  __int64 v74; // r8
  unsigned int v75; // r9d
  unsigned __int16 *v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // eax
  unsigned __int16 *v79; // r8
  __int64 v80; // r10

  v5 = a3;
  v6 = a2;
  if ( !(_BYTE)a3 )
    goto LABEL_28;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_130;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_130:
          v13 = NormBuffer__Append(a4, v6);
          goto LABEL_17;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, v6, a4);
      }
      if ( v5 != 254 )
        break;
      v18 = *(unsigned __int16 **)(a4 + 16);
      if ( v18 == *(unsigned __int16 **)(a4 + 8) )
        return 3221227287LL;
      v19 = *v18;
      a2 = 1023LL;
      *(_QWORD *)(a4 + 16) = v18 + 1;
      if ( (unsigned __int16)(v19 + 9216) > 0x3FFu )
        return 3221227287LL;
      v6 = v19 + ((v6 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)v6 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_47:
      if ( !v5 )
        goto LABEL_28;
    }
    if ( v5 != 255 )
      break;
    if ( (int)v6 < 44032 )
    {
      if ( v6 - 4352 <= 0x12 )
      {
        v76 = *(unsigned __int16 **)(a4 + 16);
        if ( v76 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_28;
        v77 = *v76;
        *(_QWORD *)(a4 + 16) = v76 + 1;
        v78 = ComposeHangulLV(v6, v77);
        if ( v78 )
        {
          v6 = v78;
          if ( v79 == *(unsigned __int16 **)(a4 + 8) )
            goto LABEL_28;
          v54 = *v79;
          v55 = v79 + 1;
          v56 = v78;
          goto LABEL_128;
        }
        v57 = v79 - 1;
LABEL_110:
        *(_QWORD *)(a4 + 16) = v57;
        goto LABEL_28;
      }
      if ( v6 - 4449 <= 0x14 )
      {
        LastChar = NormBuffer__GetLastChar(a4);
        if ( LastChar - 4352 > 0x12 )
          goto LABEL_28;
        NormBuffer__RewindOutputCharacter(a4, v73, v74, LastChar);
        v71 = ComposeHangulLV(v75, v6);
LABEL_123:
        v6 = v71;
        goto LABEL_28;
      }
      if ( v6 - 4520 <= 0x1A )
      {
        v64 = NormBuffer__GetLastChar(a4);
        if ( (unsigned __int8)IsHangulLV(v64, v65, v66, v64) )
        {
          NormBuffer__RewindOutputCharacter(a4, v67, v68, v69);
          v71 = ComposeHangulLVT(v70, v6);
          goto LABEL_123;
        }
LABEL_28:
        v11 = NormBuffer__Append(a4, v6);
        return v11 == 0 ? 0xC0000023 : 0;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || v6 - 4447 > 1 )
        goto LABEL_28;
    }
    else
    {
      if ( (int)v6 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v58 = v6 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)(v58 / 588 + 4352), 0) )
            return 3221225507LL;
          v60 = v58 % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(v59, v60, 0) )
            return 3221225507LL;
          v62 = v58 % 28;
          if ( (_WORD)v62 )
          {
            v63 = v62 + 4519;
            if ( v63 )
            {
              if ( !NormBuffer__AppendEx(v61, v63, 0) )
                return 3221225507LL;
              v60 = v63;
            }
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v60;
          goto LABEL_19;
        }
        if ( !(unsigned __int8)IsHangulLV(v6, a2, a3, a4) )
          goto LABEL_28;
        v53 = *(unsigned __int16 **)(a4 + 16);
        if ( v53 == *(unsigned __int16 **)(a4 + 8) )
          goto LABEL_28;
        v54 = *v53;
        v55 = v53 + 1;
        v56 = v6;
LABEL_128:
        *(_QWORD *)(a4 + 16) = v55;
        v71 = ComposeHangulLVT(v56, v54);
        if ( v71 )
          goto LABEL_123;
        v57 = (unsigned __int16 *)(v80 - 2);
        goto LABEL_110;
      }
      if ( v6 - 55216 <= 0x16 || v6 - 55243 <= 0x30 )
        goto LABEL_28;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)(((unsigned __int64)v5 << 7) + (v6 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v8 )
    goto LABEL_16;
  v9 = v8 & 0xC0;
  v10 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v10 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      if ( !NormBuffer__AppendEx(a4, v6, v8 & 0x3F) )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = v6;
      *(_BYTE *)(a4 + 92) = v10;
      *(_BYTE *)(a4 + 93) = v9;
      return 0LL;
    }
    NormBuffer__GetLastChar(a4);
    v21 = *(_BYTE *)(a4 + 72);
    if ( !v21 || v21 == 63 || (v22 = *(_BYTE *)(a4 + 73), (v22 & 0xBF) == 0) )
    {
      v22 = *(_BYTE *)(a4 + 73);
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
      *(_BYTE *)(a4 + 92) = v21;
      *(_BYTE *)(a4 + 93) = v22;
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( v9 == (char)0x80 || (((*(_BYTE *)(a4 + 93) | *(_BYTE *)(a4 + 92)) + 64) & 0xBF) == 0 )
    {
      LOBYTE(v20) = v10;
      NormBuffer__IsBlocked(a4, v20);
      goto LABEL_66;
    }
    if ( !v21 || v21 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), v6);
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(a4, v50, v51, CanCombinableCharactersCombine);
        v6 = v52;
        v10 = *(_BYTE *)((v52 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v52 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128) & 0x3F;
      }
      goto LABEL_14;
    }
    if ( (v22 & 0xBF) != 0 )
    {
      LOBYTE(v20) = v10;
      if ( (unsigned __int8)NormBuffer__IsBlocked(a4, v20) )
        goto LABEL_66;
      v25 = *(_BYTE *)(a4 + 92);
      if ( !v25 || v25 == 63 || *(_BYTE *)(a4 + 93) == 64 )
      {
        v26 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), v6);
        v27 = v26;
        if ( v26 )
        {
          v28 = *(_QWORD *)(a1 + 32);
          v29 = *(_QWORD *)(a4 + 80);
          *(_DWORD *)(a4 + 88) = v27;
          v30 = *(_BYTE *)((v27 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)((v27 >> 7) + v28) << 7)
                         + *(_QWORD *)(a1 + 40)
                         - 128);
          *(_WORD *)(v29 - 2) = v27;
          *(_BYTE *)(a4 + 93) = v30 & 0xC0;
          v31 = (v30 & 0xC0) == 64;
          *(_BYTE *)(a4 + 92) = v30 & 0x3F;
          goto LABEL_82;
        }
        if ( !v25 || v25 == 63 )
          goto LABEL_66;
      }
      if ( v25 <= v10 )
        goto LABEL_66;
      if ( v25 == *(_BYTE *)(a1 + 116) )
      {
        if ( v10 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v10 == *(_BYTE *)(a1 + 115) )
            goto LABEL_76;
LABEL_66:
          LOBYTE(v24) = v9;
          LOBYTE(v23) = v10;
          v11 = NormBuffer__InsertAtBlockedLocation(a4, v6, v23, v24);
          return v11 == 0 ? 0xC0000023 : 0;
        }
      }
      else if ( v25 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
      {
LABEL_76:
        StartBasePair = NormBuffer__LastStartBasePair(a4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, v6);
        if ( v33 )
          goto LABEL_96;
        goto LABEL_66;
      }
      StartBase = NormBuffer__LastStartBase(a4);
      v35 = Normalization__CanCombinableCharactersCombine(a1, StartBase, v6);
      if ( !v35 )
        goto LABEL_66;
LABEL_79:
      v36 = v35 & 0x7F;
      v37 = v36 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v35 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
      v38 = *(_BYTE *)(v37 + *(_QWORD *)(a1 + 40) - 128);
      LOBYTE(v37) = v38 & 0x3F;
      v39 = v38 & 0xC0;
      LOBYTE(v36) = v39;
      v40 = NormBuffer__ReplaceLastStartBase(a4, v35, v37, v36);
      goto LABEL_80;
    }
    if ( v22 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(a4 + 88), v6) )
    {
      NormBuffer__RewindOutputCharacter(a4, v41, v42, v43);
      if ( !NormBuffer__AppendEx(
              a4,
              (unsigned int)v44,
              *(_BYTE *)((v44 & 0x7F)
                       + ((unsigned __int64)*(unsigned __int8 *)((v44 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                       + *(_QWORD *)(a1 + 40)
                       - 128) & 0x3F) )
        return 3221225507LL;
      v45 = *(_QWORD *)(a4 + 64);
      *(_QWORD *)(a4 + 96) = 0LL;
      *(_QWORD *)(a4 + 80) = v45 + 2;
      *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
      *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
      *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
      return 0LL;
    }
    if ( v21 > v10 )
    {
      if ( v21 == *(_BYTE *)(a1 + 116) )
      {
        if ( v10 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v10 != *(_BYTE *)(a1 + 115) )
            goto LABEL_14;
          goto LABEL_95;
        }
      }
      else if ( v21 == *(_BYTE *)(a1 + 118) && v10 == *(_BYTE *)(a1 + 117) )
      {
LABEL_95:
        v46 = NormBuffer__LastStartBasePair(a4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, v46, v6);
        if ( v33 )
        {
LABEL_96:
          v47 = *(_QWORD *)(a1 + 40);
          v39 = *(_BYTE *)((v33 & 0x7F)
                         + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                         + v47
                         - 128) & 0xC0;
          LOBYTE(v24) = v39;
          v40 = NormBuffer__ReplaceLastStartBasePair(
                  a4,
                  v33,
                  *(_BYTE *)((v33 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + v47
                           - 128) & 0x3F,
                  v24);
LABEL_80:
          if ( v40 )
          {
            v31 = v39 == 64;
LABEL_82:
            if ( v31 )
              NormBuffer__RecheckStartCombinations(a4);
            return 0LL;
          }
          return 3221225507LL;
        }
        goto LABEL_14;
      }
      v48 = NormBuffer__LastStartBase(a4);
      v35 = Normalization__CanCombinableCharactersCombine(a1, v48, v6);
      if ( v35 )
        goto LABEL_79;
    }
LABEL_14:
    v11 = NormBuffer__AppendEx(a4, v6, v10);
    return v11 == 0 ? 0xC0000023 : 0;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_16:
      v13 = NormBuffer__AppendEx(a4, v6, 0);
LABEL_17:
      if ( !v13 )
        return 3221225507LL;
      *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 88) = v6;
LABEL_19:
      *(_WORD *)(a4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return Normalization__AppendDecomposedChar(a1, v6, a4);
    case 0xC0u:
      v14 = NormBuffer__GetLastChar(a4);
      v15 = Normalization__CanCombinableCharactersCombine(a1, v14, v6);
      if ( !v15 )
        goto LABEL_14;
      NormBuffer__RewindOutputCharacter(a4, v16, v17, v15);
      v6 = a4;
      goto LABEL_47;
  }
  if ( v8 != 255 || !v6 && *(_QWORD *)(a4 + 16) == *(_QWORD *)(a4 + 8) )
    goto LABEL_14;
  return 3221227287LL;
}
