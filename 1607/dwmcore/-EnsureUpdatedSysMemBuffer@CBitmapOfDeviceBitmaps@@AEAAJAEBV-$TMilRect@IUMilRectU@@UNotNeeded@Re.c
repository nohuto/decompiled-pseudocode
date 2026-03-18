/*
 * XREFs of ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017939C
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180179AC0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18002104C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x180179354 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18017EC00 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer(__int64 a1, __m128i *a2)
{
  struct IBitmapSource *v2; // rsi
  __m128i *v3; // r15
  unsigned int v5; // edi
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int32 v9; // r15d
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
  __int64 v25; // rax
  __int64 v26; // r8
  int v27; // eax
  unsigned int v29; // [rsp+20h] [rbp-59h]
  char v30; // [rsp+40h] [rbp-39h]
  unsigned int v31; // [rsp+44h] [rbp-35h]
  unsigned int v32; // [rsp+48h] [rbp-31h]
  __m128i v33; // [rsp+50h] [rbp-29h] BYREF
  __m128i *v34; // [rsp+60h] [rbp-19h]
  unsigned int v35; // [rsp+68h] [rbp-11h]
  struct IBitmapSource *v36; // [rsp+70h] [rbp-9h] BYREF
  __int64 v37; // [rsp+78h] [rbp-1h] BYREF
  __int128 v38; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v34 = a2;
  v37 = 0LL;
  v3 = a2;
  v36 = 0LL;
  v5 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v6 = 0;
  v35 = *(_DWORD *)(a1 + 320);
  if ( v35 )
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
      if ( v6 >= v35 )
        goto LABEL_47;
    }
    v33 = *v3;
    v9 = v33.m128i_u32[1];
    v10 = v33.m128i_u32[2];
    v11 = v33.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v33);
    if ( *(_DWORD *)(v8 + 24) > v12 )
      v12 = *(_DWORD *)(v8 + 24);
    v31 = v12;
    if ( *(_DWORD *)(v8 + 28) > v33.m128i_i32[1] )
      v9 = *(_DWORD *)(v8 + 28);
    v13 = *(_DWORD *)(v8 + 32) < v33.m128i_i32[2];
    v33.m128i_i32[0] = v12;
    if ( v13 )
      v10 = *(_DWORD *)(v8 + 32);
    v13 = *(_DWORD *)(v8 + 36) < v33.m128i_i32[3];
    v33.m128i_i32[1] = v9;
    if ( v13 )
      v11 = *(_DWORD *)(v8 + 36);
    v32 = v10;
    v33.m128i_i64[1] = __PAIR64__(v11, v10);
    if ( v10 > v12 && v11 > v9 )
    {
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                      (unsigned int *)(v8 + 56),
                      (unsigned int *)&v33);
      v16 = v32;
      v17 = !DoesContain;
      v18 = v31;
      if ( v17 )
      {
        v30 = 1;
      }
      else
      {
        v30 = 0;
        if ( *(_DWORD *)(v8 + 72) > v31 )
          v18 = *(_DWORD *)(v8 + 72);
        v31 = v18;
        if ( *(_DWORD *)(v8 + 76) > v9 )
          v9 = *(_DWORD *)(v8 + 76);
        v13 = *(_DWORD *)(v8 + 80) < v32;
        v33.m128i_i32[0] = v18;
        if ( v13 )
          v16 = *(_DWORD *)(v8 + 80);
        v13 = *(_DWORD *)(v8 + 84) < v15;
        v33.m128i_i32[1] = v9;
        if ( v13 )
          v15 = *(_DWORD *)(v8 + 84);
        v33.m128i_i64[1] = __PAIR64__(v15, v16);
        if ( v16 <= v18 || v15 <= v9 )
          goto LABEL_39;
      }
      v19 = v9 * *(_DWORD *)(a1 + 284) + v18 * *(_DWORD *)(a1 + 288);
      v20 = HrCreateBitmapFromMemoryEx(
              v16 - v31,
              v15 - v9,
              (const struct PixelFormatInfo *)(a1 + 200),
              *(_DWORD *)(a1 + 284),
              *(_DWORD *)(a1 + 280) - (int)v19,
              (unsigned __int8 *)(v19 + *(_QWORD *)(a1 + 272)),
              0LL,
              &v36);
      v5 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5D1u);
        v2 = v36;
        goto LABEL_47;
      }
      v2 = v36;
      v21 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v36)(
              v36,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v37);
      v23 = 0;
      v5 = v21;
      if ( v21 < 0 )
      {
        v29 = 1492;
        goto LABEL_45;
      }
      v24 = 0;
      if ( *(_QWORD *)(v8 + 40) )
      {
        v21 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(
                (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v8,
                v22,
                0LL);
        v5 = v21;
        if ( v21 < 0 )
        {
          v29 = 1504;
LABEL_45:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v29);
          goto LABEL_47;
        }
        v25 = *(_QWORD *)(v8 + 48);
        v23 = *(_DWORD *)(v25 + 8);
        v24 = v25 + 32;
      }
      v21 = CHwDeviceBitmapColorSource::CopyPixelsToBitmap(*(_QWORD *)(v8 + 16), (unsigned int)&v33, v23, v24, v37);
      v5 = v21;
      if ( v21 < 0 )
      {
        v29 = 1517;
        goto LABEL_45;
      }
      if ( v30 )
        goto LABEL_36;
      v27 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
              (_DWORD *)(v8 + 72),
              &v33,
              v26,
              &v38,
              1u);
      if ( v27 == 1 )
      {
        *(_OWORD *)(v8 + 72) = v38;
        goto LABEL_39;
      }
      if ( v27 )
LABEL_36:
        *(__m128i *)(v8 + 56) = v33;
      *(_DWORD *)(v8 + 84) = 0;
      *(_DWORD *)(v8 + 80) = 0;
      *(_DWORD *)(v8 + 76) = 0;
      *(_DWORD *)(v8 + 72) = 0;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
             (unsigned int *)&v33,
             (unsigned int *)(v8 + 24)) )
      {
        *(_BYTE *)(v8 + 88) = 0;
      }
    }
LABEL_39:
    v3 = v34;
    goto LABEL_40;
  }
LABEL_47:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v2 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v2 + 16LL))(v2);
  return v5;
}
