/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180010A00 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180010BF0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18017B560 (-CopyPixels@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@.c)
 *     ?LockForRead@CHwTextureRenderTarget@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18017BBE0 (-LockForRead@CHwTextureRenderTarget@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x180016F04 (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180184D28 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(__int64 a1, __int64 *a2, unsigned int a3, int *a4, __int64 *a5)
{
  __int64 v5; // rax
  void (__fastcall *v8)(__int64 *, int *); // rax
  struct IBitmapSource *v10; // rdi
  struct IBitmapSource *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  bool v24; // al
  struct IBitmapSource *v25; // r14
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v30; // eax
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v34; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-90h] BYREF
  struct IBitmapSource *v36; // [rsp+78h] [rbp-88h] BYREF
  int v37; // [rsp+80h] [rbp-80h] BYREF
  __int64 v38; // [rsp+84h] [rbp-7Ch]
  __int64 v39; // [rsp+8Ch] [rbp-74h]
  int v40; // [rsp+94h] [rbp-6Ch]
  int v41; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+9Ch] [rbp-64h]
  __int64 v43; // [rsp+A4h] [rbp-5Ch]
  int v44; // [rsp+ACh] [rbp-54h]
  __int64 v45; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int8 *v46; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+C0h] [rbp-40h]
  __int128 v48; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-28h] BYREF
  int v50; // [rsp+E0h] [rbp-20h]
  int v51; // [rsp+E4h] [rbp-1Ch]
  _DWORD v52[6]; // [rsp+E8h] [rbp-18h] BYREF
  int v53; // [rsp+100h] [rbp+0h] BYREF
  int v54; // [rsp+104h] [rbp+4h]
  int v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+11Ch] [rbp+1Ch]
  __int64 v57; // [rsp+124h] [rbp+24h]
  __int128 v58; // [rsp+130h] [rbp+30h]

  *(_QWORD *)&v48 = "DWM Temp Readback (bitmap1)";
  v5 = *a2;
  DWORD2(v48) = 27;
  v31 = a3;
  v8 = *(void (__fastcall **)(__int64 *, int *))(v5 + 80);
  v33 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v58 = v48;
  v8(a2, &v53);
  v12 = *(_QWORD *)(a1 + 568);
  v53 = a4[2] - *a4;
  v54 = a4[3] - a4[1];
  v56 = 3LL;
  v57 = 0x20000LL;
  v13 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v12 + 40LL))(v12, &v53, 0LL, &v33);
  v14 = v13;
  if ( v13 < 0 )
  {
    if ( IsOOM(v13) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xDB9u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v33 + 40LL))(
      v33,
      &WKPDID_D3DDebugObjectName,
      DWORD2(v58),
      v58);
    v15 = *a4;
    v16 = *(_QWORD *)(a1 + 576);
    v52[2] = 0;
    v52[0] = v15;
    v52[1] = a4[1];
    v52[3] = a4[2];
    v52[4] = a4[3];
    v52[5] = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, __int64 *, unsigned int, _DWORD *))(*(_QWORD *)v16 + 368LL))(
      v16,
      v33,
      0LL,
      0LL,
      0,
      0,
      a2,
      v31,
      v52);
    v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 576)
                                                                                                  + 112LL))(
            *(_QWORD *)(a1 + 576),
            v33,
            0LL,
            1LL,
            0,
            &v46);
    v14 = v17;
    if ( v17 >= 0 )
    {
      v41 = v55;
      v49 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0;
      v50 = v53;
      v51 = v54;
      v38 = 0LL;
      v39 = 0LL;
      v40 = 0;
      DWORD2(v48) = a4[2] - *a4;
      HIDWORD(v48) = a4[3] - a4[1];
      v18 = *a5;
      v37 = 0;
      *(_QWORD *)&v48 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64 *))(v18 + 24))(a5, &v49, 2LL, &v32);
      v14 = v19;
      if ( v19 < 0 )
      {
        if ( IsOOM(v19) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xDF1u);
        goto LABEL_11;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 24LL))(v32, &v37);
      v14 = v20;
      if ( v20 < 0 )
      {
        if ( IsOOM(v20) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xDF6u);
        goto LABEL_11;
      }
      LODWORD(v38) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32);
      v22 = a4[3] - a4[1];
      HIDWORD(v38) = v21;
      v42 = __PAIR64__(v21, v38);
      v23 = HrCreateBitmapFromMemoryEx(
              a4[2] - *a4,
              v22,
              (const struct PixelFormatInfo *)&v41,
              v47,
              v47 * v22,
              v46,
              0LL,
              &v34);
      v14 = v23;
      if ( v23 < 0 )
      {
        if ( IsOOM(v23) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xE0Eu);
        v10 = v34;
        goto LABEL_11;
      }
      v24 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v41, (const struct PixelFormatInfo *)&v37);
      v10 = v34;
      if ( v24 )
      {
        v25 = v34;
      }
      else
      {
        v30 = CFormatConverter::HrConvertBitmap(v34, (const struct PixelFormatInfo *)&v37, &v36);
        v14 = v30;
        if ( v30 < 0 )
        {
          if ( IsOOM(v30) && IsCompBuild() )
            NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
          MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xE1Cu);
          v11 = v36;
          goto LABEL_11;
        }
        v11 = v36;
        v25 = v36;
      }
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)v32 + 72LL))(v32, &v31, &v45);
      v14 = v26;
      if ( v26 < 0 )
      {
        if ( IsOOM(v26) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xE21u);
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 64LL))(v32, &v35);
        v14 = v27;
        if ( v27 < 0 )
        {
          if ( IsOOM(v27) && IsCompBuild() )
            NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
          MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xE22u);
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int128 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v25 + 72LL))(
                  v25,
                  &v48,
                  v35,
                  v31,
                  v45);
          v14 = v28;
          if ( v28 < 0 )
          {
            if ( IsOOM(v28) && IsCompBuild() )
              NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
            MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xE35u);
          }
        }
      }
LABEL_11:
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 576) + 120LL))(
        *(_QWORD *)(a1 + 576),
        v33,
        0LL);
      if ( v11 )
        (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v10 )
        (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v10 + 16LL))(v10);
      goto LABEL_15;
    }
    if ( IsOOM(v17) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v14, 0xDD3u);
  }
LABEL_15:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v33 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError(a1, v14, 0LL);
}
