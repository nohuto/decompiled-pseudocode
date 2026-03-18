/*
 * XREFs of bComputeIFISIZE @ 0x1C01564B4
 * Callers:
 *     bVerifyTTF @ 0x1C0155F40 (bVerifyTTF.c)
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0018130 (EngGetCurrentCodePage.c)
 *     fsSelectionTTFD @ 0x1C0156AD0 (fsSelectionTTFD.c)
 *     bConvertExtras @ 0x1C0156B00 (bConvertExtras.c)
 *     bShellFontFace @ 0x1C0157244 (bShellFontFace.c)
 *     memcmp @ 0x1C0158D00 (memcmp.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ConvertLangIDtoCodePage @ 0x1C0240E2C (ConvertLangIDtoCodePage.c)
 */

__int64 __fastcall bComputeIFISIZE(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // ebp
  unsigned __int64 v11; // rdi
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int v18; // r14d
  int v19; // r15d
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  int i; // esi
  __int16 v23; // r14
  BOOL v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // r11d
  _WORD *v27; // r8
  _BOOL8 v28; // rsi
  __int64 v29; // r10
  unsigned __int16 v30; // ax
  BOOL v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // edi
  char v39; // al
  __int64 v40; // r10
  __int64 v41; // r11
  int v42; // eax
  _WORD *v43; // r9
  unsigned __int64 v44; // r13
  __int64 v45; // r11
  unsigned __int16 v46; // ax
  unsigned int v47; // r10d
  bool v48; // zf
  void *v49; // rax
  unsigned __int16 v50; // ax
  int v51; // ecx
  unsigned int v52; // edi
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 result; // rax
  int v57; // eax
  _DWORD *v58; // r9
  int v59; // eax
  int *v60; // r9
  int v61; // ecx
  _DWORD *v62; // r9
  char v63; // r8
  void *Buf1; // [rsp+20h] [rbp-88h]
  USHORT AnsiCodePage; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v66; // [rsp+30h] [rbp-78h]
  USHORT OemCodePage[2]; // [rsp+38h] [rbp-70h] BYREF
  int v68; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v69; // [rsp+40h] [rbp-68h]
  _WORD *v70; // [rsp+48h] [rbp-60h]
  unsigned __int64 v71; // [rsp+50h] [rbp-58h]
  unsigned __int64 v72; // [rsp+58h] [rbp-50h]

  v8 = *(unsigned int *)(a2 + 60);
  v9 = 0;
  v10 = 0;
  v11 = a1 + *(unsigned int *)(a2 + 56);
  v70 = 0LL;
  Buf1 = 0LL;
  v14 = v11 + v8;
  if ( (unsigned int)v8 < 6 )
    return 0LL;
  v68 = 1;
  if ( ((a3 - 1) & 0xFFFD) != 0 )
    return 0LL;
  memset(a6, 0, 0x88uLL);
  *((_WORD *)a6 + 67) = a4;
  v15 = v11 + 6;
  *((_WORD *)a6 + 66) = a3;
  v72 = v11 + 6;
  if ( v11 >= v11 + 6 )
    return 0LL;
  if ( v15 > v14 )
    return 0LL;
  v16 = v15 + 12LL * (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 2), 8);
  v17 = v11 + (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 4), 8);
  v66 = v16;
  v69 = v17;
  if ( v15 > v16 )
    return 0LL;
  if ( v16 > v17 )
    return 0LL;
  if ( v17 > v14 )
    return 0LL;
  v71 = v14 - v17;
  v18 = 0;
  v19 = 0;
  EngGetCurrentCodePage(OemCodePage, &AnsiCodePage);
  if ( v8 < 12 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(v11 + 2), 8) + 6 )
    return 0LL;
  v20 = v69;
  v21 = v66;
  for ( i = 0; i < 4; ++i )
  {
    if ( v18 )
      break;
    if ( v15 >= v21 )
      continue;
    v43 = (_WORD *)(v15 + 4);
    v44 = v71;
    while ( !v18 )
    {
      v45 = (unsigned __int16)__ROR2__(v43[3], 8);
      v46 = __ROR2__(v43[2], 8);
      v47 = v46;
      if ( v46 && v46 + (unsigned int)v45 <= v44 )
      {
        v18 = 0;
        if ( !i )
        {
          v48 = __ROR2__(*v43, 8) == a5;
          goto LABEL_48;
        }
        if ( i == 1 )
        {
          if ( (unsigned __int8)a5 != 4 )
          {
            v48 = (unsigned __int16)(unsigned __int8)__ROR2__(*v43, 8) == (unsigned __int16)(unsigned __int8)a5;
            goto LABEL_48;
          }
          v9 = 0;
          if ( (unsigned int)ConvertLangIDtoCodePage((unsigned __int16)__ROR2__(*v43, 8)) != AnsiCodePage )
            goto LABEL_105;
LABEL_104:
          v48 = v63 == 4;
LABEL_106:
          v21 = v66;
        }
        else
        {
          if ( i != 2 )
          {
            if ( i == 3 )
              v9 = 1;
LABEL_50:
            if ( __ROR2__(*(v43 - 2), 8) == a3 && __ROR2__(*(v43 - 1), 8) == a4 && v9 )
            {
              v50 = __ROR2__(v43[1], 8);
              switch ( v50 )
              {
                case 1u:
                  if ( !*((_QWORD *)a6 + 1) )
                  {
                    a6[4] = v47;
                    *((_QWORD *)a6 + 1) = v20 + v45;
                    v70 = v43 - 2;
                  }
                  break;
                case 2u:
                  if ( !*((_QWORD *)a6 + 5) )
                  {
                    a6[12] = v47;
                    *((_QWORD *)a6 + 5) = v20 + v45;
                  }
                  break;
                case 3u:
                  if ( !*((_QWORD *)a6 + 7) )
                  {
                    a6[16] = v47;
                    *((_QWORD *)a6 + 7) = v20 + v45;
                  }
                  break;
                default:
                  v51 = v50 - 4;
                  if ( v50 != 4 )
                  {
                    v49 = Buf1;
                    if ( v51 == 1 && !Buf1 )
                    {
                      v49 = (void *)(v20 + v45);
                      v10 = v47;
                      Buf1 = (void *)(v20 + v45);
                    }
                    goto LABEL_52;
                  }
                  if ( !*((_QWORD *)a6 + 9) )
                  {
                    a6[20] = v47;
                    *((_QWORD *)a6 + 9) = v20 + v45;
                  }
                  break;
              }
            }
            v49 = Buf1;
LABEL_52:
            if ( *((_QWORD *)a6 + 1) && *((_QWORD *)a6 + 5) && *((_QWORD *)a6 + 7) && *((_QWORD *)a6 + 9) )
            {
              v19 = 1;
              if ( v49 )
                v18 = 1;
            }
            else
            {
              v19 = 0;
            }
            goto LABEL_54;
          }
          if ( (_BYTE)a5 == 4 )
          {
            v9 = 0;
            if ( (unsigned int)ConvertLangIDtoCodePage((unsigned __int16)__ROR2__(*v43, 8)) != AnsiCodePage )
              goto LABEL_104;
LABEL_105:
            v48 = v63 == 9;
            goto LABEL_106;
          }
          v48 = (unsigned __int8)__ROR2__(*v43, 8) == 9;
LABEL_48:
          v9 = 0;
        }
        LOBYTE(v9) = v48;
        goto LABEL_50;
      }
LABEL_54:
      v43 += 6;
      if ( (unsigned __int64)(v43 - 2) >= v21 )
        break;
    }
    v15 = v72;
  }
  if ( !v19 )
    return 0LL;
  v23 = a3;
  if ( a3 != 3 )
    goto LABEL_23;
  v24 = (unsigned __int8)__ROR2__(v70[2], 8) == 9;
  v25 = 0LL;
  v26 = 0;
  if ( v15 >= v21 )
    goto LABEL_23;
  v27 = (_WORD *)(v15 + 8);
  v28 = v24;
  while ( 2 )
  {
    v29 = (unsigned __int16)__ROR2__(v27[1], 8);
    v30 = __ROR2__(*v27, 8);
    if ( !v30 )
      goto LABEL_20;
    if ( v30 + (unsigned int)v29 > v71 )
      goto LABEL_20;
    v31 = (unsigned __int8)__ROR2__(*(v27 - 2), 8) == 9;
    if ( __ROR2__(*(v27 - 4), 8) != 3
      || __ROR2__(*(v27 - 3), 8) != a4
      || __ROR2__(*(v27 - 1), 8) != (_WORD)v68
      || v70 == v27 - 4 )
    {
      goto LABEL_20;
    }
    if ( v28 )
    {
      if ( !v31 )
        goto LABEL_40;
LABEL_113:
      if ( !v25 )
      {
        v26 = v30;
        v25 = v69 + v29;
      }
LABEL_20:
      v27 += 6;
      if ( (unsigned __int64)(v27 - 4) >= v66 )
        goto LABEL_21;
      continue;
    }
    break;
  }
  if ( !v31 )
    goto LABEL_113;
