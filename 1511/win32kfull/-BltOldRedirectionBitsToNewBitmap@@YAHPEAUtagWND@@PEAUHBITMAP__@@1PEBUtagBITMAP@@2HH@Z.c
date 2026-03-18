/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009AF0C
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreExcludeClipRect @ 0x1C00178E8 (GreExcludeClipRect.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     GreConvertMemToRedirectionDC @ 0x1C009B164 (GreConvertMemToRedirectionDC.c)
 *     GreExtSelectClipRgn @ 0x1C009B3F8 (GreExtSelectClipRgn.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0293A00 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v11; // ebx
  int v12; // r15d
  unsigned int v13; // ebp
  HBRUSH v14; // rbx
  __int64 v16; // [rsp+70h] [rbp-58h]
  RECT v17; // [rsp+78h] [rbp-50h] BYREF
  __int64 v18; // [rsp+E8h] [rbp+20h]

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*((_BYTE *)a1 + 50) & 8) != 0;
  v18 = GreSelectBitmap(ghdcMem, a2);
  v16 = GreSelectBitmap(ghdcMem2, a3);
  v12 = GreConvertMemToRedirectionDC(ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a2,
    (unsigned int)-a6,
    -a7,
    a4->bmWidth - a6,
    a4->bmHeight - a7,
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a3,
    0,
    0,
    a4->bmWidth + a6,
    a4->bmHeight);
  v13 = NtGdiBitBltInternal(ghdcMem2, -a6, -a7, a4->bmWidth, a4->bmHeight, ghdcMem, 0, 0, 0x80CC0020, 0, 2);
  if ( v11 )
  {
    v14 = *(HBRUSH *)(*((_QWORD *)a1 + 19) + 128LL);
    if ( v14 )
    {
      if ( (unsigned __int64)v14 <= 0x1F )
        v14 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v14 + 3688);
      GreExcludeClipRect(ghdcMem2, -a6, -a7, a4->bmWidth - a6, a4->bmHeight - a7);
      *(_QWORD *)&v17.left = 0LL;
      v17.right = a5->bmWidth;
      v17.bottom = a5->bmHeight;
      FillRect(ghdcMem2, &v17, v14);
      GreExtSelectClipRgn(ghdcMem2);
    }
  }
  if ( v12 )
    GreConvertRedirectionToMemDC(ghdcMem2);
  GreSelectBitmap(ghdcMem, v18);
  GreSelectBitmap(ghdcMem2, v16);
  return v13;
}
