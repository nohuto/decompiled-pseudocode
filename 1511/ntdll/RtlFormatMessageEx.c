/*
 * XREFs of RtlFormatMessageEx @ 0x18004A8C0
 * Callers:
 *     RtlFormatMessage @ 0x1800E52C0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x18004A828 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x18004AE80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlStringCchCopyW @ 0x1800DCD90 (RtlStringCchCopyW.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  unsigned int v10; // r13d
  BOOLEAN v11; // r11
  va_list *v12; // r10
  ULONG v13; // r9d
  signed int v15; // r12d
  PWSTR v16; // rcx
  ULONG cwSavColumn; // r15d
  PWSTR v18; // rbx
  WCHAR *v19; // rsi
  PWSTR v20; // r14
  __int16 v21; // ax
  PULONG v22; // rdx
  WCHAR v24; // cx
  PWSTR v25; // rdx
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // r15
  WCHAR *v29; // rcx
  char v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rcx
  va_list v33; // rax
  WCHAR *v34; // r9
  va_list v35; // r8
  va_list v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  WCHAR v39; // dx
  SIZE_T v40; // rsi
  SIZE_T iwDst; // rax
  SIZE_T iwDstSpace; // rax
  unsigned int v43; // eax
  int v44; // ecx
  WCHAR *v45; // r9
  unsigned __int16 v46; // ax
  int v47; // r8d
  const wchar_t *v48; // r8
  unsigned __int16 v49; // ax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r15d
  __int16 v53; // ax
  WCHAR *v54; // rdx
  PWSTR v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  _WORD *v58; // rsi
  __int64 v59; // [rsp+38h] [rbp-D0h]
  unsigned int v62; // [rsp+5Ch] [rbp-ACh]
  ULONG v63; // [rsp+60h] [rbp-A8h]
  va_list *v64; // [rsp+68h] [rbp-A0h]
  WCHAR *v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  PWSTR v68; // [rsp+90h] [rbp-78h]
  PWSTR v69; // [rsp+98h] [rbp-70h]
  PULONG v70; // [rsp+A0h] [rbp-68h]
  PWSTR v71; // [rsp+A8h] [rbp-60h]
  _QWORD v72[200]; // [rsp+B8h] [rbp-50h]
  unsigned __int16 v73; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v74[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  WCHAR v75[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v10 = 0;
  v11 = IgnoreInserts;
  v12 = Arguments;
  v13 = MaximumWidth;
  v15 = Length >> 1;
  v69 = MessageFormat;
  v16 = Buffer;
  v70 = ReturnLength;
  v64 = Arguments;
  v62 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    cwSavColumn = ParseContext->cwSavColumn;
    ParseContext->fFlags &= ~1u;
    v19 = 0LL;
    v63 = cwSavColumn;
    v20 = &MessageFormat[ParseContext->iwSrc];
    iwDst = ParseContext->iwDst;
    v68 = v20;
    v18 = &Buffer[iwDst];
    iwDstSpace = ParseContext->iwDstSpace;
    if ( iwDstSpace != -1LL )
      v19 = &Buffer[iwDstSpace];
    v15 -= LODWORD(ParseContext->iwDst);
    if ( !ArgumentsAreAnArray && Arguments )
      *Arguments = ParseContext->lpvArgStart;
    if ( (ParseContext->fFlags & 2) != 0 )
    {
      ParseContext->fFlags &= ~2u;
      goto LABEL_138;
    }
  }
  else
  {
    cwSavColumn = 0;
    v18 = Buffer;
    v63 = 0;
    v19 = 0LL;
    v68 = MessageFormat;
    v20 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *v20;
      if ( !*v20 )
        goto LABEL_17;
      if ( v21 == 37 )
        break;
      ++v20;
      if ( v21 != 13 && v21 != 10 )
        goto LABEL_9;
      if ( v21 == 10 && *v20 == 13 || v21 == 13 && *v20 == 10 )
        ++v20;
      if ( v13 )
      {
        v19 = v18;
        v21 = 32;
LABEL_9:
        if ( --v15 < 0 )
          goto LABEL_63;
        *v18 = v21;
        if ( v21 == 32 )
          v19 = v18;
        ++v18;
        ++cwSavColumn;
        goto LABEL_13;
      }
      v15 -= 2;
      if ( v15 < 0 )
        goto LABEL_63;
      cwSavColumn = 0;
      *(_DWORD *)v18 = 655373;
      v63 = 0;
      v68 = v20;
      v18 += 2;
      v19 = 0LL;
    }
    v24 = v20[1];
    v25 = v18;
    v71 = v18;
    if ( (unsigned __int16)(v24 - 49) > 8u )
      break;
    v20 += 2;
    v26 = v24 - 48;
    v27 = *v20;
    if ( (unsigned __int16)(v27 - 48) <= 9u )
    {
      ++v20;
      v26 = (unsigned __int16)v27 + 2 * (5 * v26 - 24);
      v27 = *v20;
      if ( (unsigned __int16)(v27 - 48) <= 9u )
      {
        ++v20;
        v26 = (unsigned __int16)v27 + 2 * (5 * v26 - 24);
        v27 = *v20;
        if ( (unsigned __int16)(v27 - 48) <= 9u )
          return -1073741811;
      }
    }
    v28 = (unsigned int)(v26 - 1);
    if ( (_WORD)v27 == 33 )
    {
      v29 = v74;
      v30 = 0;
      v73 = 37;
      while ( 1 )
      {
        ++v20;
        v66 = v29;
        v39 = *v20;
        if ( *v20 == 33 )
          break;
        if ( !v39 )
          return -1073741811;
        if ( v29 >= v75 )
          return -1073741811;
        if ( v39 == 42 )
        {
          v43 = v10++;
          if ( v43 > 1 )
            return -1073741811;
        }
        *v29++ = v39;
      }
      ++v20;
      *v29 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&v73, v27, 9LL, &v66);
      v29 = v66;
      v30 = 1;
      v12 = v64;
      v11 = IgnoreInserts;
    }
    if ( !v11 )
    {
      if ( !v12 || (unsigned int)v28 + v10 >= 0xC8 )
        return -1073741811;
      if ( !ArgumentsAreAnsi )
        goto LABEL_29;
      v45 = v29 - 1;
      if ( *(v29 - 1) == 99 )
      {
        v46 = *(v29 - 2) - 104;
        if ( v46 > 0xFu || (v47 = 32785, !_bittest(&v47, v46)) )
        {
          v48 = L"hc";
          goto LABEL_114;
        }
      }
      else
      {
        v47 = 32785;
      }
      if ( *v45 == 115 && ((v49 = *(v29 - 2) - 104, v49 > 0xFu) || !_bittest(&v47, v49)) )
      {
        v48 = L"hs";
LABEL_114:
        RtlStringCchCopyW(v29 - 1, 3LL, v48);
        v12 = v64;
      }
      else if ( *v45 == 83 )
      {
        *v45 = 115;
      }
      else if ( *v45 == 67 )
      {
        *v45 = 99;
      }
LABEL_29:
      v31 = v62;
      if ( (unsigned int)v28 >= v62 )
      {
        do
        {
          v32 = v31;
          if ( ArgumentsAreAnArray )
          {
            v33 = *v12;
            ++v31;
            ++v12;
          }
          else
          {
            *v12 += 8;
            ++v31;
            v33 = (va_list)*((_QWORD *)*v12 - 1);
          }
          v72[v32] = v33;
        }
        while ( v31 <= (unsigned int)v28 );
        v62 = v31;
        v64 = v12;
      }
      v34 = (WCHAR *)v72[v28];
      v35 = 0LL;
      v36 = 0LL;
      v66 = v34;
      if ( !v10 )
        goto LABEL_35;
      if ( ArgumentsAreAnArray )
      {
        v35 = *v12;
        v50 = v31++;
        ++v12;
        v62 = v31;
        v64 = v12;
        v72[v50] = v35;
      }
      else
      {
        *v12 += 8;
        v35 = (va_list)*((_QWORD *)*v12 - 1);
      }
      if ( v10 > 1 )
      {
        v10 = 0;
        if ( ArgumentsAreAnArray )
        {
          v36 = *v12;
          v51 = v31;
          v62 = v31 + 1;
          v64 = v12 + 1;
        }
        else
        {
          *v12 += 8;
          v36 = (va_list)*((_QWORD *)*v12 - 1);
          v51 = v31;
          v62 = v31 + 1;
        }
        v72[v51] = v36;
      }
      else
      {
LABEL_35:
        v10 = 0;
      }
      v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)&v73, v34, v35, v36);
      goto LABEL_37;
    }
    if ( v30 == 1 )
    {
      v10 = 0;
LABEL_62:
      LODWORD(v59) = v28 + 1;
      v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u", v59);
      goto LABEL_37;
    }
    v44 = v73 - aS_0[0];
    if ( v73 == aS_0[0] )
    {
      v44 = v74[0] - aS_0[1];
      if ( v74[0] == aS_0[1] )
        v44 = v74[1] - aS_0[2];
    }
    v10 = 0;
    if ( !v44 )
      goto LABEL_62;
    LODWORD(v59) = v28 + 1;
    v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u!%s!", v59, v74);
LABEL_37:
    if ( v37 < 0 )
      goto LABEL_63;
    v38 = (v67 - (__int64)v18) >> 1;
    v15 -= v38;
    if ( v15 < 0 )
      goto LABEL_63;
    v25 = v71;
    v12 = v64;
    v13 = MaximumWidth;
    v11 = IgnoreInserts;
    v18 += (int)v38;
LABEL_40:
    if ( v25 )
    {
      v16 = Buffer;
      cwSavColumn = v18 - v25 + v63;
      goto LABEL_13;
    }
LABEL_83:
    v16 = Buffer;
    v19 = 0LL;
    cwSavColumn = 0;
LABEL_13:
    v63 = cwSavColumn;
    v68 = v20;
    if ( v13 - 1 <= 0xFFFFFFFD && cwSavColumn >= v13 )
    {
LABEL_138:
      if ( v19 )
      {
        v54 = v19;
        do
        {
          if ( *v54 != 32 && *v54 != 9 )
            break;
          ++v54;
        }
        while ( v54 != v18 );
        if ( v19 > Buffer )
        {
          do
          {
            v55 = v19 - 1;
            if ( *(v19 - 1) != 32 && *v55 != 9 )
              break;
            --v19;
          }
          while ( v55 > Buffer );
        }
        v56 = v54 - v19;
        if ( (_DWORD)v56 == 1 )
        {
          if ( --v15 < 0 )
            goto LABEL_149;
        }
        else if ( (unsigned int)v56 > 2 )
        {
          v15 = v56 + v15 - 2;
        }
        v57 = v18 - v54;
        cwSavColumn = v57;
        v63 = v57;
        memmove(v19 + 2, v54, 2 * v57);
        v13 = MaximumWidth;
        *v19 = 13;
        v58 = v19 + 1;
        *v58 = 10;
        v18 = &v58[(unsigned int)v57 + 1];
      }
      else
      {
        v15 -= 2;
        if ( v15 < 0 )
        {
LABEL_149:
          if ( ParseContext )
          {
            ParseContext->fFlags |= 2u;
            goto LABEL_63;
          }
          return -2147483643;
        }
        cwSavColumn = 0;
        *(_DWORD *)v18 = 655373;
        v63 = 0;
        v18 += 2;
      }
      v12 = v64;
      v19 = 0LL;
      v16 = Buffer;
      v11 = IgnoreInserts;
    }
  }
  if ( v24 != 48 )
  {
    switch ( v24 )
    {
      case 0u:
        return -1073741811;
      case 0x72u:
        if ( --v15 < 0 )
          goto LABEL_63;
        *v18++ = 13;
        v20 += 2;
        goto LABEL_83;
      case 0x6Eu:
        v15 -= 2;
        if ( v15 < 0 )
          goto LABEL_63;
        *(_DWORD *)v18 = 655373;
        v18 += 2;
        v20 += 2;
        goto LABEL_83;
      case 0x74u:
        if ( --v15 < 0 )
          goto LABEL_63;
        if ( (cwSavColumn & 7) != 0 )
          v52 = (cwSavColumn + 7) & 0xFFFFFFF8;
        else
          v52 = cwSavColumn + 8;
        v63 = v52;
        v53 = 9;
        break;
      case 0x62u:
        if ( --v15 < 0 )
          goto LABEL_63;
        v53 = 32;
        break;
      default:
        if ( v11 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            goto LABEL_63;
          *v18 = 37;
          v18[1] = v20[1];
          v18 += 2;
          goto LABEL_92;
        }
        if ( --v15 < 0 )
          goto LABEL_63;
        *v18 = v24;
LABEL_91:
        ++v18;
LABEL_92:
        v20 += 2;
        goto LABEL_40;
    }
    v19 = v18;
    *v18 = v53;
    goto LABEL_91;
  }
  v16 = Buffer;
LABEL_17:
  if ( v15 < 1 )
  {
LABEL_63:
    if ( ParseContext )
    {
      ParseContext->cwSavColumn = v63;
      ParseContext->iwSrc = v68 - v69;
      ParseContext->iwDst = v18 - Buffer;
      if ( v19 )
        v40 = v19 - Buffer;
      else
        v40 = -1LL;
      ParseContext->fFlags |= 1u;
      ParseContext->iwDstSpace = v40;
    }
    return -2147483643;
  }
  v22 = v70;
  *v18 = 0;
  if ( v22 )
    *v22 = 2 * (((char *)v18 - (char *)v16 + 2) >> 1);
  return 0;
}
