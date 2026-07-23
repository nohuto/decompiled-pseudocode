/*
 * XREFs of Normalization__NormalizeCharacter @ 0x180058880
 * Callers:
 *     Normalization__Normalize @ 0x1800584F8 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x1800F17AC (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__Append @ 0x1800586B8 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x180059044 (NormBuffer__AppendEx.c)
 *     IsHangulLV @ 0x1800901B4 (IsHangulLV.c)
 *     ComposeHangulLV @ 0x1800F0FD4 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1800F1004 (ComposeHangulLVT.c)
 *     NormBuffer__GetLastChar @ 0x1800F1118 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800F1288 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x1800F12B8 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1800F1360 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1800F1390 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800F13E0 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800F1564 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800F15DC (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800F16A0 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x1800F17AC (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800F18B8 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  char v13; // al
  signed int v14; // edi
  __int64 v15; // rcx
  unsigned __int16 v16; // si
  __int64 v17; // rcx
  int v18; // edi
  unsigned __int16 v19; // di
  unsigned __int16 *v20; // rax
  __int64 v21; // rdx
  unsigned __int16 *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned __int16 *v26; // r8
  unsigned int v27; // eax
  __int64 v28; // r10
  unsigned __int16 *v29; // rax
  __int64 v30; // rdx
  unsigned __int8 v31; // r15
  char v32; // cl
  __int64 v33; // r8
  unsigned __int8 v34; // r15
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // r10d
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned int StartBasePair; // eax
  __int64 v44; // rax
  char v45; // di
  char v46; // al
  unsigned int StartBase; // eax
  int v48; // eax
  __int64 v49; // r10
  __int64 v50; // rax
  bool v51; // zf
  __int64 v52; // rcx
  __int64 v53; // rax
  char v54; // dl
  __int64 v55; // rax
  int CanCombinableCharactersCombine; // eax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned int v60; // eax
  int v61; // eax
  unsigned int LastChar; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  unsigned int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  unsigned __int16 v74; // cx
  unsigned __int16 *v75; // rax
  unsigned __int16 *v76; // rax
  unsigned int v77; // r9d
  unsigned int v78; // r9d

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_25;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_131;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_131:
          v9 = NormBuffer__Append(v4, a2);
          goto LABEL_10;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, v4);
      }
      if ( v5 != 254 )
        break;
      v76 = *(unsigned __int16 **)(v4 + 16);
      if ( v76 == *(unsigned __int16 **)(v4 + 8) )
        return 3221227287LL;
      v74 = *v76;
      *(_QWORD *)(v4 + 16) = v76 + 1;
      if ( (unsigned __int16)(v74 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = v74 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_125:
      if ( !v5 )
        goto LABEL_25;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v75 = *(unsigned __int16 **)(v4 + 16);
        if ( v75 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_25;
        v24 = *v75;
        *(_QWORD *)(v4 + 16) = v75 + 1;
        v25 = ComposeHangulLV(a2, v24);
        if ( !v25 )
        {
          v29 = v26 - 1;
          goto LABEL_47;
        }
        a2 = v25;
        if ( v26 != *(unsigned __int16 **)(v4 + 8) )
        {
          v21 = *v26;
          v22 = v26 + 1;
          v23 = v25;
LABEL_44:
          *(_QWORD *)(v4 + 16) = v22;
          v27 = ComposeHangulLVT(v23, v21);
          if ( v27 )
          {
LABEL_45:
            a2 = v27;
            goto LABEL_25;
          }
          v29 = (unsigned __int16 *)(v28 - 2);
LABEL_47:
          *(_QWORD *)(v4 + 16) = v29;
        }
LABEL_25:
        v13 = NormBuffer__Append(v4, a2);
        return v13 == 0 ? 0xC0000023 : 0;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        LastChar = NormBuffer__GetLastChar(v4);
        if ( LastChar - 4352 <= 0x12 )
        {
          NormBuffer__RewindOutputCharacter(v4, v63, v64, LastChar);
          v27 = ComposeHangulLV(v78, a2);
          goto LABEL_45;
        }
        goto LABEL_25;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        v65 = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(v65, v66, v67, v65) )
        {
          NormBuffer__RewindOutputCharacter(v4, v68, v69, v70);
          v27 = ComposeHangulLVT(v77, a2);
          goto LABEL_45;
        }
        goto LABEL_25;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_25;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v14 = a2 - 44032;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)(v14 / 588 + 4352), 0LL, 0LL) )
            return 3221225507LL;
          v16 = v14 % 588 / 28 + 4449;
          if ( !(unsigned __int8)NormBuffer__AppendEx(v15, v16, 0LL, 0LL) )
            return 3221225507LL;
          v18 = v14 % 28;
          if ( (_WORD)v18 )
          {
            v19 = v18 + 4519;
            if ( v19 )
            {
              if ( !(unsigned __int8)NormBuffer__AppendEx(v17, v19, 0LL, 0LL) )
                return 3221225507LL;
              v16 = v19;
            }
          }
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v16;
          goto LABEL_12;
        }
        if ( (unsigned __int8)IsHangulLV(a2, v5, a3, a4) )
        {
          v20 = *(unsigned __int16 **)(v4 + 16);
          if ( v20 != *(unsigned __int16 **)(v4 + 8) )
          {
            v21 = *v20;
            v22 = v20 + 1;
            v23 = a2;
            goto LABEL_44;
          }
        }
        goto LABEL_25;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_25;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)((a2 & 0x7F) + ((__int64)(v5 - 1) << 7) + *(_QWORD *)(a1 + 40));
  if ( !v8 )
    goto LABEL_9;
  v11 = v8 & 0xC0;
  v12 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v12 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      LOBYTE(a4) = v8 & 0xC0;
      LOBYTE(a3) = v8 & 0x3F;
      if ( !(unsigned __int8)NormBuffer__AppendEx(v4, a2, a3, a4) )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
      *(_BYTE *)(v4 + 92) = v12;
      *(_BYTE *)(v4 + 93) = v11;
      return 0LL;
    }
    NormBuffer__GetLastChar(v4);
    v31 = *(_BYTE *)(v4 + 72);
    if ( !v31 || v31 == 63 || (v32 = *(_BYTE *)(v4 + 73), (v32 & 0xBF) == 0) )
    {
      v32 = *(_BYTE *)(v4 + 73);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 92) = v31;
      *(_BYTE *)(v4 + 93) = v32;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    if ( v11 == (char)0x80 || (((*(_BYTE *)(v4 + 93) | *(_BYTE *)(v4 + 92)) + 64) & 0xBF) == 0 )
    {
      LOBYTE(v30) = v12;
      NormBuffer__IsBlocked(v4, v30);
      goto LABEL_71;
    }
    if ( !v31 || v31 == 63 )
    {
      CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
      a4 = CanCombinableCharactersCombine;
      if ( CanCombinableCharactersCombine )
      {
        NormBuffer__RewindOutputCharacter(v4, v57, a3, CanCombinableCharactersCombine);
        a3 = a4 & 0x7F;
        a2 = a4;
        v58 = *(_QWORD *)(a1 + 40);
        v59 = a3 + ((__int64)(*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7);
        v11 = *(_BYTE *)(v59 + v58) & 0xC0;
        v12 = *(_BYTE *)(v59 + v58) & 0x3F;
      }
LABEL_19:
      LOBYTE(a4) = v11;
      LOBYTE(a3) = v12;
      v13 = NormBuffer__AppendEx(v4, a2, a3, a4);
      return v13 == 0 ? 0xC0000023 : 0;
    }
    if ( (v32 & 0xBF) != 0 )
    {
      LOBYTE(v30) = v12;
      if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v30) )
        goto LABEL_71;
      v34 = *(_BYTE *)(v4 + 92);
      if ( !v34 || v34 == 63 || *(_BYTE *)(v4 + 93) == 64 )
      {
        v35 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
        a4 = v35;
        if ( v35 )
        {
          v52 = *(_QWORD *)(a1 + 32);
          v53 = *(_QWORD *)(a1 + 40);
          *(_DWORD *)(v4 + 88) = a4;
          v54 = *(_BYTE *)((a4 & 0x7F) + ((__int64)(*(unsigned __int8 *)((a4 >> 7) + v52) - 1) << 7) + v53);
          v55 = *(_QWORD *)(v4 + 80);
          *(_BYTE *)(v4 + 93) = v54 & 0xC0;
          v51 = (v54 & 0xC0) == 64;
          *(_BYTE *)(v4 + 92) = v54 & 0x3F;
          *(_WORD *)(v55 - 2) = a4;
LABEL_89:
          if ( v51 )
            NormBuffer__RecheckStartCombinations(v4);
          return 0LL;
        }
        if ( !v34 || v34 == 63 )
          goto LABEL_71;
      }
      if ( v34 <= v12 )
        goto LABEL_71;
      if ( v34 == *(_BYTE *)(a1 + 116) )
      {
        if ( v12 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v12 == *(_BYTE *)(a1 + 115) )
            goto LABEL_81;
LABEL_71:
          LOBYTE(a4) = v11;
          LOBYTE(v33) = v12;
          v13 = NormBuffer__InsertAtBlockedLocation(v4, a2, v33, a4);
          return v13 == 0 ? 0xC0000023 : 0;
        }
      }
      else if ( v34 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
      {
LABEL_81:
        StartBasePair = NormBuffer__LastStartBasePair(v4);
        v37 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, a2);
        if ( v37 )
        {
LABEL_82:
          v44 = *(_QWORD *)(a1 + 40);
          v45 = *(_BYTE *)((v37 & 0x7F)
                         + ((__int64)(*(unsigned __int8 *)(((__int64)(int)v37 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                         + v44) & 0xC0;
          LOBYTE(a4) = v45;
          v46 = NormBuffer__ReplaceLastStartBasePair(
                  v4,
                  v37,
                  *(_BYTE *)((v37 & 0x7F)
                           + ((__int64)(*(unsigned __int8 *)(((__int64)(int)v37 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                           + v44) & 0x3F,
                  a4);
          goto LABEL_87;
        }
        goto LABEL_71;
      }
      StartBase = NormBuffer__LastStartBase(v4);
      v48 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
      v49 = v48;
      if ( !v48 )
        goto LABEL_71;
LABEL_86:
      v50 = *(_QWORD *)(a1 + 40);
      v45 = *(_BYTE *)((v49 & 0x7F) + ((__int64)(*(unsigned __int8 *)((v49 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7) + v50) & 0xC0;
      LOBYTE(a4) = v45;
      v46 = NormBuffer__ReplaceLastStartBase(
              v4,
              (unsigned int)v49,
              *(_BYTE *)((v49 & 0x7F)
                       + ((__int64)(*(unsigned __int8 *)((v49 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                       + v50) & 0x3F,
              a4);
LABEL_87:
      if ( v46 )
      {
        v51 = v45 == 64;
        goto LABEL_89;
      }
      return 3221225507LL;
    }
    if ( v32 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
    {
      NormBuffer__RewindOutputCharacter(v4, v38, a3, a4);
      v39 = *(_QWORD *)(a1 + 40);
      LOBYTE(v41) = *(_BYTE *)((v40 & 0x7F)
                             + ((__int64)(*(unsigned __int8 *)((v40 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                             + v39) & 0x3F;
      if ( !(unsigned __int8)NormBuffer__AppendEx(
                               v4,
                               (unsigned int)v40,
                               v41,
                               *(_BYTE *)((v40 & 0x7F)
                                        + ((__int64)(*(unsigned __int8 *)((v40 >> 7) + *(_QWORD *)(a1 + 32)) - 1) << 7)
                                        + v39) & 0xC0) )
        return 3221225507LL;
      v42 = *(_QWORD *)(v4 + 64);
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_QWORD *)(v4 + 80) = v42 + 2;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
      *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
      return 0LL;
    }
    if ( v31 <= v12 )
      goto LABEL_19;
    if ( v31 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_19;
LABEL_68:
        v36 = NormBuffer__LastStartBasePair(v4);
        v37 = Normalization__CanCombinableCharactersCombine(a1, v36, a2);
        if ( !v37 )
          goto LABEL_19;
        goto LABEL_82;
      }
    }
    else if ( v31 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_68;
    }
    v60 = NormBuffer__LastStartBase(v4);
    v61 = Normalization__CanCombinableCharactersCombine(a1, v60, a2);
    v49 = v61;
    if ( !v61 )
      goto LABEL_19;
    goto LABEL_86;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = NormBuffer__AppendEx(v4, a2, 0LL, 0LL);
LABEL_10:
      if ( !v9 )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
LABEL_12:
      *(_WORD *)(v4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return Normalization__AppendDecomposedChar(a1, a2, v4);
    case 0xC0u:
      v71 = NormBuffer__GetLastChar(v4);
      v72 = Normalization__CanCombinableCharactersCombine(a1, v71, a2);
      a4 = v72;
      if ( !v72 )
        goto LABEL_19;
      NormBuffer__RewindOutputCharacter(v4, v73, a3, v72);
      a2 = a4;
      goto LABEL_125;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_19;
  return 3221227287LL;
}
