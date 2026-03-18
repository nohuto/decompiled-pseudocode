/*
 * XREFs of ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x1800B0D10
 * Callers:
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18005AC78 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CBoundsBitmap::Create(struct CImageSource *a1, struct CBoundsBitmap **a2)
{
  char *v2; // rdi
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rax
  struct CBoundsBitmap *v7; // rcx
  float v8; // xmm0_4
  double v9; // xmm0_8
  __m128d v10; // xmm1
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-58h]
  float v14; // [rsp+30h] [rbp-48h]
  float v15; // [rsp+34h] [rbp-44h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-38h] BYREF
  float v18[4]; // [rsp+48h] [rbp-30h] BYREF

  *a2 = 0LL;
  v2 = (char *)a1 + 8;
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, float *))(*((_QWORD *)a1 + 1) + 112LL))(
         (char *)a1 + 8,
         0LL,
         0LL,
         v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 35;
LABEL_11:
    v12 = v4;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v13);
    return v5;
  }
  v4 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _BYTE *))(*(_QWORD *)v2 + 120LL))(v2, &v16, v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 36;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         48LL);
  v7 = (struct CBoundsBitmap *)v6;
  if ( v6 )
  {
    v8 = (float)(v18[3] - v18[1]) + 6291456.25;
    v15 = v8;
    v9 = (float)(v18[2] - v18[0]);
    v10 = (__m128d)v16;
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = &CBoundsBitmap::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v6 + 16) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
    *(__m128d *)(v6 + 32) = _mm_unpacklo_pd(v10, v10);
    v14 = v9 + 6291456.25;
    *(_DWORD *)(v6 + 24) = (int)(LODWORD(v14) << 10) >> 11;
    *(_DWORD *)(v6 + 28) = (int)(LODWORD(v15) << 10) >> 11;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7;
  if ( !v7 )
  {
    v5 = -2147024882;
    v13 = 42;
    v12 = -2147024882;
    goto LABEL_13;
  }
  CBitmapOfDeviceBitmaps::AddRef(v7);
  return v5;
}
