/*
 * XREFs of xxxInternalToUnicode @ 0x1C00DA574
 * Callers:
 *     xxxToUnicodeEx @ 0x1C00DA108 (xxxToUnicodeEx.c)
 *     xxxTranslateMessage @ 0x1C00DA330 (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     GetModifierBits @ 0x1C00DA9B4 (GetModifierBits.c)
 *     InternalVkKeyScanEx @ 0x1C00DAA04 (InternalVkKeyScanEx.c)
 *     GetModificationNumber @ 0x1C00DAB78 (GetModificationNumber.c)
 *     HKLtoPKL @ 0x1C00DAB90 (HKLtoPKL.c)
 *     xxxClientCharToWchar @ 0x1C0123E80 (xxxClientCharToWchar.c)
 *     xxxMessageBeep @ 0x1C01FEAE0 (xxxMessageBeep.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C02447C0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  int *v14; // r9
  __int64 v15; // r11
  int v16; // r10d
  unsigned int v17; // ebx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // r13d
  unsigned __int16 v21; // di
  int v22; // r12d
  char v23; // r14
  __int64 result; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 v26; // r9
  __int64 v27; // r11
  _QWORD *v28; // r12
  __int64 v29; // r8
  char *v30; // rdi
  unsigned __int8 v31; // r10
  unsigned __int16 ModificationNumber; // ax
  __int64 v33; // r8
  __int16 v34; // r9
  unsigned __int16 v35; // dx
  __int64 v36; // r14
  __int16 v37; // cx
  struct tagKL *v38; // r13
  struct DEADKEY *v39; // rdx
  __int16 v40; // ax
  __int64 v41; // rax
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rcx
  unsigned int v45; // eax
  int v46; // edx
  char v47; // al
  char v48; // al
  unsigned __int16 v49; // r8
  char *v50; // rcx
  char v51; // al
  char v52; // r8
  int v53; // r14d
  int v54; // edi
  unsigned __int16 *v55; // rsi
  unsigned __int16 v56; // r8
  int v57; // eax
  __int64 v58; // rax
  _QWORD *v59; // [rsp+40h] [rbp-58h]
  struct tagKL *v60; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+50h] [rbp-48h]
  bool v62; // [rsp+A0h] [rbp+8h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = a7;
  v15 = ThreadWin32Thread;
  v16 = a2 & 0x8000;
  *a7 = v16;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  v17 = 0;
  if ( a8 || (v13 = *(_QWORD *)(ThreadWin32Thread + 400), (v60 = (struct tagKL *)v13) == 0LL) )
  {
    v41 = HKLtoPKL(ThreadWin32Thread, a8, v13);
    v60 = (struct tagKL *)v41;
    v13 = v41;
    if ( !v41 )
      return 0LL;
    v18 = *(_QWORD *)(v41 + 48);
  }
  else
  {
    v18 = *(_QWORD *)(v13 + 48);
  }
  v19 = *(_QWORD **)(v18 + 32);
  v20 = a2 & 0x1FF;
  v21 = word_1C0323020;
  v59 = v19;
  v22 = v16 & 0x8000;
  if ( (v16 & 0x8000) == 0 )
  {
    v23 = byte_1C0323022;
    goto LABEL_7;
  }
  if ( a1 != 18 )
  {
    v23 = byte_1C0323022;
    if ( a1 == (unsigned __int16)word_1C0323024 )
      word_1C0323024 = 0;
    goto LABEL_7;
  }
  if ( word_1C0323020 )
  {
    if ( byte_1C0323022 != 3 )
    {
      if ( byte_1C0323022 )
      {
        v44 = *(unsigned __int16 *)(v13 + 72);
        goto LABEL_61;
      }
      if ( (*(_DWORD *)(v15 + 448) & 8) == 0 )
      {
        v44 = NlsOemCodePage;
LABEL_61:
        v45 = (unsigned __int16)v44;
        if ( (unsigned __int16)(v44 - 932) <= 0x12u && (v46 = 393233, LOWORD(v45) = v44 - 932, _bittest(&v46, v45)) )
        {
          if ( (word_1C0323020 & 0xFF00) != 0 )
          {
            v21 = _byteswap_ushort(word_1C0323020);
            word_1C0323020 = v21;
          }
          else if ( ((_WORD)v44 != 932 || (unsigned __int16)(word_1C0323020 - 161) > 0x3Eu)
                 && (unsigned __int16)(word_1C0323020 - 128) <= 0x7Fu )
          {
            v44 = 1252LL;
          }
        }
        else
        {
          HIBYTE(word_1C0323020) = 0;
          v21 = word_1C0323020;
        }
        *a4 = xxxClientCharToWchar(v44, v21);
        goto LABEL_65;
      }
      *v14 = v16 | 0x4000000;
    }
    *a4 = v21;
LABEL_65:
    gfInNumpadHexInput &= ~2u;
    result = 1LL;
    word_1C0323024 = 0;
    byte_1C0323022 = 0;
    word_1C0323020 = 0;
    return result;
  }
  v23 = byte_1C0323022;
  if ( byte_1C0323022 )
  {
    v23 = 0;
    byte_1C0323022 = 0;
  }
LABEL_7:
  v62 = (a6 & 2) == 0;
  if ( (v16 & 0x8000) != 0 && v62 )
    return 0LL;
  v61 = *v19;
  ModifierBits = GetModifierBits(*v19, a3);
  v26 = ModifierBits;
  if ( !v22 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_51:
      word_1C0323024 = 0;
      v26 = ModifierBits & 0xFFFB;
      byte_1C0323022 = 0;
      word_1C0323020 = 0;
      gfInNumpadHexInput &= ~2u;
      goto LABEL_15;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_47:
      if ( (unsigned int)(v20 - 71) <= 0xB )
      {
        v43 = *((unsigned __int8 *)&aVkNumpad + (unsigned int)(v20 - 71));
        if ( v43 == 255 )
          goto LABEL_51;
        v42 = v43 - 96;
        goto LABEL_50;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( (unsigned int)(a1 - 65) <= 5 )
        {
          v42 = a1 - 55;
          goto LABEL_50;
        }
        if ( (unsigned int)(a1 - 48) <= 9 )
        {
          v42 = a1 - 48;
          goto LABEL_50;
        }
      }
      v42 = -1;
LABEL_50:
      if ( v42 < 0 )
        goto LABEL_51;
      if ( (unsigned __int16)word_1C0323024 == a1 )
        return 0LL;
      if ( (unsigned __int8)v23 < 2u || (unsigned __int8)v23 > 3u )
      {
        word_1C0323020 = v42 + 10 * v21;
        if ( !word_1C0323020 )
        {
          v47 = v23;
          if ( !v42 )
            v47 = 1;
          byte_1C0323022 = v47;
        }
      }
      else
      {
        word_1C0323020 = v42 + 16 * v21;
      }
LABEL_57:
      word_1C0323024 = a1;
      goto LABEL_15;
    }
    if ( v20 == 83 )
    {
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_51;
      byte_1C0323022 = 2;
    }
    else
    {
      if ( v20 != 78 )
        goto LABEL_47;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_51;
      byte_1C0323022 = 3;
    }
    gfInNumpadHexInput |= 2u;
    goto LABEL_57;
  }
LABEL_15:
  if ( a1 == 8 )
  {
    v28 = v59;
    v27 = a3;
    if ( (v59[10] & 4) != 0 )
    {
      v48 = *(_BYTE *)(a3 + 40);
      if ( (v48 & 1) != 0 )
      {
        v40 = 8206;
        goto LABEL_38;
      }
      if ( (v48 & 4) != 0 )
      {
        v40 = 8207;
        goto LABEL_38;
      }
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v20 )
    {
      if ( (v20 & 0x8000) == 0 || !v62 )
      {
        v17 = 1;
        *a4 = *(_WORD *)(gptiCurrent + 762LL);
      }
      return v17;
    }
    v27 = a3;
    v28 = v59;
  }
  v29 = v28[1];
  if ( !v29 )
    return 0LL;
LABEL_21:
  v30 = *(char **)v29;
  if ( !*(_QWORD *)v29 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v30 )
    {
      v29 += 16LL;
      goto LABEL_21;
    }
    if ( *v30 == (_BYTE)a1 )
      break;
    v30 += *(unsigned __int8 *)(v29 + 9);
  }
  v31 = v30[1];
  if ( (v31 & 8) != 0 && (*(_BYTE *)(v27 + 5) & 8) != 0 )
  {
    v26 |= 8u;
  }
  else if ( (v31 & ((v26 & 0xFFFE) == 0)) != 0 && (*(_BYTE *)(v27 + 5) & 2) != 0
         || ((v31 >> 2) & ((v26 & 6) == 6)) != 0 && (*(_BYTE *)(v27 + 5) & 2) != 0 )
  {
    v26 ^= 1u;
  }
  if ( ((v31 >> 1) & ((v26 & 0xFFFE) == 0)) != 0 && (*(_BYTE *)(v27 + 5) & 2) != 0 )
    v30 += *(unsigned __int8 *)(v29 + 9);
  ModificationNumber = GetModificationNumber(v61, v26);
  v35 = ModificationNumber;
  if ( ModificationNumber == 15 )
    return 0LL;
  if ( ModificationNumber >= *(unsigned __int8 *)(v33 + 8)
    || (v36 = ModificationNumber, v37 = *(_WORD *)&v30[2 * ModificationNumber + 2], v37 == -4096) )
  {
    if ( ((v34 - 2) & 0xFFF6) != 0 )
      return 0LL;
    if ( (unsigned int)(a1 - 65) <= 0x19 )
    {
      *a4 = a1 & 0x1F;
      return 1LL;
    }
    if ( (unsigned int)(a1 - 65377) > 0x30 )
      return 0LL;
    v40 = InternalVkKeyScanEx((unsigned __int16)a1, v28) & 0x1F;
LABEL_38:
    *a4 = v40;
    return 1LL;
  }
  if ( v37 == -4095 )
  {
    v38 = v60;
    v30 += *(unsigned __int8 *)(v33 + 9);
    if ( *((_WORD *)v60 + 37) && (GetAppCompatFlags2(0x400u) & 0x8000) == 0 )
      goto LABEL_36;
    v49 = *(_WORD *)&v30[2 * v36 + 2];
    *a4 = v49;
    if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
      *((_WORD *)v60 + 37) = v49;
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v37 != -4094 )
    {
      v38 = v60;
LABEL_36:
      v39 = (struct DEADKEY *)v28[2];
      if ( v39 && *((_WORD *)v38 + 37) )
      {
        result = ComposeDeadKeys(v38, v39, *(_WORD *)&v30[2 * v36 + 2], a4, a5, a6, *a7 & 0x8000);
        if ( (_DWORD)result )
          *a7 |= 0x8000000u;
        return result;
      }
      v40 = *(_WORD *)&v30[2 * v36 + 2];
      goto LABEL_38;
    }
    if ( !*((_WORD *)v28 + 41) || (v50 = (char *)v28[11]) == 0LL || (v51 = *v50) == 0 )
    {
LABEL_127:
      xxxMessageBeep(0LL);
      return 0LL;
    }
    v52 = *v30;
    v53 = 0;
    v54 = 0;
    while ( v51 != v52 || *((_WORD *)v50 + 1) != v35 )
    {
      v50 += *((unsigned __int8 *)v28 + 85);
      v51 = *v50;
      if ( !*v50 )
        goto LABEL_127;
    }
    if ( *((_BYTE *)v28 + 84) )
    {
      v55 = (unsigned __int16 *)(v50 + 4);
      do
      {
        if ( v54 >= a5 )
          break;
        v56 = *v55;
        if ( *v55 == 0xF000 )
          break;
        if ( *((_WORD *)v60 + 37) )
        {
          v57 = ComposeDeadKeys(v60, (struct DEADKEY *)v28[2], v56, &a4[v54], a5 - v54, a6, *a7 & 0x8000);
          if ( v57 > 0 )
            v54 += v57;
        }
        else
        {
          v58 = v54++;
          a4[v58] = v56;
        }
        ++v53;
        ++v55;
      }
      while ( v53 < *((unsigned __int8 *)v28 + 84) );
      if ( v54 )
        *a7 |= 0x8000000u;
    }
    return (unsigned int)v54;
  }
}
