/*
 * XREFs of ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x1800B3D98
 * Callers:
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180033118 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBoundsBitmap::Create(struct CImageSource *a1, struct CBoundsBitmap **a2)
{
  char *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  struct CBoundsBitmap *v7; // rcx
  float v8; // xmm0_4
  double v9; // xmm0_8
  __m128d v10; // xmm1
  unsigned int v12; // [rsp+20h] [rbp-48h]
  float v13; // [rsp+30h] [rbp-38h]
  float v14; // [rsp+34h] [rbp-34h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-28h] BYREF
  float v17[4]; // [rsp+48h] [rbp-20h] BYREF

  *a2 = 0LL;
  v2 = (char *)a1 + 8;
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, float *))(*((_QWORD *)a1 + 1) + 112LL))(
         (char *)a1 + 8,
         0LL,
         0LL,
         v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v12 = 35;
    goto LABEL_12;
  }
  v4 = (*(__int64 (__fastcall **)(char *, unsigned __int64 *, _BYTE *))(*(_QWORD *)v2 + 120LL))(v2, &v15, v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    v12 = 36;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v12);
    return v5;
  }
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         48LL);
  v7 = (struct CBoundsBitmap *)v6;
  if ( v6 )
  {
    v8 = (float)(v17[3] - v17[1]) + 6291456.25;
    v14 = v8;
    v9 = (float)(v17[2] - v17[0]);
    v10 = (__m128d)v15;
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)v6 = &CBoundsBitmap::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v6 + 16) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
    *(__m128d *)(v6 + 32) = _mm_unpacklo_pd(v10, v10);
    v13 = v9 + 6291456.25;
    *(_DWORD *)(v6 + 24) = (int)(LODWORD(v13) << 10) >> 11;
    *(_DWORD *)(v6 + 28) = (int)(LODWORD(v14) << 10) >> 11;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7;
  if ( v7 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v7);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Au);
  }
  return v5;
}
