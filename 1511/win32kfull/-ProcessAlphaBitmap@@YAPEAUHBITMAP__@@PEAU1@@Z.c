/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C011BF70
 * Callers:
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C0042840 (GreGetDIBitsInternal.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02B8110 (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall ProcessAlphaBitmap(HBRUSH a1)
{
  unsigned int v3; // edx
  LONG v4; // ebx
  int v5; // r14d
  HDC v6; // rcx
  __int64 v7; // rdi
  unsigned int *v8; // rbx
  int DIBitsInternal; // esi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // rax
  __int64 v13; // r10
  unsigned int v14; // ecx
  unsigned int v15; // [rsp+38h] [rbp-61h]
  __int64 v16; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v17[2]; // [rsp+78h] [rbp-21h] BYREF
  LONG v18; // [rsp+7Ch] [rbp-1Dh]
  int v19; // [rsp+80h] [rbp-19h]
  __int16 v20; // [rsp+88h] [rbp-11h]
  __int16 v21; // [rsp+8Ah] [rbp-Fh]
  tagBITMAPINFO v22; // [rsp+98h] [rbp-1h] BYREF

  if ( !a1 )
    return 0LL;
  if ( !(unsigned int)GreExtGetObjectW(a1, 32LL, v17) || v20 != 1 || v21 != 32 )
    return 0LL;
  v4 = v18;
  memset(&v22, 0, sizeof(v22));
  v5 = v19;
  v6 = *(HDC *)(gpDispInfo + 24LL);
  v22.bmiHeader.biSize = 40;
  v22.bmiHeader.biWidth = v18;
  v22.bmiHeader.biHeight = v19;
  *(_QWORD *)&v22.bmiHeader.biPlanes = 2097153LL;
  v7 = GreCreateDIBitmapReal(v6, v3, 0LL, &v22.bmiHeader.biSize, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v16);
  if ( v7 )
  {
    v22.bmiHeader.biWidth = v4;
    memset(&v22.bmiHeader.biSizeImage, 0, 24);
    v22.bmiHeader.biSize = 40;
    v22.bmiHeader.biHeight = v5;
    *(_QWORD *)&v22.bmiHeader.biPlanes = 2097153LL;
    v15 = v5 * (((32 * v4 + 31) >> 3) & 0xFFFFFFFC);
    v8 = (unsigned int *)v16;
    DIBitsInternal = GreGetDIBitsInternal(
                       *(_QWORD *)(gpDispInfo + 24LL),
                       (__int64)a1,
                       0,
                       v5,
                       (unsigned __int8 *)v16,
                       &v22,
                       0,
                       v15,
                       0x28u);
    if ( DIBitsInternal )
    {
      DIBitsInternal = 0;
      v10 = v22.bmiHeader.biWidth * v22.bmiHeader.biHeight;
      v11 = 0;
      if ( v22.bmiHeader.biWidth * v22.bmiHeader.biHeight )
      {
        v12 = (char *)v8 + 3;
        while ( !*v12 )
        {
          ++v11;
          v12 += 4;
          if ( v11 >= v10 )
            goto LABEL_14;
        }
        DIBitsInternal = 1;
      }
LABEL_14:
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
    GreDecBitmapExclusiveRefCnt(v7);
    if ( !DIBitsInternal )
    {
      GreDeleteObject(v7);
      return 0LL;
    }
  }
  return v7;
}
