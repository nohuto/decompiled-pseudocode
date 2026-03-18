/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00A04F0
 * Callers:
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C00A07A8 (GreDecBitmapExclusiveRefCnt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall ProcessAlphaBitmap(struct HLFONT__ *a1)
{
  LONG v2; // ebx
  unsigned int v3; // esi
  HDC v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r14
  HDC v7; // rcx
  unsigned int *v8; // rbx
  int DIBitsInternal; // edi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+38h] [rbp-61h]
  __int64 v17; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v18[2]; // [rsp+78h] [rbp-21h] BYREF
  LONG v19; // [rsp+7Ch] [rbp-1Dh]
  LONG v20; // [rsp+80h] [rbp-19h]
  __int16 v21; // [rsp+88h] [rbp-11h]
  __int16 v22; // [rsp+8Ah] [rbp-Fh]
  tagBITMAPINFO v23; // [rsp+98h] [rbp-1h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32, v18) || v21 != 1 || v22 != 32 )
    return 0LL;
  memset(&v23, 0, sizeof(v23));
  v2 = v19;
  v3 = v20;
  v23.bmiHeader.biSize = 40;
  v4 = *(HDC *)(gpDispInfo + 24LL);
  v23.bmiHeader.biWidth = v19;
  v23.bmiHeader.biHeight = v20;
  *(_QWORD *)&v23.bmiHeader.biPlanes = 2097153LL;
  v6 = GreCreateDIBitmapReal(v4, v5, 0LL, &v23.bmiHeader.biSize, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v17);
  if ( v6 )
  {
    memset(&v23, 0, sizeof(v23));
    v23.bmiHeader.biWidth = v2;
    v23.bmiHeader.biSize = 40;
    v7 = *(HDC *)(gpDispInfo + 24LL);
    v23.bmiHeader.biHeight = v3;
    *(_QWORD *)&v23.bmiHeader.biPlanes = 2097153LL;
    v16 = v3 * (((32 * v2 + 31) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v17;
    DIBitsInternal = GreGetDIBitsInternal(v7, (HSURF)a1, 0, v3, (unsigned __int8 *)v17, &v23, 0, v16, 0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v10 = v23.bmiHeader.biWidth * v23.bmiHeader.biHeight;
      v11 = 0;
      if ( v23.bmiHeader.biWidth * v23.bmiHeader.biHeight )
      {
        v12 = (char *)v8 + 3;
        while ( !*v12 )
        {
          ++v11;
          v12 += 4;
          if ( v11 >= v10 )
            goto LABEL_13;
        }
        DIBitsInternal = 1;
      }
LABEL_13:
      if ( DIBitsInternal && v10 )
      {
        v13 = v10;
        do
        {
          v14 = *v8++;
          *((_BYTE *)v8 - 2) = -(char)(HIBYTE(v14) * BYTE2(v14));
          *((_BYTE *)v8 - 3) = -(char)(HIBYTE(v14) * BYTE1(v14));
          *((_BYTE *)v8 - 4) = (int)(HIBYTE(v14) * (unsigned __int8)v14) / 255;
          --v13;
        }
        while ( v13 );
      }
    }
    GreDecBitmapExclusiveRefCnt(v6);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(v6);
      return 0LL;
    }
  }
  return v6;
}
