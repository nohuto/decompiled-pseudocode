/*
 * XREFs of GreExcludeClipRect @ 0x1400406B0
 * Callers:
 *     NtGdiExcludeClipRect @ 0x140040690 (NtGdiExcludeClipRect.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreExcludeClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  LONG bottom; // edx
  DC *v11; // rbx
  int v12; // eax
  int v13; // eax
  ULONG v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // r15d
  __int64 v19; // [rsp+20h] [rbp-81h] BYREF
  __int64 v20; // [rsp+28h] [rbp-79h] BYREF
  bool v21; // [rsp+30h] [rbp-71h]
  DC *v22[14]; // [rsp+40h] [rbp-61h] BYREF
  struct _RECTL v23; // [rsp+B0h] [rbp+Fh] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v22, a1);
  v8 = 0;
  if ( !v22[0] )
  {
    v15 = 6;
LABEL_16:
    EngSetLastError(v15);
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 208LL);
  DC::QuickInitXform(v22[0], &v19, 2147484164LL);
  bottom = a5;
  v20 = v19;
  v21 = v9 != 2;
  v23.left = left;
  v23.top = top;
  v23.right = right;
  v23.bottom = a5;
  if ( (*(_BYTE *)(v19 + 32) & 1) != 0 )
  {
    v11 = v22[0];
    if ( (*(_BYTE *)(v19 + 32) & 0x43) == 0x43
      || (v12 = bCvtPts1(v19, &v23), bottom = v23.bottom, right = v23.right, top = v23.top, left = v23.left, v12) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v11 + 122) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v23.left = left;
        v23.right = right;
      }
    }
    if ( left > right )
    {
      v23.left = right;
      v23.right = left;
    }
    if ( top > bottom )
    {
      v23.top = bottom;
      v23.bottom = top;
    }
    v13 = DC::iCombine(v22[0], &v23, 4);
    goto LABEL_12;
  }
  v16 = left & 0xF8000000;
  if ( v16 && v16 != -134217728
    || (a5 & 0xF8000000) != 0 && (a5 & 0xF8000000) != 0xF8000000
    || (v17 = right & 0xF8000000) != 0 && v17 != -134217728
    || (v18 = top & 0xF8000000) != 0 && v18 != -134217728 )
  {
    v15 = 87;
    goto LABEL_16;
  }
  v13 = DC::iCombine(v22[0], (struct EXFORMOBJR *)&v20, &v23, 4);
LABEL_12:
  v8 = v13;
  if ( v13 > 1 )
    v8 = 3;
LABEL_14:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v22);
  return v8;
}
