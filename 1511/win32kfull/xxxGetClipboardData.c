/*
 * XREFs of xxxGetClipboardData @ 0x1C014B3E8
 * Callers:
 *     NtUserGetClipboardData @ 0x1C014AE60 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F026C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F05A0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0670 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00DBF5C (FindClipFormat.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F026C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F05A0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0670 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01F0774 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 ClipFormat; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  int v9; // eax
  void *RenderData; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, a2, 1);
  v7 = ClipFormat;
  if ( !ClipFormat )
    return 0LL;
  if ( (unsigned __int64)(*(_QWORD *)(ClipFormat + 8) - 3LL) <= 1 )
  {
    if ( v4 == 14 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 14;
    }
    v7 = FindClipFormat((__int64)a1, v4, 1);
    if ( !v7 )
      return 0LL;
  }
  v8 = *(void **)(v7 + 8);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
    goto LABEL_15;
  }
  if ( v8 != (void *)2 )
  {
    if ( v8 != (void *)1 )
    {
      if ( !a3 )
        return v8;
      v9 = *(_DWORD *)(v7 + 16);
LABEL_10:
      *(_DWORD *)(a3 + 4) = v9;
      return v8;
    }
    RenderData = xxxGetDummyText(a1, v4, (struct tagGETCLIPBDATA *)a3);
    goto LABEL_15;
  }
  switch ( v4 )
  {
    case 2u:
      RenderData = xxxGetDummyBitmap(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_15;
    case 8u:
      RenderData = xxxGetDummyDib(a1, (struct tagGETCLIPBDATA *)a3);
LABEL_15:
      v8 = RenderData;
      break;
    case 9u:
      RenderData = xxxGetDummyPalette(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_15;
    case 0x11u:
      RenderData = xxxGetDummyDibV5(a1, (struct tagGETCLIPBDATA *)a3);
      goto LABEL_15;
  }
  v12 = FindClipFormat((__int64)a1, v4, 1);
  if ( v12 )
  {
    if ( !a3 )
      return v8;
    v9 = *(_DWORD *)(v12 + 16);
    goto LABEL_10;
  }
  return 0LL;
}
