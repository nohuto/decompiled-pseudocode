/*
 * XREFs of GxpReadFrameBufferPixels @ 0x1406D9D7C
 * Callers:
 *     BgpGxReadRectangle @ 0x1406D9D10 (BgpGxReadRectangle.c)
 * Callees:
 *     BgpGetResolution @ 0x1400F4494 (BgpGetResolution.c)
 *     BgpGetBitsPerPixel @ 0x14011C4EC (BgpGetBitsPerPixel.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall GxpReadFrameBufferPixels(int *a1)
{
  unsigned int BitsPerPixel; // ebp
  _DWORD *Resolution; // rax
  _DWORD *v4; // r10
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // esi
  int v9; // edx
  unsigned int v10; // r15d
  unsigned int v11; // ebp
  char *v12; // r15
  char *v13; // r14
  size_t v14; // r12
  __int64 v15; // r13
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  unsigned int v19; // [rsp+2Ch] [rbp-4Ch]
  __int64 v20; // [rsp+30h] [rbp-48h]
  _DWORD v21[6]; // [rsp+38h] [rbp-40h] BYREF

  BitsPerPixel = BgpGetBitsPerPixel();
  Resolution = BgpGetResolution(v21);
  v5 = 0;
  v17 = *(_QWORD *)Resolution;
  v6 = (unsigned int)Resolution[2];
  if ( !a1 )
    return 3221225485LL;
  v7 = (unsigned int)a1[1];
  if ( !(_DWORD)v7 )
    return 3221225485LL;
  v8 = *a1;
  if ( !*a1 )
    return 3221225485LL;
  if ( a1[2] != BitsPerPixel )
    return 3221225485LL;
  if ( *v4 + (int)v7 > (unsigned int)v17 )
    return 3221225485LL;
  v9 = v4[1];
  if ( (unsigned int)(v9 + v8) > HIDWORD(v17) )
    return 3221225485LL;
  if ( (dword_1402D4BB0 & 8) != 0 )
    return 3221225659LL;
  v10 = a1[3];
  v11 = BitsPerPixel >> 3;
  if ( v8 * v11 * (unsigned int)v7 > v10 )
    return 3221225507LL;
  if ( (dword_1402D4BB0 & 2) == 0 )
    return 3221225473LL;
  if ( (_BYTE)BgInternal )
  {
    v12 = (char *)*((_QWORD *)a1 + 3);
    v13 = (char *)Src + v11 * ((_DWORD)v6 * v9 + *v4);
    v14 = v11 * (unsigned int)v7;
    v15 = v11 * (unsigned int)v6;
    do
    {
      memmove(v12, v13, v14);
      v13 += v15;
      v12 += v11 * a1[1];
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v18 = xmmword_1402D4B50;
    v20 = *((_QWORD *)a1 + 3);
    HIDWORD(v17) = v7;
    LOBYTE(v7) = 1;
    LODWORD(v17) = v8;
    v19 = v10;
    return (unsigned int)((__int64 (__fastcall *)(__int64 *, _DWORD *, __int64, __int64))Src)(&v17, v4, v7, v6);
  }
  return v5;
}
