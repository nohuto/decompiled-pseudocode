/*
 * XREFs of _woutput_l @ 0x1C0030EC4
 * Callers:
 *     _vsnwprintf_l @ 0x1C0030DE0 (_vsnwprintf_l.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     write_char @ 0x1C00317E4 (write_char.c)
 *     write_multi_char @ 0x1C0031830 (write_multi_char.c)
 *     write_string @ 0x1C0031884 (write_string.c)
 *     _get_printf_count_output @ 0x1C003190C (_get_printf_count_output.c)
 *     mbtowc @ 0x1C0031978 (mbtowc.c)
 *     ?AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z @ 0x1C0032F60 (-AddChildList@FxDeviceBase@@UEAAXPEAVFxChildList@@@Z.c)
 */

__int64 __fastcall woutput_l(_iobuf *stream, wchar_t *format, localeinfo_struct *plocinfo, char *argptr)
{
  wchar_t *v4; // r10
  char *v5; // rsi
  int v6; // edi
  int v7; // r12d
  int v8; // r11d
  wchar_t v10; // r9
  int v11; // r15d
  __int64 v12; // r13
  int v13; // edx
  $B4FF2100EA110D8CD0B9C89F852FB035 *sz; // rbx
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  __int64 v18; // r8
  char *v19; // r10
  unsigned __int16 *v20; // rcx
  int v21; // ecx
  $B4FF2100EA110D8CD0B9C89F852FB035 *v22; // rax
  _BYTE *v23; // rax
  wchar_t v24; // ax
  int v25; // r8d
  char *i; // r13
  char v27; // r12
  char *v28; // rbx
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  _WORD *v32; // rsi
  wchar_t v33; // cx
  int v34; // r15d
  int v35; // r12d
  _iobuf *v36; // rsi
  const char *v37; // r15
  int v38; // esi
  int v39; // eax
  __int64 v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  int charsout; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh]
  int v45; // [rsp+38h] [rbp-C8h]
  int v46; // [rsp+3Ch] [rbp-C4h]
  char *v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+48h] [rbp-B8h]
  int v49; // [rsp+4Ch] [rbp-B4h]
  wchar_t prefix[2]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t wchar; // [rsp+54h] [rbp-ACh] BYREF
  char tempchar[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h]
  _iobuf *f; // [rsp+60h] [rbp-A0h]
  int v55; // [rsp+68h] [rbp-98h]
  $519E2A0ABDBAFFC353FD5D86715BA24D text; // [rsp+70h] [rbp-90h]
  $B4FF2100EA110D8CD0B9C89F852FB035 buffer; // [rsp+80h] [rbp-80h] BYREF

  f = stream;
  v47 = argptr;
  v46 = 0;
  v55 = 0;
  v4 = (wchar_t *)argptr;
  v45 = 0;
  v5 = (char *)format;
  v44 = 0;
  v6 = 0;
  v53 = 0;
  v7 = 0;
  v48 = 0;
  v8 = 0;
  if ( stream && format )
  {
    v10 = *format;
    v11 = 0;
    charsout = 0;
    LODWORD(v12) = 0;
    v13 = 0;
    if ( v10 )
    {
      sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)text.sz;
      while ( 1 )
      {
        v5 += 2;
        text.sz = v5;
        if ( v11 < 0 )
          return (unsigned int)v11;
        if ( (unsigned __int16)(v10 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = _lookuptable[v10 - 32] & 0xF;
        v13 = _lookuptable[8 * v15 + v13] >> 4;
        v49 = v13;
        switch ( v13 )
        {
          case 0:
            goto $NORMAL_STATE;
          case 1:
            v53 = 0;
            v7 = 0;
            v46 = 0;
            v6 = 0;
            v44 = 0;
            v8 = -1;
            v45 = -1;
            v48 = 0;
            goto LABEL_141;
          case 2:
            switch ( v10 )
            {
              case ' ':
                v6 |= 2u;
                break;
              case '#':
                v6 |= 0x80u;
                break;
              case '+':
                v6 |= 1u;
                break;
              case '-':
                v6 |= 4u;
                break;
              case '0':
                v6 |= 8u;
                break;
            }
            goto LABEL_141;
          case 3:
            if ( v10 == 42 )
            {
              v7 = *(_DWORD *)v4;
              v4 += 4;
              v47 = (char *)v4;
              v46 = v7;
              if ( v7 < 0 )
              {
                v6 |= 4u;
                v7 = -v7;
                v46 = v7;
              }
            }
            else
            {
              v7 = v10 + 2 * (v7 + 4 * (v7 - 6));
              v46 = v7;
            }
            goto LABEL_141;
          case 4:
            v8 = 0;
            v45 = 0;
            goto LABEL_141;
          case 5:
            if ( v10 == 42 )
            {
              v8 = *(_DWORD *)v4;
              v4 += 4;
              v47 = (char *)v4;
              v45 = v8;
              if ( v8 < 0 )
              {
                v8 = -1;
                v45 = -1;
              }
            }
            else
            {
              v8 = v10 + 2 * (v8 + 4 * (v8 - 6));
              v45 = v8;
            }
            goto LABEL_141;
          case 6:
            if ( v10 != 73 )
            {
              switch ( v10 )
              {
                case 'h':
                  v6 |= 0x20u;
                  break;
                case 'l':
                  if ( *(_WORD *)v5 == 108 )
                  {
                    v5 += 2;
                    v6 |= 0x1000u;
                  }
                  else
                  {
                    v6 |= 0x10u;
                  }
                  break;
                case 'w':
                  v6 |= 0x800u;
                  break;
              }
              goto LABEL_141;
            }
            v41 = *(unsigned __int16 *)v5;
            v6 |= 0x8000u;
            if ( *(_DWORD *)v5 == 3407926 )
            {
              v5 += 4;
              v6 |= 0x8000u;
              goto LABEL_141;
            }
            if ( (_WORD)v41 == 51 && *((_WORD *)v5 + 1) == 50 )
            {
              v5 += 4;
              v6 &= ~0x8000u;
              goto LABEL_141;
            }
            LOWORD(v41) = v41 - 88;
            if ( (unsigned __int16)v41 <= 0x20u )
            {
              v42 = 0x120821001LL;
              if ( _bittest64(&v42, v41) )
                goto LABEL_141;
            }
            v49 = 0;
$NORMAL_STATE:
            v48 = 1;
            write_char(v10, f, &charsout);
            goto LABEL_140;
        }
        if ( v13 == 7 )
          break;
LABEL_141:
        v10 = *(_WORD *)v5;
        if ( !*(_WORD *)v5 )
          return (unsigned int)v11;
      }
      if ( v10 > 0x69u )
      {
        switch ( v10 )
        {
          case 'n':
            v32 = *(_WORD **)v4;
            v47 = (char *)(v4 + 4);
            if ( !(unsigned int)get_printf_count_output() )
              goto LABEL_183;
            if ( (v6 & 0x20) != 0 )
              *v32 = v11;
            else
              *(_DWORD *)v32 = v11;
            v5 = text.sz;
            v53 = 1;
            goto LABEL_111;
          case 'o':
            v16 = 8;
            if ( (v6 & 0x80u) != 0 )
              v6 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v8 = 16;
            v6 |= 0x8000u;
LABEL_73:
            v25 = 7;
            goto LABEL_74;
        }
        if ( v10 != 115 )
        {
          if ( v10 == 117 )
          {
LABEL_27:
            v16 = 10;
            goto LABEL_28;
          }
          if ( v10 != 120 )
            goto LABEL_111;
          v25 = 39;
LABEL_74:
          v55 = v25;
          v16 = 16;
          if ( (v6 & 0x80u) != 0 )
          {
            prefix[0] = 48;
            v17 = 2;
            prefix[1] = v25 + 81;
            goto $COMMON_INT;
          }
LABEL_28:
          v17 = v44;
$COMMON_INT:
          if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
          {
            v18 = *(_QWORD *)v4;
            v19 = (char *)(v4 + 4);
          }
          else
          {
            v19 = (char *)(v4 + 4);
            if ( (v6 & 0x20) != 0 )
            {
              v47 = v19;
              if ( (v6 & 0x40) != 0 )
                v18 = *((__int16 *)v19 - 4);
              else
                v18 = *((unsigned __int16 *)v19 - 4);
              goto LABEL_87;
            }
            if ( (v6 & 0x40) != 0 )
              v18 = *((int *)v19 - 2);
            else
              v18 = *((unsigned int *)v19 - 2);
          }
          v47 = v19;
LABEL_87:
          if ( (v6 & 0x40) != 0 && v18 < 0 )
          {
            v18 = -v18;
            v6 |= 0x100u;
          }
          if ( (v6 & 0x9000) == 0 )
            v18 = (unsigned int)v18;
          if ( v8 >= 0 )
          {
            v6 &= ~8u;
            if ( v8 > 512 )
              v8 = 512;
          }
          else
          {
            v8 = 1;
          }
          v27 = v55;
          v28 = &buffer.sz[511];
          v44 = v18 != 0 ? v17 : 0;
          while ( 1 )
          {
            v29 = v8--;
            if ( v29 <= 0 && !v18 )
              break;
            v30 = v18 % (unsigned __int64)v16;
            v18 /= (unsigned __int64)v16;
            v31 = v30 + 48;
            if ( (int)v30 + 48 > 57 )
              v31 += v27;
            *v28-- = v31;
          }
          v7 = v46;
          LODWORD(v12) = (unsigned int)&buffer.wz[64] + 383 - (_DWORD)v28;
          v45 = v8;
          sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)(v28 + 1);
          if ( (v6 & 0x200) != 0 && (!(_DWORD)v12 || sz->sz[0] != 48) )
          {
            sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)((char *)sz - 1);
            LODWORD(v12) = v12 + 1;
            sz->sz[0] = 48;
          }
          goto LABEL_111;
        }
      }
      else
      {
        if ( v10 == 105 )
          goto LABEL_26;
        if ( v10 == 67 )
        {
          if ( (v6 & 0x830) == 0 )
            v6 |= 0x20u;
          goto LABEL_53;
        }
        if ( v10 != 83 )
        {
          if ( v10 != 88 )
          {
            if ( v10 == 90 )
            {
              v20 = *(unsigned __int16 **)v4;
              v47 = (char *)(v4 + 4);
              if ( v20 && (sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)*((_QWORD *)v20 + 1)) != 0LL )
              {
                if ( v20[1] < *v20 )
                  goto LABEL_183;
                LODWORD(v12) = *v20;
                if ( (v6 & 0x800) != 0 )
                {
                  if ( (v12 & 1) != 0 || ((unsigned __int8)sz & 1) != 0 )
                  {
LABEL_183:
                    FxDeviceBase::AddChildList(0LL);
                    return 0xFFFFFFFFLL;
                  }
                  LODWORD(v12) = *v20 >> 1;
                  v48 = 1;
                }
                else
                {
                  v48 = 0;
                }
              }
              else
              {
                sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
                LODWORD(v12) = 6;
              }
              goto LABEL_111;
            }
            if ( v10 != 99 )
            {
              if ( v10 == 100 )
              {
LABEL_26:
                v6 |= 0x40u;
                goto LABEL_27;
              }
LABEL_111:
              if ( v53 )
              {
                v4 = (wchar_t *)v47;
                v8 = v45;
                v13 = v49;
                goto LABEL_141;
              }
              if ( (v6 & 0x40) != 0 )
              {
                if ( (v6 & 0x100) != 0 )
                {
                  v33 = 45;
                  goto LABEL_117;
                }
                if ( (v6 & 1) != 0 )
                {
                  v33 = 43;
LABEL_117:
                  prefix[0] = v33;
LABEL_118:
                  v34 = 1;
                  v44 = 1;
LABEL_122:
                  v35 = v7 - v12 - v34;
                  if ( (v6 & 0xC) == 0 )
                    write_multi_char(0x20u, v35, f, &charsout);
                  write_string(prefix, v34, f, &charsout);
                  v36 = f;
                  if ( (v6 & 0xC) == 8 )
                    write_multi_char(0x30u, v35, f, &charsout);
                  if ( v48 || (int)v12 <= 0 )
                  {
                    write_string((unsigned __int16 *)sz, v12, v36, &charsout);
LABEL_136:
                    v11 = charsout;
                  }
                  else
                  {
                    v37 = (const char *)sz;
                    v38 = v12;
                    while ( 1 )
                    {
                      --v38;
                      v39 = mbtowc(&wchar, v37, _mb_cur_max);
                      v40 = v39;
                      if ( v39 == 2 )
                        --v38;
                      if ( v39 <= 0 )
                        break;
                      write_char(wchar, f, &charsout);
                      v37 += v40;
                      if ( v38 <= 0 )
                      {
                        v36 = f;
                        goto LABEL_136;
                      }
                    }
                    v36 = f;
                    v11 = -1;
                    charsout = -1;
                  }
                  if ( v11 < 0 || (v6 & 4) == 0 )
                  {
                    v4 = (wchar_t *)v47;
                    v5 = text.sz;
                    v8 = v45;
                    v7 = v46;
                    v13 = v49;
                    goto LABEL_141;
                  }
                  write_multi_char(0x20u, v35, v36, &charsout);
                  v5 = text.sz;
                  v7 = v46;
LABEL_140:
                  v8 = v45;
                  v4 = (wchar_t *)v47;
                  v11 = charsout;
                  v13 = v49;
                  goto LABEL_141;
                }
                if ( (v6 & 2) != 0 )
                {
                  prefix[0] = 32;
                  goto LABEL_118;
                }
              }
              v34 = v44;
              goto LABEL_122;
            }
LABEL_53:
            v24 = *v4;
            wchar = *v4;
            v48 = 1;
            v47 = (char *)(v4 + 4);
            if ( (v6 & 0x20) != 0 )
            {
              tempchar[1] = 0;
              tempchar[0] = v24;
              if ( mbtowc((wchar_t *)&buffer, tempchar, _mb_cur_max) < 0 )
                v53 = 1;
            }
            else
            {
              buffer.wz[0] = v24;
            }
            sz = &buffer;
            LODWORD(v12) = 1;
            goto LABEL_111;
          }
          goto LABEL_73;
        }
        if ( (v6 & 0x830) == 0 )
          v6 |= 0x20u;
      }
      v21 = v8;
      if ( v8 == -1 )
        v21 = 0x7FFFFFFF;
      v22 = *($B4FF2100EA110D8CD0B9C89F852FB035 **)v4;
      v47 = (char *)(v4 + 4);
      if ( (v6 & 0x20) != 0 )
      {
        sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)"(null)";
        LODWORD(v12) = 0;
        if ( v22 )
          sz = v22;
        v23 = sz;
        if ( v21 > 0 )
        {
          do
          {
            if ( !*v23 )
              break;
            ++v23;
            LODWORD(v12) = v12 + 1;
          }
          while ( (int)v12 < v21 );
        }
      }
      else
      {
        v48 = 1;
        sz = ($B4FF2100EA110D8CD0B9C89F852FB035 *)L"(null)";
        if ( v22 )
          sz = v22;
        for ( i = (char *)sz; v21; i += 2 )
        {
          --v21;
          if ( !*(_WORD *)i )
            break;
        }
        v12 = (i - (char *)sz) >> 1;
      }
      goto LABEL_111;
    }
    return (unsigned int)v11;
  }
  else
  {
    FxDeviceBase::AddChildList(0LL);
    return 0xFFFFFFFFLL;
  }
}
