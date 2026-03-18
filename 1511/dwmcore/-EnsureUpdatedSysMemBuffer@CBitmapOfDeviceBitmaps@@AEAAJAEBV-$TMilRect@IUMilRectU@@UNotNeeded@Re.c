/*
 * XREFs of ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180148B58
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801492B0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18001D0F0 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18008AB4C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A342C (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x180148B10 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18014E0EC (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer(__int64 a1, __m128i *a2)
{
  unsigned int v2; // esi
  struct IBitmapSource *v3; // r14
  __m128i *v4; // rbx
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rdi
  unsigned __int32 v9; // ebx
  unsigned __int32 v10; // r10d
  unsigned __int32 v11; // r11d
  unsigned int v12; // eax
  bool v13; // cc
  bool v14; // cf
  bool DoesContain; // al
  unsigned __int32 v16; // r10d
  unsigned __int32 v17; // r11d
  unsigned __int32 v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  unsigned int v30; // [rsp+20h] [rbp-59h]
  char v31; // [rsp+40h] [rbp-39h]
  __m128i v32; // [rsp+48h] [rbp-31h] BYREF
  __m128i *v33; // [rsp+58h] [rbp-21h]
  unsigned __int32 v34; // [rsp+60h] [rbp-19h]
  unsigned int v35; // [rsp+64h] [rbp-15h]
  struct IBitmapSource *v36; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-9h]
  __int64 v38; // [rsp+78h] [rbp-1h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v33 = a2;
  v38 = 0LL;
  v3 = 0LL;
  v36 = 0LL;
  v4 = a2;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v6 = 0;
  v37 = *(_DWORD *)(a1 + 320);
  if ( v37 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = v7 + *(_QWORD *)(a1 + 296);
      if ( *(_BYTE *)(v8 + 88) )
        break;
LABEL_40:
      ++v6;
      v7 += 96LL;
      if ( v6 >= v37 )
        goto LABEL_48;
    }
    v32 = *v4;
    v9 = v32.m128i_u32[1];
    v10 = v32.m128i_u32[2];
    v11 = v32.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v32);
    if ( *(_DWORD *)(v8 + 24) > v12 )
      v12 = *(_DWORD *)(v8 + 24);
    v13 = *(_DWORD *)(v8 + 28) <= v32.m128i_i32[1];
    v35 = v12;
    if ( !v13 )
      v9 = *(_DWORD *)(v8 + 28);
    v14 = *(_DWORD *)(v8 + 32) < v32.m128i_i32[2];
    v32.m128i_i32[0] = v12;
    if ( v14 )
      v10 = *(_DWORD *)(v8 + 32);
    v14 = *(_DWORD *)(v8 + 36) < v32.m128i_i32[3];
    v32.m128i_i32[1] = v9;
    if ( v14 )
      v11 = *(_DWORD *)(v8 + 36);
    v34 = v10;
    v32.m128i_i64[1] = __PAIR64__(v11, v10);
    if ( v10 > v12 && v11 > v9 )
    {
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v8 + 56, (__int64)&v32);
      v18 = v35;
      if ( DoesContain )
      {
        v31 = 0;
        if ( *(_DWORD *)(v8 + 72) > v35 )
          v18 = *(_DWORD *)(v8 + 72);
        v13 = *(_DWORD *)(v8 + 76) <= v9;
        v32.m128i_i32[0] = v18;
        if ( !v13 )
          v9 = *(_DWORD *)(v8 + 76);
        v14 = *(_DWORD *)(v8 + 80) < v16;
        v32.m128i_i32[1] = v9;
        if ( v14 )
          v16 = *(_DWORD *)(v8 + 80);
        v14 = *(_DWORD *)(v8 + 84) < v17;
        v34 = v16;
        if ( v14 )
          v17 = *(_DWORD *)(v8 + 84);
        v32.m128i_i64[1] = __PAIR64__(v17, v16);
        if ( v16 <= v18 || v17 <= v9 )
          goto LABEL_39;
      }
      else
      {
        v31 = 1;
      }
      v19 = v9 * *(_DWORD *)(a1 + 284) + v18 * *(_DWORD *)(a1 + 288);
      v20 = HrCreateBitmapFromMemoryEx(
              v34 - v18,
              v17 - v9,
              (const struct PixelFormatInfo *)(a1 + 200),
              *(_DWORD *)(a1 + 284),
              *(_DWORD *)(a1 + 280) - (int)v19,
              (unsigned __int8 *)(v19 + *(_QWORD *)(a1 + 272)),
              0LL,
              &v36);
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5D6u);
        v3 = v36;
        goto LABEL_48;
      }
      v3 = v36;
      v21 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v36)(
              v36,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v38);
      v23 = 0;
      v2 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x5D9u);
        goto LABEL_48;
      }
      v24 = 0;
      if ( *(_QWORD *)(v8 + 40) )
      {
        v25 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(
                (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v8,
                v22,
                0LL);
        v2 = v25;
        if ( v25 < 0 )
        {
          v30 = 1509;
LABEL_43:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v30);
          goto LABEL_48;
        }
        v26 = *(_QWORD *)(v8 + 48);
        v23 = *(_DWORD *)(v26 + 8);
        v24 = v26 + 32;
      }
      v25 = CHwDeviceBitmapColorSource::CopyPixelsToBitmap(*(_QWORD *)(v8 + 16), (unsigned int)&v32, v23, v24, v38);
      v2 = v25;
      if ( v25 < 0 )
      {
        v30 = 1522;
        goto LABEL_43;
      }
      if ( v31 )
        goto LABEL_36;
      v28 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
              (_DWORD *)(v8 + 72),
              &v32,
              v27,
              &v39,
              1u);
      if ( v28 == 1 )
      {
        *(_OWORD *)(v8 + 72) = v39;
        goto LABEL_39;
      }
      if ( v28 )
LABEL_36:
        *(__m128i *)(v8 + 56) = v32;
      *(_DWORD *)(v8 + 84) = 0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 76) = 0;
      *(_DWORD *)(v8 + 72) = 0;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v32, v8 + 24) )
        *(_BYTE *)(v8 + 88) = 0;
    }
LABEL_39:
    v4 = v33;
    goto LABEL_40;
  }
LABEL_48:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
