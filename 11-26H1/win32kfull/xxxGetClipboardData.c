/*
 * XREFs of xxxGetClipboardData @ 0x1401F7070
 * Callers:
 *     NtUserGetClipboardData @ 0x1402B27A0 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEEEC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402CEFC8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401F71E0 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEEEC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402CEFC8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagTHREADINFO **a1, unsigned int a2, __int64 a3)
{
  struct tagCLIP *ClipFormat; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  int v10; // ecx
  void *RenderData; // rax

  if ( a1[6] != PtiCurrent((__int64)a1) )
  {
    v10 = 1418;
    goto LABEL_15;
  }
  ClipFormat = FindClipFormat((unsigned __int64)a1, a2, 1);
  if ( !ClipFormat )
  {
    v10 = 1168;
LABEL_15:
    UserSetLastError(v10);
    return 0LL;
  }
  v7 = *((_QWORD *)ClipFormat + 1);
  if ( v7 == 4 || v7 == 3 )
  {
    if ( a2 == 14 )
    {
      a2 = 3;
    }
    else if ( a2 == 3 )
    {
      a2 = 14;
    }
    ClipFormat = FindClipFormat((unsigned __int64)a1, a2, 1);
    if ( !ClipFormat )
      return 0LL;
  }
  v8 = (void *)*((_QWORD *)ClipFormat + 1);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData((struct tagWINDOWSTATION *)a1, a2);
    goto LABEL_19;
  }
  if ( v8 == (void *)2 )
  {
    switch ( a2 )
    {
      case 2u:
        RenderData = xxxGetDummyBitmap((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 8u:
        RenderData = xxxGetDummyDib((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 9u:
        RenderData = xxxGetDummyPalette((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 0x11u:
        RenderData = xxxGetDummyDibV5((struct tagWINDOWSTATION *)a1, (struct tagGETCLIPBDATA *)a3);
        break;
      default:
LABEL_20:
        ClipFormat = FindClipFormat((unsigned __int64)a1, a2, 1);
        if ( ClipFormat )
          goto LABEL_11;
        return 0LL;
    }
LABEL_19:
    v8 = RenderData;
    goto LABEL_20;
  }
  if ( v8 == (void *)1 )
  {
    RenderData = xxxGetDummyText((struct tagWINDOWSTATION *)a1, a2, (struct tagGETCLIPBDATA *)a3);
    goto LABEL_19;
  }
LABEL_11:
  if ( a3 )
    *(_DWORD *)(a3 + 4) = *((_DWORD *)ClipFormat + 4);
  return v8;
}
