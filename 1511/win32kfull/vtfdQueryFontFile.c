/*
 * XREFs of vtfdQueryFontFile @ 0x1C010EF80
 * Callers:
 *     vtfdQueryFontFileTE @ 0x1C010EEE0 (vtfdQueryFontFileTE.c)
 * Callees:
 *     EngMapFontFileFDInternal @ 0x1C00A9F68 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 *     bDescStr @ 0x1C01035F4 (bDescStr.c)
 *     StringCchLengthA @ 0x1C0117704 (StringCchLengthA.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     bReconnectVtfdFont @ 0x1C02491D4 (bReconnectVtfdFont.c)
 */

__int64 __fastcall vtfdQueryFontFile(__int64 a1, int a2, unsigned int a3, void *a4)
{
  int v8; // edi
  unsigned int v10; // eax
  size_t v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // r9
  bool v15; // zf
  _WORD *v16; // r9
  int v17; // eax
  _WORD *v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // ebx
  size_t pcchLength; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-130h] BYREF
  char psz[256]; // [rsp+40h] [rbp-128h] BYREF

  if ( (*(_DWORD *)(a1 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont() )
    return 0xFFFFFFFFLL;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
      return *(unsigned int *)(a1 + 36);
    return 0xFFFFFFFFLL;
  }
  if ( *(_DWORD *)a1 != 2 )
  {
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(int *)(v13 + 16);
    v15 = v13 + v14 == 0;
    v16 = (_WORD *)(v13 + v14);
    v17 = 0;
    if ( !v15 )
    {
      v18 = v16;
      v19 = 0x7FFFFFFFLL;
      v20 = 0;
      do
      {
        if ( !*v18 )
          break;
        ++v18;
        --v19;
      }
      while ( v19 );
      if ( v19 )
      {
        v17 = 0x7FFFFFFF - v19;
LABEL_28:
        if ( v20 < 0 )
          v17 = 0;
        v21 = 2 * v17 + 2;
        if ( a4 )
        {
          if ( a3 < v21 )
            return 0xFFFFFFFFLL;
          memmove(a4, v16, v21);
        }
        return v21;
      }
      v17 = 0;
    }
    v20 = -2147024809;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v10 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    if ( !(unsigned int)EngMapFontFileFDInternal(*(struct _FILEVIEW **)(a1 + 8), &pcchLength, &v23, 1) )
      return 0xFFFFFFFFLL;
    v10 = v23;
    v11 = pcchLength;
  }
  v12 = -1;
  if ( (unsigned int)bDescStr(v11, v10, psz) )
  {
    if ( StringCchLengthA(psz, 0x100uLL, &pcchLength) < 0 )
      return 0xFFFFFFFFLL;
    v12 = 2 * pcchLength + 2;
    if ( a4 )
    {
      if ( a3 >= v12 )
      {
        EngMultiByteToUnicodeN((LPWSTR)a4, 2 * (v12 >> 1), 0LL, psz, v12 >> 1);
        *((_WORD *)a4 + ((unsigned __int64)v12 >> 1) - 1) = 0;
        goto LABEL_18;
      }
      return 0xFFFFFFFFLL;
    }
  }
LABEL_18:
  if ( !*(_DWORD *)(a1 + 32) )
    EngUnmapFontFileFD(*(_QWORD *)(a1 + 8));
  return v12;
}
