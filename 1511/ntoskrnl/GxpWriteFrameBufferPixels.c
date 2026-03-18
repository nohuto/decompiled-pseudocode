/*
 * XREFs of GxpWriteFrameBufferPixels @ 0x14011C384
 * Callers:
 *     BgpGxDrawRectangle @ 0x14011C310 (BgpGxDrawRectangle.c)
 * Callees:
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 *     BgpGxConvertRectangle @ 0x14011CB14 (BgpGxConvertRectangle.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall GxpWriteFrameBufferPixels(__int64 a1, _DWORD *a2)
{
  unsigned int BitsPerPixel; // eax
  unsigned int v5; // r8d
  int v6; // r9d
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int16 v9; // cx
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  char *v14; // r13
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // r9d
  char *v19; // rdi
  unsigned int v20; // r14d
  __int64 v21; // r15
  size_t v22; // rsi
  __int64 result; // rax
  _BYTE *v24; // rdi
  __int64 v25; // r9
  _BYTE *v26; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-61h] BYREF
  int v28; // [rsp+30h] [rbp-59h]
  int v29; // [rsp+34h] [rbp-55h]
  __int64 v30; // [rsp+38h] [rbp-51h]
  unsigned int v31; // [rsp+40h] [rbp-49h]
  unsigned int v32; // [rsp+44h] [rbp-45h]
  _BYTE v33[80]; // [rsp+50h] [rbp-39h] BYREF

  BitsPerPixel = BgpGetBitsPerPixel();
  v5 = BitsPerPixel;
  v6 = HIDWORD(BgInternal);
  v27 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  if ( !a1 )
    return 3221225485LL;
  v7 = *(_DWORD *)(a1 + 4);
  v32 = v7;
  if ( !v7 )
    return 3221225485LL;
  v8 = *(_DWORD *)a1;
  LODWORD(v26) = v8;
  if ( !v8 || *(_DWORD *)(a1 + 8) != BitsPerPixel )
    return 3221225485LL;
  v9 = dword_1402D4BB0;
  if ( (dword_1402D4BB0 & 2) == 0 )
    return 3221225473LL;
  v10 = DWORD2(BgInternal) - *a2;
  if ( v7 > v10 )
  {
    *(_DWORD *)(a1 + 4) = v10;
    v9 = dword_1402D4BB0;
  }
  v11 = HIDWORD(v27) - a2[1];
  if ( v8 > v11 )
  {
    *(_DWORD *)a1 = v11;
    v9 = dword_1402D4BB0;
  }
  v12 = *(_DWORD *)a1;
  v13 = 0;
  if ( (_BYTE)BgInternal )
  {
    v14 = *(char **)(a1 + 24);
    v15 = v5 >> 3;
    v16 = v15 * *(_DWORD *)(a1 + 4);
    v17 = v15 * v6;
    v18 = v15 * (*a2 + a2[1] * v6);
    v31 = *(_DWORD *)a1;
    v19 = (char *)Src + v18;
    if ( v12 )
    {
      v20 = v31;
      v21 = v17;
      v22 = v16;
      do
      {
        memmove(v19, v14, v22);
        v14 += v22;
        v19 += v21;
        --v20;
      }
      while ( v20 );
      v7 = v32;
      v8 = (unsigned int)v26;
    }
    if ( qword_1402D4CE0 )
      ++*(_DWORD *)qword_1402D4CE0;
LABEL_17:
    *(_DWORD *)a1 = v8;
    result = v13;
    *(_DWORD *)(a1 + 4) = v7;
    return result;
  }
  v24 = 0LL;
  v27 = *(_QWORD *)a1;
  v26 = 0LL;
  if ( (v9 & 8) == 0 )
  {
    v29 = *(_DWORD *)(a1 + 12);
    v30 = *(_QWORD *)(a1 + 24);
    v28 = xmmword_1402D4B50;
    goto LABEL_27;
  }
  if ( (v9 & 0xC00) != 0 )
  {
    v26 = v33;
    v25 = 1LL;
  }
  else
  {
    v25 = 0LL;
  }
  result = BgpGxConvertRectangle(a1, 4LL, &v26, v25);
  if ( (int)result >= 0 )
  {
    v24 = v26;
    v29 = *((_DWORD *)v26 + 3);
    v30 = *((_QWORD *)v26 + 3);
    v28 = 1;
LABEL_27:
    v13 = ((__int64 (__fastcall *)(unsigned __int64 *, _DWORD *, _QWORD))Src)(&v27, a2, 0LL);
    if ( v24 && v24 != v33 )
      BgpGxRectangleDestroy(v24);
    goto LABEL_17;
  }
  return result;
}
