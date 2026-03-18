/*
 * XREFs of ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180137928
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18000F64C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x180048A2C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x1801378E0 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18013EB1C (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
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
  unsigned __int32 v10; // ecx
  unsigned __int32 v11; // r11d
  unsigned int v12; // eax
  bool v13; // cf
  bool DoesContain; // al
  unsigned __int32 v15; // r11d
  unsigned int v16; // edx
  bool v17; // zf
  unsigned __int32 v18; // eax
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
  unsigned int v32; // [rsp+44h] [rbp-35h]
  unsigned int v33; // [rsp+48h] [rbp-31h]
  __m128i v34; // [rsp+50h] [rbp-29h] BYREF
  __m128i *v35; // [rsp+60h] [rbp-19h]
  __int64 v36; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-9h]
  struct IBitmapSource *v38; // [rsp+78h] [rbp-1h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v35 = a2;
  v36 = 0LL;
  v3 = 0LL;
  v38 = 0LL;
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
    v34 = *v4;
    v9 = v34.m128i_u32[1];
    v10 = v34.m128i_u32[2];
    v11 = v34.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v34);
    if ( *(_DWORD *)(v8 + 24) > v12 )
      v12 = *(_DWORD *)(v8 + 24);
    v32 = v12;
    if ( *(_DWORD *)(v8 + 28) > v34.m128i_i32[1] )
      v9 = *(_DWORD *)(v8 + 28);
    v13 = *(_DWORD *)(v8 + 32) < v34.m128i_i32[2];
    v34.m128i_i32[0] = v12;
    if ( v13 )
      v10 = *(_DWORD *)(v8 + 32);
    v13 = *(_DWORD *)(v8 + 36) < v34.m128i_i32[3];
    v34.m128i_i32[1] = v9;
    if ( v13 )
      v11 = *(_DWORD *)(v8 + 36);
    v33 = v10;
    v34.m128i_i64[1] = __PAIR64__(v11, v10);
    if ( v10 > v12 && v11 > v9 )
    {
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                      (unsigned int *)(v8 + 56),
                      (unsigned int *)&v34);
      v16 = v33;
      v17 = !DoesContain;
      v18 = v32;
      if ( v17 )
      {
        v31 = 1;
      }
      else
      {
        v31 = 0;
        if ( *(_DWORD *)(v8 + 72) > v32 )
          v18 = *(_DWORD *)(v8 + 72);
        v32 = v18;
        if ( *(_DWORD *)(v8 + 76) > v9 )
          v9 = *(_DWORD *)(v8 + 76);
        v13 = *(_DWORD *)(v8 + 80) < v33;
        v34.m128i_i32[0] = v18;
        if ( v13 )
          v16 = *(_DWORD *)(v8 + 80);
        v13 = *(_DWORD *)(v8 + 84) < v15;
        v34.m128i_i32[1] = v9;
        if ( v13 )
          v15 = *(_DWORD *)(v8 + 84);
        v34.m128i_i64[1] = __PAIR64__(v15, v16);
        if ( v16 <= v18 || v15 <= v9 )
          goto LABEL_39;
      }
      v19 = v9 * *(_DWORD *)(a1 + 284) + v18 * *(_DWORD *)(a1 + 288);
      v20 = HrCreateBitmapFromMemoryEx(
              v16 - v32,
              v15 - v9,
              (const struct PixelFormatInfo *)(a1 + 200),
              *(_DWORD *)(a1 + 284),
              *(_DWORD *)(a1 + 280) - (int)v19,
              (unsigned __int8 *)(v19 + *(_QWORD *)(a1 + 272)),
              0LL,
              &v38);
      v2 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5D6u);
        v3 = v38;
        goto LABEL_48;
      }
      v3 = v38;
      v21 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v38)(
              v38,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v36);
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
      v25 = CHwDeviceBitmapColorSource::CopyPixelsToBitmap(*(_QWORD *)(v8 + 16), (unsigned int)&v34, v23, v24, v36);
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
              &v34,
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
        *(__m128i *)(v8 + 56) = v34;
      *(_DWORD *)(v8 + 84) = 0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 76) = 0;
      *(_DWORD *)(v8 + 72) = 0;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
             (unsigned int *)&v34,
             (unsigned int *)(v8 + 24)) )
      {
        *(_BYTE *)(v8 + 88) = 0;
      }
    }
LABEL_39:
    v4 = v35;
    goto LABEL_40;
  }
LABEL_48:
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
  return v2;
}
