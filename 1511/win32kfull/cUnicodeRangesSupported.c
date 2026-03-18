/*
 * XREFs of cUnicodeRangesSupported @ 0x1C000F81C
 * Callers:
 *     EngComputeGlyphSet @ 0x1C000F760 (EngComputeGlyphSet.c)
 *     pcpComputeGlyphset @ 0x1C0117494 (pcpComputeGlyphset.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
 *     cComputeGlyphSet @ 0x1C000FA30 (cComputeGlyphSet.c)
 *     vSort @ 0x1C000FBD0 (vSort.c)
 *     EngGetCurrentCodePage @ 0x1C00128B0 (EngGetCurrentCodePage.c)
 */

__int64 __fastcall cUnicodeRangesSupported(unsigned int a1, int a2, unsigned int a3, _WORD *a4, _BYTE *a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _WORD *v7; // rbp
  char v9; // r14
  _BYTE *v10; // rax
  __int64 v11; // rcx
  int v12; // r12d
  _BYTE *v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v17; // eax
  _BYTE *v18; // r15
  _WORD *v19; // r14
  __int64 v20; // r12
  _WORD *v21; // r13
  __int64 v22; // rsi
  char v23; // [rsp+80h] [rbp+8h]
  USHORT AnsiCodePage; // [rsp+88h] [rbp+10h] BYREF
  USHORT OemCodePage; // [rsp+90h] [rbp+18h] BYREF
  _WORD *v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v5 = (__int64)a5;
  v6 = a3;
  v7 = a4;
  v23 = a2;
  v9 = a2;
  if ( a3 )
  {
    v10 = a5;
    v11 = a3;
    do
    {
      *v10++ = a2++;
      --v11;
    }
    while ( v11 );
  }
  v12 = 393233;
  if ( a1 - 932 > 0x12 || !_bittest(&v12, a1 - 932) )
  {
    if ( a1 > 1 )
    {
      AnsiCodePage = a1;
    }
    else
    {
      EngGetCurrentCodePage(&OemCodePage, &AnsiCodePage);
      LOWORD(a1) = AnsiCodePage;
      if ( (unsigned __int16)(AnsiCodePage - 932) <= 0x12u && _bittest(&v12, (unsigned __int16)(AnsiCodePage - 932)) )
      {
        LOWORD(a1) = 1252;
        AnsiCodePage = 1252;
      }
    }
    ConvertToAndFromWideChar((unsigned __int16)a1, v7, (unsigned int)(2 * v6), v5, v6, 1);
    goto LABEL_8;
  }
  v17 = ConvertToAndFromWideChar(a1, a4, 2LL, v5, 1, 1);
  if ( v17 == -1 )
    a1 = 1252;
  if ( (_DWORD)v6 )
  {
    v18 = (_BYTE *)v5;
    v19 = v7;
    v20 = v5;
    v21 = v7;
    v22 = v6;
    do
    {
      if ( (unsigned int)ConvertToAndFromWideChar(a1, v21, 2LL, v20, 1, 1) == -1 || !*v19 && *v18 )
        *v19 = -1;
      ++v20;
      ++v21;
      ++v18;
      ++v19;
      --v22;
    }
    while ( v22 );
    v5 = (__int64)a5;
    v7 = v26;
    v9 = v23;
LABEL_8:
    if ( (_DWORD)v6 )
    {
      v13 = (_BYTE *)v5;
      v14 = v6;
      do
      {
        *v13++ -= v9;
        --v14;
      }
      while ( v14 );
    }
  }
  vSort(v7, v5, (unsigned int)v6);
  return cComputeGlyphSet((_DWORD)v7, v15, v6, 0, 0LL);
}
