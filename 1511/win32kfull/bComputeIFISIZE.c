/*
 * XREFs of bComputeIFISIZE @ 0x1C00120E4
 * Callers:
 *     bVerifyTTF @ 0x1C0011B78 (bVerifyTTF.c)
 * Callees:
 *     bShellFontFace @ 0x1C000FC64 (bShellFontFace.c)
 *     fsSelectionTTFD @ 0x1C0012700 (fsSelectionTTFD.c)
 *     bConvertExtras @ 0x1C0012730 (bConvertExtras.c)
 *     EngGetCurrentCodePage @ 0x1C00128B0 (EngGetCurrentCodePage.c)
 *     memcmp @ 0x1C0151300 (memcmp.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ConvertLangIDtoCodePage @ 0x1C0244E2C (ConvertLangIDtoCodePage.c)
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
  _WORD *v21; // r8
  int i; // esi
  __int16 v23; // r14
  BOOL v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // r11d
  _BOOL8 v27; // rsi
  __int64 v28; // r10
  unsigned __int16 v29; // ax
  BOOL v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // edi
  char v38; // al
  __int64 v39; // r10
  __int64 v40; // r11
  int v41; // eax
  _WORD *v42; // r9
  unsigned __int64 v43; // r13
  __int64 v44; // r11
  unsigned __int16 v45; // ax
  unsigned int v46; // r10d
  bool v47; // zf
  void *v48; // rax
  unsigned __int16 v49; // ax
  int v50; // ecx
  unsigned int v51; // edi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 result; // rax
  int v56; // eax
  _DWORD *v57; // r9
  int v58; // eax
  int *v59; // r9
  int v60; // ecx
  _DWORD *v61; // r9
  char v62; // r8
  void *Buf1; // [rsp+20h] [rbp-88h]
  USHORT AnsiCodePage; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v65; // [rsp+30h] [rbp-78h]
  unsigned __int64 v66; // [rsp+38h] [rbp-70h]
  int v67; // [rsp+40h] [rbp-68h]
  USHORT OemCodePage; // [rsp+44h] [rbp-64h] BYREF
  _WORD *v69; // [rsp+48h] [rbp-60h]
  unsigned __int64 v70; // [rsp+50h] [rbp-58h]
  unsigned __int64 v71; // [rsp+58h] [rbp-50h]

  v8 = *(unsigned int *)(a2 + 60);
  v9 = 0;
  v10 = 0;
  v11 = a1 + *(unsigned int *)(a2 + 56);
  v69 = 0LL;
  Buf1 = 0LL;
  v14 = v11 + v8;
  if ( (unsigned int)v8 < 6 )
    return 0LL;
  v67 = 1;
  if ( ((a3 - 1) & 0xFFFD) != 0 )
    return 0LL;
  memset(a6, 0, 0x88uLL);
  *((_WORD *)a6 + 67) = a4;
  v15 = v11 + 6;
  *((_WORD *)a6 + 66) = a3;
  v71 = v11 + 6;
  if ( v11 >= v11 + 6 )
    return 0LL;
  if ( v15 > v14 )
    return 0LL;
  v16 = v15 + 12LL * (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 2), 8);
  v17 = v11 + (unsigned __int16)__ROR2__(*(_WORD *)(v11 + 4), 8);
  v65 = v16;
  v66 = v17;
  if ( v15 > v16 )
    return 0LL;
  if ( v16 > v17 )
    return 0LL;
  if ( v17 > v14 )
    return 0LL;
  v70 = v14 - v17;
  v18 = 0;
  v19 = 0;
  EngGetCurrentCodePage(&OemCodePage, &AnsiCodePage);
  if ( v8 < 12 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(v11 + 2), 8) + 6 )
    return 0LL;
  v20 = v66;
  v21 = (_WORD *)v65;
  for ( i = 0; i < 4; ++i )
  {
    if ( v18 )
      break;
    if ( v15 >= (unsigned __int64)v21 )
      continue;
    v42 = (_WORD *)(v15 + 4);
    v43 = v70;
    while ( !v18 )
    {
      v44 = (unsigned __int16)__ROR2__(v42[3], 8);
      v45 = __ROR2__(v42[2], 8);
      v46 = v45;
      if ( v45 && v45 + (unsigned int)v44 <= v43 )
      {
        v18 = 0;
        if ( !i )
        {
          v47 = __ROR2__(*v42, 8) == a5;
          goto LABEL_48;
        }
        if ( i == 1 )
        {
          if ( (unsigned __int8)a5 != 4 )
          {
            v47 = (unsigned __int16)(unsigned __int8)__ROR2__(*v42, 8) == (unsigned __int16)(unsigned __int8)a5;
            goto LABEL_48;
          }
          v9 = 0;
          if ( (unsigned int)ConvertLangIDtoCodePage((unsigned __int16)__ROR2__(*v42, 8)) != AnsiCodePage )
            goto LABEL_105;
LABEL_104:
          v47 = v62 == 4;
LABEL_106:
          v21 = (_WORD *)v65;
        }
        else
        {
          if ( i != 2 )
          {
            if ( i == 3 )
              v9 = 1;
LABEL_50:
            if ( __ROR2__(*(v42 - 2), 8) == a3 && __ROR2__(*(v42 - 1), 8) == a4 && v9 )
            {
              v49 = __ROR2__(v42[1], 8);
              switch ( v49 )
              {
                case 1u:
                  if ( !*((_QWORD *)a6 + 1) )
                  {
                    a6[4] = v46;
                    *((_QWORD *)a6 + 1) = v20 + v44;
                    v69 = v42 - 2;
                  }
                  break;
                case 2u:
                  if ( !*((_QWORD *)a6 + 5) )
                  {
                    a6[12] = v46;
                    *((_QWORD *)a6 + 5) = v20 + v44;
                  }
                  break;
                case 3u:
                  if ( !*((_QWORD *)a6 + 7) )
                  {
                    a6[16] = v46;
                    *((_QWORD *)a6 + 7) = v20 + v44;
                  }
                  break;
                default:
                  v50 = v49 - 4;
                  if ( v49 != 4 )
                  {
                    v48 = Buf1;
                    if ( v50 == 1 && !Buf1 )
                    {
                      v48 = (void *)(v20 + v44);
                      v10 = v46;
                      Buf1 = (void *)(v20 + v44);
                    }
                    goto LABEL_52;
                  }
                  if ( !*((_QWORD *)a6 + 9) )
                  {
                    a6[20] = v46;
                    *((_QWORD *)a6 + 9) = v20 + v44;
                  }
                  break;
              }
            }
            v48 = Buf1;
LABEL_52:
            if ( *((_QWORD *)a6 + 1) && *((_QWORD *)a6 + 5) && *((_QWORD *)a6 + 7) && *((_QWORD *)a6 + 9) )
            {
              v19 = 1;
              if ( v48 )
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
            if ( (unsigned int)ConvertLangIDtoCodePage((unsigned __int16)__ROR2__(*v42, 8)) != AnsiCodePage )
              goto LABEL_104;
LABEL_105:
            v47 = v62 == 9;
            goto LABEL_106;
          }
          v47 = (unsigned __int8)__ROR2__(*v42, 8) == 9;
LABEL_48:
          v9 = 0;
        }
        LOBYTE(v9) = v47;
        goto LABEL_50;
      }
LABEL_54:
      v42 += 6;
      if ( v42 - 2 >= v21 )
        break;
    }
    v15 = v71;
  }
  if ( !v19 )
    return 0LL;
  v23 = a3;
  if ( a3 != 3 )
    goto LABEL_23;
  v24 = (unsigned __int8)__ROR2__(v69[2], 8) == 9;
  v25 = 0LL;
  v26 = 0;
  if ( v15 >= (unsigned __int64)v21 )
    goto LABEL_23;
  v21 = (_WORD *)(v15 + 8);
  v27 = v24;
  while ( 2 )
  {
    v28 = (unsigned __int16)__ROR2__(v21[1], 8);
    v29 = __ROR2__(*v21, 8);
    if ( !v29 )
      goto LABEL_20;
    if ( v29 + (unsigned int)v28 > v70 )
      goto LABEL_20;
    v30 = (unsigned __int8)__ROR2__(*(v21 - 2), 8) == 9;
    if ( __ROR2__(*(v21 - 4), 8) != 3
      || __ROR2__(*(v21 - 3), 8) != a4
      || __ROR2__(*(v21 - 1), 8) != (_WORD)v67
      || v69 == v21 - 4 )
    {
      goto LABEL_20;
    }
    if ( v27 )
    {
      if ( !v30 )
        goto LABEL_40;
LABEL_113:
      if ( !v25 )
      {
        v26 = v29;
        v25 = v66 + v28;
      }
LABEL_20:
      v21 += 6;
      if ( (unsigned __int64)(v21 - 4) >= v65 )
        goto LABEL_21;
      continue;
    }
    break;
  }
  if ( !v30 )
    goto LABEL_113;
LABEL_40:
  v26 = v29;
  v25 = v66 + v28;
LABEL_21:
  v23 = 3;
  if ( v25 )
  {
    *((_QWORD *)a6 + 3) = v25;
    a6[8] = v26;
  }
LABEL_23:
  if ( !(unsigned int)bConvertExtras(0LL, a6, v21) )
    return 0LL;
  v31 = a6[28] + 204;
  a6[23] = 204;
  if ( *((_QWORD *)a6 + 3) )
  {
    v56 = a6[29] + 4;
    a6[24] = v31;
    v31 += v56;
  }
  v32 = v31 + 2;
  v33 = a6[32] + 2;
  v34 = a6[30] + 3;
  a6[26] = v32;
  v35 = a6[31] + v32;
  a6[27] = v35;
  v36 = v33 + v35;
  *a7 = 0;
  a6[25] = v36;
  v37 = (v36 + v34) & 0xFFFFFFFC;
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
  v38 = fsSelectionTTFD(a1, a2);
  if ( (v38 & 0x21) != 0 )
  {
    if ( (v38 & 0x21) == 1 || (v38 & 0x21) == 0x20 )
    {
      v41 = 1;
      goto LABEL_81;
    }
    a6[1] = 0;
  }
  else
  {
    v41 = 3;
LABEL_81:
    a6[1] = v37;
    v37 += 20 * v41 + 12;
  }
  a6[21] = v37;
  v51 = v37 + 16;
  v52 = *(unsigned int *)(v39 + 64);
  if ( (_DWORD)v52 )
    v53 = v40 + v52;
  else
    v53 = 0LL;
  if ( v53 )
  {
    a6[22] = v51;
    v51 += 24;
  }
  v54 = a6[16];
  *a8 = 0;
  switch ( v54 )
  {
    case '8':
      if ( (unsigned int)bShellFontFace("Microsoft Sans Serif Regular", *((_BYTE **)a6 + 7), 0x1Cu) )
        *v61 = 1;
      break;
    case '0':
      if ( (unsigned int)bShellFontFace("Microsoft Tahoma Regular", *((_BYTE **)a6 + 7), 0x18u) )
        *v57 = 2;
      break;
    case '*':
      v58 = bShellFontFace("Microsoft Tahoma Bold", *((_BYTE **)a6 + 7), 0x15u);
      v60 = *v59;
      if ( v58 )
        v60 = 3;
      *v59 = v60;
      break;
  }
  result = 1LL;
  *a6 = (v51 + 7) & 0xFFFFFFF8;
  return result;
}
