/*
 * XREFs of cUnicodeRangesSupported @ 0x14018435C
 * Callers:
 *     EngComputeGlyphSet @ 0x140184290 (EngComputeGlyphSet.c)
 * Callees:
 *     vSort @ 0x140184594 (vSort.c)
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 */

__int64 __fastcall cUnicodeRangesSupported(unsigned int a1, int a2, unsigned int a3, unsigned __int16 *a4, char *a5)
{
  char *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int16 *v8; // r14
  char v10; // r12
  char *v11; // rax
  __int64 v12; // rcx
  int v13; // r15d
  unsigned int v14; // r15d
  char *v15; // r12
  char *v16; // r13
  unsigned __int16 *v17; // rbp
  unsigned __int16 *v18; // rsi
  __int64 v19; // r14
  unsigned int v20; // edx
  unsigned __int16 *v21; // r8
  char *v23; // rax
  __int64 v24; // rcx
  char v25; // [rsp+80h] [rbp+8h]
  USHORT AnsiCodePage; // [rsp+88h] [rbp+10h] BYREF
  USHORT OemCodePage; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int16 *v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v5 = a5;
  LODWORD(v6) = 0;
  v7 = a3;
  v8 = a4;
  v25 = a2;
  AnsiCodePage = 0;
  v10 = a2;
  OemCodePage = 0;
  if ( a3 )
  {
    v11 = a5;
    v12 = a3;
    do
    {
      *v11++ = a2++;
      --v12;
    }
    while ( v12 );
  }
  v13 = 393233;
  if ( a1 - 932 <= 0x12 && _bittest(&v13, a1 - 932) )
  {
    v14 = 1252;
    if ( ConvertToAndFromWideChar(a1, a4, 2, v5, 1, 1) != -1 )
      v14 = a1;
    if ( (_DWORD)v7 )
    {
      v15 = v5;
      v16 = v5;
      v17 = v8;
      v18 = v8;
      v19 = v7;
      do
      {
        if ( ConvertToAndFromWideChar(v14, v17, 2, v16, 1, 1) == -1 || !*v18 && *v15 )
          *v18 = -1;
        ++v16;
        ++v17;
        ++v15;
        ++v18;
        --v19;
      }
      while ( v19 );
      v5 = a5;
      v8 = v28;
      v10 = v25;
LABEL_25:
      v23 = v5;
      v24 = v7;
      do
      {
        *v23++ -= v10;
        --v24;
      }
      while ( v24 );
    }
  }
  else
  {
    if ( a1 > 1 )
    {
      AnsiCodePage = a1;
    }
    else
    {
      RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
      LOWORD(a1) = AnsiCodePage;
      if ( (unsigned __int16)(AnsiCodePage - 932) <= 0x12u && _bittest(&v13, (unsigned __int16)(AnsiCodePage - 932))
        || AnsiCodePage == 0xFDE9 )
      {
        LOWORD(a1) = 1252;
        AnsiCodePage = 1252;
      }
    }
    ConvertToAndFromWideChar((unsigned __int16)a1, v8, 2 * v7, v5, v7, 1);
    if ( (_DWORD)v7 )
      goto LABEL_25;
  }
  vSort(v8, v5, (unsigned int)v7);
  v20 = 0;
  if ( (_DWORD)v7 )
  {
    do
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 < (unsigned int)v7 )
      {
        v21 = &v8[v6];
        do
        {
          if ( *v21 - v8[(unsigned int)(v6 - 1)] > 1 )
            break;
          LODWORD(v6) = v6 + 1;
          ++v21;
        }
        while ( (unsigned int)v6 < (unsigned int)v7 );
      }
      ++v20;
    }
    while ( (unsigned int)v6 < (unsigned int)v7 );
  }
  return v20;
}
