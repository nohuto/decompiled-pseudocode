/*
 * XREFs of ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180149F80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddToCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@IEAAJPEAUHRGN__@@@Z @ 0x1800818CC (-AddToCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@IEAAJPEAUHRGN__@@@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x180081958 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18013EC1C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyRenderedRect(__int64 a1, float *a2)
{
  int v2; // ebx
  HRGN *v3; // rsi
  HRGN v4; // rax
  HRGN v5; // rdi
  signed int LastError; // eax
  DWORD v7; // edx
  unsigned int v8; // ecx
  DWORD v9; // r8d
  int v10; // eax
  RECT rect; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (HRGN *)(a1 - 176);
    if ( CHwDisplayRenderTarget::RectToSurfaceRect(a1 - 176, a2, (__int64)&rect) )
    {
      SetLastError(0);
      v4 = CreateRectRgnIndirect(&rect);
      v5 = v4;
      if ( v4 )
      {
        v10 = CHwDisplayRenderTarget::AddToCurrentFrameInvalidRegion(v3, v4);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3CAu);
        DeleteObject(v5);
      }
      else
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = CheckGUIHandleQuota(v8, v7, v9);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3C5u);
      }
    }
  }
  return (unsigned int)v2;
}
