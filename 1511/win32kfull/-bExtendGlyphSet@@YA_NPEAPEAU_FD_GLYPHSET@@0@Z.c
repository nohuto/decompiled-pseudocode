/*
 * XREFs of ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B317C
 * Callers:
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C001E62C (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C02B34D8 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C000F948 (ConvertToAndFromWideChar.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

char __fastcall bExtendGlyphSet(struct _FD_GLYPHSET **a1, struct _FD_GLYPHSET **a2)
{
  __int64 v2; // rsi
  char v3; // bl
  __int64 v4; // rbp
  unsigned int v6; // edi
  _WORD *v7; // rdx
  unsigned int v8; // r8d
  ULONG v9; // r15d
  struct _FD_GLYPHSET *v10; // r14
  unsigned int v11; // r12d
  __int16 *v12; // rdx
  __int64 v13; // r11
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  __int16 v16; // r13
  __int64 v17; // rax
  WCHAR v18; // cx
  USHORT v19; // cx
  unsigned int v20; // eax
  int v21; // edx
  unsigned int v22; // r13d
  char *v23; // rdi
  __int64 v24; // r15
  char *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r15
  int v28; // r11d
  unsigned __int16 *v29; // r8
  __int64 v30; // r10
  unsigned int i; // r9d
  unsigned __int8 v32; // cl
  char *v33; // rdi
  unsigned __int16 *v34; // rbx
  __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rax
  USHORT AnsiCodePage[2]; // [rsp+30h] [rbp-358h] BYREF
  USHORT OemCodePage; // [rsp+34h] [rbp-354h] BYREF
  struct _FD_GLYPHSET **v40; // [rsp+38h] [rbp-350h]
  CHAR v41[256]; // [rsp+40h] [rbp-348h] BYREF
  WCHAR v42[256]; // [rsp+140h] [rbp-248h] BYREF

  v2 = (__int64)*a1;
  v3 = 0;
  v40 = a2;
  v4 = *(unsigned int *)(v2 + 12);
  if ( !(_DWORD)v4 )
    return 0;
  v6 = *(_DWORD *)(v2 + 8);
  if ( v6 > 0x100 )
    return 0;
  if ( (unsigned __int16)(*(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 16)
                        + *(_WORD *)(v2 + 16LL * (unsigned int)(v4 - 1) + 18)
                        - 1) >= 0xF020u )
  {
    v7 = (_WORD *)(v2 + 16);
    if ( *(_WORD *)(v2 + 16) <= 0xF0FFu )
    {
      v8 = 0;
      if ( (_DWORD)v4 == 1 )
        return 0;
      while ( (unsigned __int16)(*v7 + v7[1] - 1) >= 0xF020u || *(_WORD *)(v2 + 16 * (v8 + 1 + 1LL)) <= 0xF0FFu )
      {
        ++v8;
        v7 += 8;
        if ( v8 >= (int)v4 - 1 )
          return 0;
      }
    }
  }
  v9 = 4 * (v6 + 4 * (v4 + 58));
  v10 = (struct _FD_GLYPHSET *)PALLOCMEM2(v9, 1936484167LL, 1);
  if ( v10 )
  {
    memset(v41, 0, sizeof(v41));
    v11 = 0;
    v12 = (__int16 *)(v2 + 16);
    v13 = v4;
    do
    {
      v14 = (unsigned __int16)v12[1];
      v15 = 0;
      if ( v12[1] )
      {
        v16 = *v12;
        do
        {
          v17 = v11;
          v18 = v15 + v16;
          ++v11;
          ++v15;
          v42[v17] = v18;
        }
        while ( v15 < v14 );
      }
      v12 += 8;
      --v13;
    }
    while ( v13 );
    RtlGetDefaultCodePage(AnsiCodePage, &OemCodePage);
    v19 = AnsiCodePage[0];
    v20 = AnsiCodePage[0];
    if ( (unsigned __int16)(AnsiCodePage[0] - 932) <= 0x12u )
    {
      v21 = 393233;
      LOWORD(v20) = AnsiCodePage[0] - 932;
      if ( _bittest(&v21, v20) )
      {
        v19 = 1252;
        AnsiCodePage[0] = 1252;
      }
    }
    if ( (unsigned int)ConvertToAndFromWideChar(v19, v42, 2 * v6, v41, 0x100u, 0) == -1 )
    {
      Win32FreePool(v10);
      return 0;
    }
    v10->cjThis = v9;
    v10->flAccel = *(_DWORD *)(v2 + 4) | 0x10;
    v10->cGlyphsSupported = v6 + 224;
    v10->cRuns = v4 + 1;
    v22 = 0;
    v23 = (char *)&v10->awcrun[(unsigned int)(v4 + 1)];
    v24 = v2 + 16;
    v25 = (char *)v10 - v2;
    do
    {
      if ( *(_WORD *)v24 >= 0xF020u )
        break;
      *(_WORD *)&v25[v24] = *(_WORD *)v24;
      *(_WORD *)&v25[v24 + 2] = *(_WORD *)(v24 + 2);
      *(_QWORD *)&v25[v24 + 8] = v23;
      memmove(v23, *(const void **)(v24 + 8), 4LL * *(unsigned __int16 *)(v24 + 2));
      v26 = *(unsigned __int16 *)(v24 + 2);
      ++v22;
      v24 += 16LL;
      v23 += 4 * v26;
    }
    while ( v22 < (unsigned int)v4 );
    v27 = v22;
    *(_DWORD *)&v10->awcrun[v27].wcLow = 14741536;
    v10->awcrun[v27].phg = (HGLYPH *)v23;
    memset(v23, 0, 0x380uLL);
    v28 = 0;
    v29 = (unsigned __int16 *)(v2 + 18);
    v30 = v4;
    do
    {
      for ( i = 0; i < *v29; ++i )
      {
        v32 = v41[v28];
        if ( v32 >= 0x20u )
          *(_DWORD *)&v23[4 * v32 - 128] = *(_DWORD *)(*(_QWORD *)(v29 + 3) + 4LL * i);
        ++v28;
      }
      v29 += 8;
      --v30;
    }
    while ( v30 );
    v33 = v23 + 896;
    if ( v22 < (unsigned int)v4 )
    {
      v34 = (unsigned __int16 *)(v27 * 16 + v2 + 18);
      v35 = (__int64)&v10[1].cjThis + 16 * v22 + 2;
      v36 = (unsigned int)v4 - v22;
      do
      {
        *(_WORD *)(v35 - 2) = *(v34 - 1);
        *(_WORD *)v35 = *v34;
        *(_QWORD *)(v35 + 6) = v33;
        memmove(v33, *(const void **)(v34 + 3), 4LL * *v34);
        v37 = *v34;
        v35 += 16LL;
        v34 += 8;
        v33 += 4 * v37;
        --v36;
      }
      while ( v36 );
    }
    v3 = 1;
    *v40 = v10;
  }
  return v3;
}
