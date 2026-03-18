/*
 * XREFs of xxxInternalToUnicode @ 0x1C00E7C78
 * Callers:
 *     xxxToUnicodeEx @ 0x1C00E77F8 (xxxToUnicodeEx.c)
 *     xxxTranslateMessage @ 0x1C00E7A34 (xxxTranslateMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     GetModifierBits @ 0x1C00E80D0 (GetModifierBits.c)
 *     InternalVkKeyScanEx @ 0x1C00E8120 (InternalVkKeyScanEx.c)
 *     GetModificationNumber @ 0x1C00E8270 (GetModificationNumber.c)
 *     HKLtoPKL @ 0x1C00E8460 (HKLtoPKL.c)
 *     xxxClientCharToWchar @ 0x1C01525D4 (xxxClientCharToWchar.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C023A8A0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int16 v11; // r13
  __int64 ThreadWin32Thread; // rax
  int *v13; // r9
  __int64 v14; // r11
  int v15; // r10d
  unsigned int v16; // ebx
  __int64 v17; // r8
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
  __int64 v34; // r9
  unsigned __int16 v35; // dx
  __int64 v36; // r14
  __int16 v37; // cx
  struct tagKL *v38; // r13
  struct DEADKEY *v39; // rdx
  __int16 v40; // ax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // edx
  int v44; // edx
  __int64 v45; // rcx
  unsigned int v46; // eax
  int v47; // edx
  char v48; // al
  char v49; // al
  unsigned __int16 v50; // r8
  char *v51; // rcx
  char v52; // al
  char v53; // r8
  int v54; // r14d
  int v55; // edi
  unsigned __int16 *v56; // rsi
  unsigned __int16 v57; // r8
  int v58; // eax
  __int64 v59; // rax
  _QWORD *v60; // [rsp+40h] [rbp-58h]
  struct tagKL *v61; // [rsp+48h] [rbp-50h]
  __int64 v62; // [rsp+50h] [rbp-48h]
  bool v63; // [rsp+A0h] [rbp+8h]

  v11 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v13 = a7;
  v14 = ThreadWin32Thread;
  v15 = v11 & 0x8000;
  *a7 = v15;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  v16 = 0;
  if ( a8 || (v17 = *(_QWORD *)(ThreadWin32Thread + 392), (v61 = (struct tagKL *)v17) == 0LL) )
  {
    v41 = HKLtoPKL(ThreadWin32Thread, a8);
    v61 = (struct tagKL *)v41;
    v17 = v41;
    if ( !v41 )
      return 0LL;
    v18 = *(_QWORD *)(v41 + 48);
  }
  else
  {
    v18 = *(_QWORD *)(v17 + 48);
  }
  v19 = *(_QWORD **)(v18 + 32);
  v20 = v11 & 0x1FF;
  v21 = word_1C0329440;
  v60 = v19;
  v22 = v15 & 0x8000;
  if ( (v15 & 0x8000) == 0 )
  {
    v23 = byte_1C0329442;
    goto LABEL_7;
  }
  if ( a1 != 18 )
  {
    v23 = byte_1C0329442;
    if ( a1 == (unsigned __int16)word_1C0329444 )
      word_1C0329444 = 0;
    goto LABEL_7;
  }
  if ( word_1C0329440 )
  {
    if ( byte_1C0329442 != 3 )
    {
      if ( byte_1C0329442 )
      {
        v45 = *(unsigned __int16 *)(v17 + 72);
        goto LABEL_59;
      }
      if ( (*(_DWORD *)(v14 + 440) & 8) == 0 )
      {
        v45 = NlsOemCodePage;
LABEL_59:
        v46 = (unsigned __int16)v45;
        if ( (unsigned __int16)(v45 - 932) <= 0x12u && (v47 = 393233, LOWORD(v46) = v45 - 932, _bittest(&v47, v46)) )
        {
          if ( (word_1C0329440 & 0xFF00) != 0 )
          {
            v21 = _byteswap_ushort(word_1C0329440);
            word_1C0329440 = v21;
          }
          else if ( ((_WORD)v45 != 932 || (unsigned __int16)(word_1C0329440 - 161) > 0x3Eu)
                 && (unsigned __int16)(word_1C0329440 - 128) <= 0x7Fu )
          {
            v45 = 1252LL;
          }
        }
        else
        {
          HIBYTE(word_1C0329440) = 0;
          v21 = word_1C0329440;
        }
        *a4 = xxxClientCharToWchar(v45, v21);
        goto LABEL_63;
      }
      *v13 = v15 | 0x4000000;
    }
    *a4 = v21;
LABEL_63:
    gfInNumpadHexInput &= ~2u;
    result = 1LL;
    word_1C0329444 = 0;
    byte_1C0329442 = 0;
    word_1C0329440 = 0;
    return result;
  }
  v23 = byte_1C0329442;
  if ( byte_1C0329442 )
  {
    v23 = 0;
    byte_1C0329442 = 0;
  }
LABEL_7:
  v63 = (a6 & 2) == 0;
  if ( (v15 & 0x8000) != 0 && v63 )
    return 0LL;
  v62 = *v19;
  ModifierBits = GetModifierBits(*v19, a3);
  v26 = ModifierBits;
  if ( !v22 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
      goto LABEL_69;
    if ( !gfEnableHexNumpad )
    {
LABEL_47:
      v42 = (unsigned int)(v20 - 71);
      if ( (unsigned int)v42 <= 0xB )
      {
        v43 = *((unsigned __int8 *)&aVkNumpad + v42);
        if ( v43 == 255 )
          goto LABEL_69;
        v44 = v43 - 96;
        goto LABEL_50;
      }
      if ( (gfInNumpadHexInput & 2) == 0 )
        goto LABEL_65;
      if ( (unsigned int)(a1 - 65) > 5 )
      {
        if ( (unsigned int)(a1 - 48) > 9 )
        {
LABEL_65:
          v44 = -1;
          goto LABEL_50;
        }
        v44 = a1 - 48;
      }
      else
      {
        v44 = a1 - 55;
      }
LABEL_50:
      if ( v44 >= 0 )
      {
        if ( (unsigned __int16)word_1C0329444 == a1 )
          return 0LL;
        if ( (unsigned __int8)v23 < 2u || (unsigned __int8)v23 > 3u )
        {
          word_1C0329440 = v44 + 10 * v21;
          if ( !word_1C0329440 )
          {
            v48 = v23;
            if ( !v44 )
              v48 = 1;
            byte_1C0329442 = v48;
          }
        }
        else
        {
          word_1C0329440 = v44 + 16 * v21;
        }
        goto LABEL_54;
      }
LABEL_69:
      word_1C0329444 = 0;
      v26 &= ~4u;
      byte_1C0329442 = 0;
      word_1C0329440 = 0;
      gfInNumpadHexInput &= ~2u;
      goto LABEL_15;
    }
    if ( v20 == 83 )
    {
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_69;
      byte_1C0329442 = 2;
    }
    else
    {
      if ( v20 != 78 )
        goto LABEL_47;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_69;
      byte_1C0329442 = 3;
    }
    gfInNumpadHexInput |= 2u;
LABEL_54:
    word_1C0329444 = a1;
  }
LABEL_15:
  if ( a1 == 8 )
  {
    v28 = v60;
    v27 = a3;
    if ( (v60[10] & 4) != 0 )
    {
      v49 = *(_BYTE *)(a3 + 40);
      if ( (v49 & 1) != 0 )
      {
        v40 = 8206;
        goto LABEL_38;
      }
      if ( (v49 & 4) != 0 )
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
      if ( (v20 & 0x8000) == 0 || !v63 )
      {
        v16 = 1;
        *a4 = *(_WORD *)(gptiCurrent + 762LL);
      }
      return v16;
    }
    v27 = a3;
    v28 = v60;
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
  ModificationNumber = GetModificationNumber(v62, v26);
  v35 = ModificationNumber;
  if ( ModificationNumber == 15 )
    return 0LL;
  if ( ModificationNumber >= *(unsigned __int8 *)(v33 + 8)
    || (v36 = ModificationNumber, v37 = *(_WORD *)&v30[2 * ModificationNumber + 2], v37 == -4096) )
  {
    if ( (((_WORD)v34 - 2) & 0xFFF6) != 0 )
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
    v38 = v61;
    v30 += *(unsigned __int8 *)(v33 + 9);
    if ( *((_WORD *)v61 + 37) && (GetAppCompatFlags2(0x400u, ModificationNumber, v33, v34) & 0x8000) == 0 )
      goto LABEL_36;
    v50 = *(_WORD *)&v30[2 * v36 + 2];
    *a4 = v50;
    if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
      *((_WORD *)v61 + 37) = v50;
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( v37 != -4094 )
    {
      v38 = v61;
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
    if ( !*((_WORD *)v28 + 41) || (v51 = (char *)v28[11]) == 0LL || (v52 = *v51) == 0 )
    {
LABEL_128:
      xxxMessageBeep(0LL);
      return 0LL;
    }
    v53 = *v30;
    v54 = 0;
    v55 = 0;
    while ( v52 != v53 || *((_WORD *)v51 + 1) != v35 )
    {
      v51 += *((unsigned __int8 *)v28 + 85);
      v52 = *v51;
      if ( !*v51 )
        goto LABEL_128;
    }
    if ( *((_BYTE *)v28 + 84) )
    {
      v56 = (unsigned __int16 *)(v51 + 4);
      do
      {
        if ( v55 >= a5 )
          break;
        v57 = *v56;
        if ( *v56 == 0xF000 )
          break;
        if ( *((_WORD *)v61 + 37) )
        {
          v58 = ComposeDeadKeys(v61, (struct DEADKEY *)v28[2], v57, &a4[v55], a5 - v55, a6, *a7 & 0x8000);
          if ( v58 > 0 )
            v55 += v58;
        }
        else
        {
          v59 = v55++;
          a4[v59] = v57;
        }
        ++v54;
        ++v56;
      }
      while ( v54 < *((unsigned __int8 *)v28 + 84) );
      if ( v55 )
        *a7 |= 0x8000000u;
    }
    return (unsigned int)v55;
  }
}
