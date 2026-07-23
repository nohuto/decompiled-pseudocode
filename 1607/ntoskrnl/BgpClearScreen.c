/*
 * XREFs of BgpClearScreen @ 0x1402392C4
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 *     BgpConsoleClearScreenEx @ 0x14072A364 (BgpConsoleClearScreenEx.c)
 *     AnFwpBackgroundUpdateTimer @ 0x14072ACB4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140127A94 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140127D00 (BgpGetBitsPerPixel.c)
 *     BgpGxFillRectangle @ 0x1401282D8 (BgpGxFillRectangle.c)
 *     BgpGxInitializeRectangle @ 0x140128D7C (BgpGxInitializeRectangle.c)
 */

__int64 __fastcall BgpClearScreen(int a1)
{
  __int64 result; // rax
  unsigned int v3; // esi
  unsigned int v4; // r15d
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int BitsPerPixel; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-18h]
  unsigned __int64 v14; // [rsp+30h] [rbp-10h]
  unsigned int v15; // [rsp+68h] [rbp+28h] BYREF
  unsigned int i; // [rsp+6Ch] [rbp+2Ch]

  if ( (dword_1402F9F90 & 1) == 0 )
    return 3221225473LL;
  v3 = DWORD2(BgInternal);
  v4 = DWORD1(BgInternal);
  v14 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v6 = (unsigned int)BgpGetBitsPerPixel() >> 3;
  v7 = 8120;
  v12 = v14;
  v8 = HIDWORD(v14);
  v9 = v14;
  v13 = v5;
  if ( v6 * v3 * v4 < 0x1FB8 )
    v7 = v6 * v3 * v4;
  if ( v6 * v3 * HIDWORD(v14) > v7 )
  {
    do
    {
      v9 >>= 1;
      v8 >>= 1;
      v5 >>= 1;
    }
    while ( v6 * v8 * v9 > v7 );
    v12 = __PAIR64__(v8, v9);
    v13 = v5;
  }
  BitsPerPixel = BgpGetBitsPerPixel();
  result = BgpGxInitializeRectangle((int *)&v12, BitsPerPixel, (__int64)&unk_1403560B0, 0x2000u);
  if ( (int)result >= 0 )
  {
    BgpGxFillRectangle((__int64)&unk_1403560B0, a1);
    v11 = 0;
    for ( i = 0; v11 < v4; i = v11 )
    {
      v15 = 0;
      if ( v3 )
      {
        do
        {
          BgpGxDrawRectangle((__int64)&unk_1403560B0, (__int64)&v15);
          if ( (byte_1403560C0 & 0x10) != 0 )
            BgpGxFillRectangle((__int64)&unk_1403560B0, a1);
          v15 += v9;
        }
        while ( v15 < v3 );
        v11 = i;
      }
      v11 += v8;
    }
    dword_1402F9F90 |= 0x2000u;
    return 0LL;
  }
  return result;
}