LABEL_40:
  v26 = v30;
  v25 = v69 + v29;
LABEL_21:
  v23 = 3;
  if ( v25 )
  {
    *((_QWORD *)a6 + 3) = v25;
    a6[8] = v26;
  }
LABEL_23:
  if ( !(unsigned int)bConvertExtras(0LL, a6) )
    return 0LL;
  v32 = a6[28] + 204;
  a6[23] = 204;
  if ( *((_QWORD *)a6 + 3) )
  {
    v57 = a6[29] + 4;
    a6[24] = v32;
    v32 += v57;
  }
  v33 = v32 + 2;
  v34 = a6[32] + 2;
  v35 = a6[30] + 3;
  a6[26] = v33;
  v36 = a6[31] + v33;
  a6[27] = v36;
  v37 = v34 + v36;
  *a7 = 0;
  a6[25] = v37;
  v38 = (v37 + v35) & 0xFFFFFFFC;
  if ( Buf1 )
  {
    if ( v23 == 3 )
    {
      if ( v10 > 0x48 )
        v10 = 72;
      if ( v10 > 2 )
        v10 -= 2;
      *a7 = memcmp(Buf1, &awszType1, v10) == 0;
    }
    else
    {
      if ( v10 > 0x24 )
        v10 = 36;
      if ( v10 > 1 )
        --v10;
      *a7 = strncmp((const char *)Buf1, "Converter: Windows Type 1 Installer", v10) == 0;
    }
  }
  v39 = fsSelectionTTFD(a1, a2);
  if ( (v39 & 0x21) != 0 )
  {
    if ( (v39 & 0x21) == 1 || (v39 & 0x21) == 0x20 )
    {
      v42 = 1;
      goto LABEL_81;
    }
    a6[1] = 0;
  }
  else
  {
    v42 = 3;
LABEL_81:
    a6[1] = v38;
    v38 += 20 * v42 + 12;
  }
  a6[21] = v38;
  v52 = v38 + 16;
  v53 = *(unsigned int *)(v40 + 64);
  if ( (_DWORD)v53 )
    v54 = v41 + v53;
  else
    v54 = 0LL;
  if ( v54 )
  {
    a6[22] = v52;
    v52 += 24;
  }
  v55 = a6[16];
  *a8 = 0;
  switch ( v55 )
  {
    case '8':
      if ( (unsigned int)bShellFontFace("Microsoft Sans Serif Regular", *((_QWORD *)a6 + 7), 28LL) )
        *v62 = 1;
      break;
    case '0':
      if ( (unsigned int)bShellFontFace("Microsoft Tahoma Regular", *((_QWORD *)a6 + 7), 24LL) )
        *v58 = 2;
      break;
    case '*':
      v59 = bShellFontFace("Microsoft Tahoma Bold", *((_QWORD *)a6 + 7), 21LL);
      v61 = *v60;
      if ( v59 )
        v61 = 3;
      *v60 = v61;
      break;
  }
  result = 1LL;
  *a6 = (v52 + 7) & 0xFFFFFFF8;
  return result;
}
