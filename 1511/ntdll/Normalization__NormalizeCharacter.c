/*
 * XREFs of Normalization__NormalizeCharacter @ 0x18006AE44
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x18006A9FC (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x18006AC28 (Normalization__Normalize.c)
 * Callees:
 *     Normalization__AppendDecomposedChar @ 0x18006A9FC (Normalization__AppendDecomposedChar.c)
 *     NormBuffer__Append @ 0x18006ADDC (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x18006B668 (NormBuffer__AppendEx.c)
 *     IsHangulLV @ 0x18008DA50 (IsHangulLV.c)
 *     ComposeHangulLV @ 0x1800E7DF8 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1800E7E28 (ComposeHangulLVT.c)
 *     NormBuffer__GetLastChar @ 0x1800E7F38 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800E80A4 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x1800E80D4 (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1800E817C (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1800E81AC (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800E81FC (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800E8378 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800E83F0 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800E84B0 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800E85B8 (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned __int8 v6; // r15
  unsigned int v7; // edi
  unsigned __int8 v9; // dl
  char v10; // r14
  unsigned __int8 v11; // bp
  unsigned int LastChar; // eax
  unsigned int CanCombinableCharactersCombine; // eax
  __int64 v14; // rdx
  char v15; // al
  unsigned __int16 *v17; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rdx
  unsigned __int8 v20; // r15
  char v21; // cl
  __int64 v22; // r8
  unsigned __int8 v23; // r15
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // dl
  bool v29; // zf
  unsigned int StartBasePair; // eax
  unsigned int v31; // r10d
  unsigned int StartBase; // eax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r10
  unsigned __int64 v36; // r8
  unsigned __int8 v37; // r9
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  char v41; // di
  char v42; // al
  unsigned int v43; // eax
  __int64 v44; // r9
  __int64 v45; // r8
  char v46; // di
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  char v51; // al
  unsigned __int16 *v52; // rax
  __int64 v53; // rdx
  unsigned __int16 *v54; // r10
  __int64 v55; // rcx
  unsigned __int16 *v56; // rax
  signed int v57; // edi
  __int64 v58; // rcx
  unsigned __int16 v59; // si
  __int64 v60; // rcx
  int v61; // edi
  unsigned __int16 v62; // di
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned int v69; // r9d
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  unsigned int v74; // r9d
  unsigned __int16 *v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // eax
  unsigned __int16 *v78; // r8
  __int64 v79; // r10

  v4 = a4;
  v5 = (_BYTE)a3 == 0;
  v6 = a3;
  v7 = a2;
LABEL_2:
  if ( v5 )
    goto LABEL_27;
  while ( 1 )
  {
    switch ( v6 )
    {
      case 0u:
        goto LABEL_124;
      case 0xFBu:
        if ( !*(_BYTE *)(a1 + 113) )
          return 3221227287LL;
LABEL_124:
        v51 = NormBuffer__Append(v4, v7);
        goto LABEL_125;
      case 0xFCu:
        return 3221227287LL;
      case 0xFDu:
        return Normalization__AppendDecomposedChar(a1, v7, v4);
    }
    if ( v6 == 254 )
      break;
    if ( v6 != 255 )
    {
      v9 = *(_BYTE *)(((unsigned __int64)v6 << 7) + (v7 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
      if ( !v9 )
      {
LABEL_92:
        v51 = NormBuffer__AppendEx(v4, v7, 0LL, 0LL);
LABEL_125:
        if ( !v51 )
          return 3221225507LL;
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = v7;
        goto LABEL_108;
      }
      v10 = v9 & 0xC0;
      v11 = v9 & 0x3F;
      if ( (v9 & 0x3F) == 0 || v11 == 63 )
      {
        if ( v9 != 127 )
        {
          if ( v9 == 191 )
            return Normalization__AppendDecomposedChar(a1, v7, v4);
          if ( v9 == 192 )
          {
            LastChar = NormBuffer__GetLastChar(v4);
            CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(a1, LastChar, v7);
            a4 = CanCombinableCharactersCombine;
            if ( CanCombinableCharactersCombine )
            {
              NormBuffer__RewindOutputCharacter(v4, v14, a3, CanCombinableCharactersCombine);
              v7 = a4;
LABEL_32:
              v5 = v6 == 0;
              goto LABEL_2;
            }
          }
          else if ( v9 == 255 && (v7 || *(_QWORD *)(v4 + 16) != *(_QWORD *)(v4 + 8)) )
          {
            return 3221227287LL;
          }
          goto LABEL_71;
        }
        if ( !*(_BYTE *)(a1 + 113) )
          return 3221227287LL;
        goto LABEL_92;
      }
      if ( (v9 & 0x80) == 0 )
      {
        LOBYTE(a4) = v9 & 0xC0;
        LOBYTE(a3) = v9 & 0x3F;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v7, a3, a4) )
          return 3221225507LL;
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = v7;
        *(_BYTE *)(v4 + 92) = v11;
        *(_BYTE *)(v4 + 93) = v10;
        return 0LL;
      }
      NormBuffer__GetLastChar(v4);
      v20 = *(_BYTE *)(v4 + 72);
      if ( !v20 || v20 == 63 || (v21 = *(_BYTE *)(v4 + 73), (v21 & 0xBF) == 0) )
      {
        v21 = *(_BYTE *)(v4 + 73);
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        *(_BYTE *)(v4 + 92) = v20;
        *(_BYTE *)(v4 + 93) = v21;
        *(_QWORD *)(v4 + 96) = 0LL;
      }
      if ( v10 == (char)0x80 || (((*(_BYTE *)(v4 + 93) | *(_BYTE *)(v4 + 92)) + 64) & 0xBF) == 0 )
      {
        LOBYTE(v19) = v11;
        NormBuffer__IsBlocked(v4, v19);
        goto LABEL_44;
      }
      if ( !v20 || v20 == 63 )
      {
        v47 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), v7);
        a4 = v47;
        if ( v47 )
        {
          NormBuffer__RewindOutputCharacter(v4, v48, a3, v47);
          a3 = a4 & 0x7F;
          v7 = a4;
          v49 = *(_QWORD *)(a1 + 40);
          v50 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
          v10 = *(_BYTE *)(v50 + v49 - 128) & 0xC0;
          v11 = *(_BYTE *)(v50 + v49 - 128) & 0x3F;
        }
        goto LABEL_71;
      }
      if ( (v21 & 0xBF) != 0 )
      {
        LOBYTE(v19) = v11;
        if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v19) )
        {
LABEL_44:
          LOBYTE(a4) = v10;
          LOBYTE(v22) = v11;
          v15 = NormBuffer__InsertAtBlockedLocation(v4, v7, v22, a4);
          return v15 == 0 ? 0xC0000023 : 0;
        }
        v23 = *(_BYTE *)(v4 + 92);
        if ( !v23 || v23 == 63 || *(_BYTE *)(v4 + 93) == 64 )
        {
          v24 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), v7);
          v25 = v24;
          if ( v24 )
          {
            v26 = *(_QWORD *)(a1 + 32);
            v27 = *(_QWORD *)(v4 + 80);
            *(_DWORD *)(v4 + 88) = v25;
            v28 = *(_BYTE *)((v25 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v25 >> 7) + v26) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(v27 - 2) = v25;
            *(_BYTE *)(v4 + 93) = v28 & 0xC0;
            v29 = (v28 & 0xC0) == 64;
            *(_BYTE *)(v4 + 92) = v28 & 0x3F;
            goto LABEL_78;
          }
          if ( !v23 || v23 == 63 )
            goto LABEL_44;
        }
        if ( v23 <= v11 )
          goto LABEL_44;
        if ( v23 == *(_BYTE *)(a1 + 116) )
        {
          if ( v11 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v11 != *(_BYTE *)(a1 + 115) )
              goto LABEL_44;
LABEL_59:
            StartBasePair = NormBuffer__LastStartBasePair(v4);
            v31 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, v7);
            if ( !v31 )
              goto LABEL_44;
LABEL_75:
            v40 = *(_QWORD *)(a1 + 40);
            v41 = *(_BYTE *)((v31 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + v40
                           - 128) & 0xC0;
            LOBYTE(a4) = v41;
            v42 = NormBuffer__ReplaceLastStartBasePair(
                    v4,
                    v31,
                    *(_BYTE *)((v31 & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                             + v40
                             - 128) & 0x3F,
                    a4);
LABEL_76:
            if ( !v42 )
              return 3221225507LL;
            v29 = v41 == 64;
LABEL_78:
            if ( v29 )
              NormBuffer__RecheckStartCombinations(v4);
            return 0LL;
          }
        }
        else if ( v23 == *(_BYTE *)(a1 + 118) && v11 == *(_BYTE *)(a1 + 117) )
        {
          goto LABEL_59;
        }
        StartBase = NormBuffer__LastStartBase(v4);
        v33 = Normalization__CanCombinableCharactersCombine(a1, StartBase, v7);
        if ( !v33 )
          goto LABEL_44;
LABEL_81:
        v44 = v33 & 0x7F;
        v45 = v44 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v46 = *(_BYTE *)(v45 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v45) = v46 & 0x3F;
        v41 = v46 & 0xC0;
        LOBYTE(v44) = v41;
        v42 = NormBuffer__ReplaceLastStartBase(v4, v33, v45, v44);
        goto LABEL_76;
      }
      if ( v21 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), v7) )
      {
        NormBuffer__RewindOutputCharacter(v4, v34, a3, a4);
        v36 = (v35 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v35 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v37 = *(_BYTE *)(v36 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v36) = v37 & 0x3F;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v35, v36, v37 & 0xC0) )
          return 3221225507LL;
        v38 = *(_QWORD *)(v4 + 64);
        *(_QWORD *)(v4 + 96) = 0LL;
        *(_QWORD *)(v4 + 80) = v38 + 2;
        *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
        *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
        *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
        return 0LL;
      }
      if ( v20 <= v11 )
        goto LABEL_71;
      if ( v20 == *(_BYTE *)(a1 + 116) )
      {
        if ( v11 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v11 != *(_BYTE *)(a1 + 115) )
            goto LABEL_71;
LABEL_74:
          v39 = NormBuffer__LastStartBasePair(v4);
          v31 = Normalization__CanCombinableCharactersCombine(a1, v39, v7);
          if ( v31 )
            goto LABEL_75;
LABEL_71:
          LOBYTE(a4) = v10;
          LOBYTE(a3) = v11;
          v15 = NormBuffer__AppendEx(v4, v7, a3, a4);
          return v15 == 0 ? 0xC0000023 : 0;
        }
      }
      else if ( v20 == *(_BYTE *)(a1 + 118) && v11 == *(_BYTE *)(a1 + 117) )
      {
        goto LABEL_74;
      }
      v43 = NormBuffer__LastStartBase(v4);
      v33 = Normalization__CanCombinableCharactersCombine(a1, v43, v7);
      if ( v33 )
        goto LABEL_81;
      goto LABEL_71;
    }
    if ( (int)v7 < 44032 )
    {
      if ( v7 - 4352 <= 0x12 )
      {
        v75 = *(unsigned __int16 **)(v4 + 16);
        if ( v75 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_27;
        v76 = *v75;
        *(_QWORD *)(v4 + 16) = v75 + 1;
        v77 = ComposeHangulLV(v7, v76);
        if ( v77 )
        {
          v7 = v77;
          if ( v78 == *(unsigned __int16 **)(v4 + 8) )
            goto LABEL_27;
          v53 = *v78;
          v54 = v78 + 1;
          v55 = v77;
LABEL_119:
          *(_QWORD *)(v4 + 16) = v54;
          v70 = ComposeHangulLVT(v55, v53);
          if ( v70 )
            goto LABEL_114;
          v56 = (unsigned __int16 *)(v79 - 2);
        }
        else
        {
          v56 = v78 - 1;
        }
        *(_QWORD *)(v4 + 16) = v56;
        goto LABEL_27;
      }
      if ( v7 - 4449 <= 0x14 )
      {
        v71 = NormBuffer__GetLastChar(v4);
        if ( v71 - 4352 > 0x12 )
          goto LABEL_27;
        NormBuffer__RewindOutputCharacter(v4, v72, v73, v71);
        v70 = ComposeHangulLV(v74, v7);
LABEL_114:
        v7 = v70;
        goto LABEL_27;
      }
      if ( v7 - 4520 <= 0x1A )
      {
        v63 = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(v63, v64, v65, v63) )
        {
          NormBuffer__RewindOutputCharacter(v4, v66, v67, v68);
          v70 = ComposeHangulLVT(v69, v7);
          goto LABEL_114;
        }
LABEL_27:
        v15 = NormBuffer__Append(v4, v7);
        return v15 == 0 ? 0xC0000023 : 0;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || v7 - 4447 > 1 )
        goto LABEL_27;
    }
    else
    {
      if ( (int)v7 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          if ( !(unsigned __int8)IsHangulLV(v7, a2, a3, a4) )
            goto LABEL_27;
          v52 = *(unsigned __int16 **)(v4 + 16);
          if ( v52 == *(unsigned __int16 **)(v4 + 8) )
            goto LABEL_27;
          v53 = *v52;
          v54 = v52 + 1;
          v55 = v7;
          goto LABEL_119;
        }
        v57 = v7 - 44032;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)(v57 / 588 + 4352), 0LL, 0LL) )
          return 3221225507LL;
        v59 = v57 % 588 / 28 + 4449;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v58, v59, 0LL, 0LL) )
          return 3221225507LL;
        v61 = v57 % 28;
        if ( !(_WORD)v61 || (v62 = v61 + 4519) == 0 )
        {
LABEL_107:
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v59;
LABEL_108:
          *(_WORD *)(v4 + 92) = 0;
          return 0LL;
        }
        if ( (unsigned __int8)NormBuffer__AppendEx(v60, v62, 0LL, 0LL) )
        {
          v59 = v62;
          goto LABEL_107;
        }
        return 3221225507LL;
      }
      if ( v7 - 55216 <= 0x16 || v7 - 55243 <= 0x30 )
        goto LABEL_27;
    }
    v6 = -5;
  }
  v17 = *(unsigned __int16 **)(v4 + 16);
  if ( v17 != *(unsigned __int16 **)(v4 + 8) )
  {
    v18 = *v17;
    a2 = 1023LL;
    *(_QWORD *)(v4 + 16) = v17 + 1;
    if ( (unsigned __int16)(v18 + 9216) <= 0x3FFu )
    {
      v7 = v18 + ((v7 - 55287) << 10);
      v6 = *(_BYTE *)(((__int64)(int)v7 >> 7) + *(_QWORD *)(a1 + 32));
      goto LABEL_32;
    }
  }
  return 3221227287LL;
}
