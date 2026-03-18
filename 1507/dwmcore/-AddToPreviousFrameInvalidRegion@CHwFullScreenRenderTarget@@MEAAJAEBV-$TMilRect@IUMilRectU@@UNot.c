/*
 * XREFs of ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180043600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToPreviousFrameInvalidRegion(__int64 a1, int *a2)
{
  signed int v2; // ebx
  HRGN RectRgn; // rdi
  HRGN v7; // rax
  signed int v8; // eax
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r8d
  signed int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r8d
  signed int LastError; // eax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 336) )
  {
    SetLastError(0);
    RectRgn = CreateRectRgn(*a2, a2[1], a2[2], a2[3]);
    if ( RectRgn )
    {
      SetLastError(0);
      if ( !CombineRgn(*(HRGN *)(a1 + 336), *(HRGN *)(a1 + 336), RectRgn, 2) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3F8u);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v12 = GetLastError();
      v2 = v12;
      if ( v12 > 0 )
        v2 = (unsigned __int16)v12 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v14, v13, v15);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3F3u);
    }
  }
  else
  {
    SetLastError(0);
    v7 = CreateRectRgn(*a2, a2[1], a2[2], a2[3]);
    *(_QWORD *)(a1 + 336) = v7;
    if ( !v7 )
    {
      v8 = GetLastError();
      v2 = v8;
      if ( v8 > 0 )
        v2 = (unsigned __int16)v8 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v10, v9, v11);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3ECu);
    }
  }
  return (unsigned int)v2;
}
