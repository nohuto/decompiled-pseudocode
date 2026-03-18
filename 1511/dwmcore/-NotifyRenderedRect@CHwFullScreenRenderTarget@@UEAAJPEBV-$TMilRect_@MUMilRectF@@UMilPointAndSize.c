/*
 * XREFs of ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800740C0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AddToCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@IEAAJPEAUHRGN__@@@Z @ 0x1800818CC (-AddToCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@IEAAJPEAUHRGN__@@@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180081958 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::NotifyRenderedRect(__int64 a1, __int64 a2)
{
  CHwDisplayRenderTarget *v2; // rbp
  signed int v4; // ebx
  HRGN v5; // rsi
  int v6; // eax
  int v7; // eax
  int v9; // eax
  signed int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // r8d
  signed int LastError; // eax
  int v15; // r9d
  signed int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-38h]
  RECT rect; // [rsp+30h] [rbp-28h] BYREF

  v2 = (CHwDisplayRenderTarget *)(a1 - 176);
  v4 = 0;
  if ( (unsigned __int8)CHwDisplayRenderTarget::RectToSurfaceRect(a1 - 176, a2, &rect) )
  {
    SetLastError(0);
    v5 = CreateRectRgnIndirect(&rect);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 160) )
      {
        SetLastError(0);
        v6 = CombineRgn(*(HRGN *)(a1 + 160), *(HRGN *)(a1 + 160), v5, 4);
        if ( !v6 )
        {
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          v17 = 307;
          goto LABEL_24;
        }
        if ( v6 == 1 )
        {
          DeleteObject(*(HGDIOBJ *)(a1 + 160));
          *(_QWORD *)(a1 + 160) = 0LL;
        }
      }
      if ( !*(_BYTE *)(a1 + 153) || !*(_QWORD *)(a1 + 168) )
      {
LABEL_9:
        v7 = CHwDisplayRenderTarget::AddToCurrentFrameInvalidRegion(v2, v5);
        v4 = v7;
        if ( v7 >= 0 )
        {
LABEL_10:
          DeleteObject(v5);
          return (unsigned int)v4;
        }
        v17 = 354;
        v15 = v7;
LABEL_30:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v17);
        goto LABEL_10;
      }
      SetLastError(0);
      v9 = CombineRgn(*(HRGN *)(a1 + 168), *(HRGN *)(a1 + 168), v5, 4);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          DeleteObject(*(HGDIOBJ *)(a1 + 168));
          *(_QWORD *)(a1 + 168) = 0LL;
        }
        goto LABEL_9;
      }
      v16 = GetLastError();
      v4 = v16;
      if ( v16 > 0 )
        v4 = (unsigned __int16)v16 | 0x80070000;
      v17 = 335;
LABEL_24:
      if ( v4 >= 0 )
        v4 = -2003304445;
      v15 = v4;
      goto LABEL_30;
    }
    v10 = GetLastError();
    v4 = v10;
    if ( v10 > 0 )
      v4 = (unsigned __int16)v10 | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x125u);
  }
  return (unsigned int)v4;
}
