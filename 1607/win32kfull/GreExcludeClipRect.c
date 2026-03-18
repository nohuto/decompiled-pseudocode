/*
 * XREFs of GreExcludeClipRect @ 0x1C00D8918
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExcludeClipRect @ 0x1C00D8910 (NtGdiExcludeClipRect.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v8; // ebx
  int v9; // eax
  ULONG v10; // ecx
  _QWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  DC *v13[6]; // [rsp+30h] [rbp-50h] BYREF
  struct _RECTL v14; // [rsp+60h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v8 = 0;
  if ( !v13[0] || *((_WORD *)v13[0] + 6) > 1u )
  {
    v10 = 6;
    goto LABEL_14;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v12, (struct XDCOBJ *)v13, 0x204u);
  v14.left = a2;
  v14.top = a3;
  v14.right = a4;
  v14.bottom = a5;
  if ( (*(_DWORD *)(v12[0] + 32LL) & 1) != 0 )
  {
    EXFORMOBJ::bXform((EXFORMOBJ *)v12, (struct _POINTL *)&v14);
    ERECTL::vOrder((ERECTL *)&v14);
    v9 = DC::iCombine(v13[0], &v14, 4);
    goto LABEL_10;
  }
  if ( (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v10 = 87;
LABEL_14:
    EngSetLastError(v10);
    goto LABEL_15;
  }
  v9 = DC::iCombine(v13[0], (struct EXFORMOBJ *)v12, &v14, 4);
LABEL_10:
  v8 = v9;
  if ( v9 > 1 )
    v8 = 3;
LABEL_15:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v8;
}
