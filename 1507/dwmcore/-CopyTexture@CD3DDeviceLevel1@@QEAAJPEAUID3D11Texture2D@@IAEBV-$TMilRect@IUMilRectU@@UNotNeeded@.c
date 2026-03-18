/*
 * XREFs of ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x1801339B0
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18013E380 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 * Callees:
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x1800136EC (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180146848 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CopyTexture(
        __int64 a1,
        struct IUnknown *a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 *a5)
{
  struct IUnknown v7; // rax
  struct IBitmapSource *v8; // r14
  struct IBitmapSource *v9; // r15
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // esi
  DWORD CurrentThreadId; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  bool v23; // al
  struct IBitmapSource *v24; // r12
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  struct IBitmapSource *v33; // [rsp+68h] [rbp-98h] BYREF
  struct IBitmapSource *v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v35; // [rsp+78h] [rbp-88h] BYREF
  struct IUnknown *v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+8Ch] [rbp-74h]
  __int64 v39; // [rsp+94h] [rbp-6Ch]
  int v40; // [rsp+9Ch] [rbp-64h]
  unsigned __int8 *v41; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+B4h] [rbp-4Ch]
  __int64 v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C4h] [rbp-3Ch]
  __int128 v47; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-28h] BYREF
  int v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E4h] [rbp-1Ch]
  int v51; // [rsp+F0h] [rbp-10h] BYREF
  int v52; // [rsp+F4h] [rbp-Ch]
  int v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+10Ch] [rbp+Ch]
  __int64 v55; // [rsp+114h] [rbp+14h]
  __int128 v56; // [rsp+120h] [rbp+20h]

  v35 = a5;
  DWORD2(v47) = 27;
  *(_QWORD *)&v47 = "DWM Temp Readback (bitmap1)";
  v7.lpVtbl = a2->lpVtbl;
  v32 = a3;
  v8 = 0LL;
  v36 = a2;
  v9 = 0LL;
  AddRef = v7.lpVtbl[3].AddRef;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v56 = v47;
  ((void (__fastcall *)(struct IUnknown *, int *))AddRef)(a2, &v51);
  v11 = *(_QWORD *)(a1 + 544);
  v51 = a4[2] - *a4;
  v52 = a4[3] - a4[1];
  v54 = 3LL;
  v55 = 0x20000LL;
  v12 = (*(__int64 (__fastcall **)(__int64, int *, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, &v51, 0LL, &v31);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v12, 0xCA3u);
    goto LABEL_27;
  }
  (*(void (__fastcall **)(__int64, const GUID *, _QWORD, _QWORD))(*(_QWORD *)v31 + 40LL))(
    v31,
    &WKPDID_D3DDebugObjectName,
    DWORD2(v56),
    v56);
  v48 = a1;
  ++*(_DWORD *)(a1 + 512);
  CurrentThreadId = GetCurrentThreadId();
  v15 = *(_QWORD *)(a1 + 552);
  HIDWORD(v44) = 0;
  *(_DWORD *)(a1 + 516) = CurrentThreadId;
  v43 = *a4;
  LODWORD(v44) = a4[1];
  v45 = *((_QWORD *)a4 + 1);
  v46 = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, struct IUnknown *, unsigned int, int *))(*(_QWORD *)v15 + 368LL))(
    v15,
    v31,
    0LL,
    0LL,
    0,
    0,
    v36,
    v32,
    &v43);
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v48);
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(a1 + 552)
                                                                                                + 112LL))(
          *(_QWORD *)(a1 + 552),
          v31,
          0LL,
          1LL,
          0,
          &v41);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v16, 0xCCAu);
    goto LABEL_27;
  }
  v43 = v53;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0;
  v49 = v51;
  v50 = v52;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0;
  DWORD2(v47) = a4[2] - *a4;
  HIDWORD(v47) = a4[3] - a4[1];
  v17 = *v35;
  v48 = 0LL;
  v37 = 0;
  *(_QWORD *)&v47 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64 *))(v17 + 24))(v35, &v48, 2LL, &v30);
  v13 = v18;
  if ( v18 >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 24LL))(v30, &v37);
    v13 = v19;
    if ( v19 >= 0 )
    {
      LODWORD(v38) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
      v21 = a4[3] - a4[1];
      HIDWORD(v38) = v20;
      v44 = __PAIR64__(v20, v38);
      v22 = HrCreateBitmapFromMemoryEx(
              a4[2] - *a4,
              v21,
              (const struct PixelFormatInfo *)&v43,
              v42,
              v42 * v21,
              v41,
              0LL,
              &v33);
      v13 = v22;
      if ( v22 >= 0 )
      {
        v23 = IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v43, (enum DXGI_FORMAT *)&v37);
        v8 = v33;
        if ( v23 )
        {
          v24 = v33;
        }
        else
        {
          v25 = CFormatConverter::HrConvertBitmap(v33, (const struct PixelFormatInfo *)&v37, &v34);
          v13 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v25, 0xD13u);
            v9 = v34;
            goto LABEL_23;
          }
          v9 = v34;
          v24 = v34;
        }
        v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 **))(*(_QWORD *)v30 + 72LL))(v30, &v32, &v35);
        v13 = v26;
        if ( v26 >= 0 )
        {
          v27 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v30 + 64LL))(v30, &v36);
          v13 = v27;
          if ( v27 >= 0 )
          {
            v28 = (*(__int64 (__fastcall **)(struct IBitmapSource *, __int128 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v24 + 72LL))(
                    v24,
                    &v47,
                    (unsigned int)v36,
                    v32,
                    v35);
            v13 = v28;
            if ( v28 < 0 )
              MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v28, 0xD2Cu);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v27, 0xD19u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v26, 0xD18u);
        }
        goto LABEL_23;
      }
      MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v22, 0xD05u);
      v8 = v33;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v19, 0xCEDu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &dword_180175810, 0xAu, v18, 0xCE8u);
  }
LABEL_23:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 552) + 120LL))(*(_QWORD *)(a1 + 552), v31, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v8 + 16LL))(v8);
LABEL_27:
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v31 = 0LL;
  }
  return CD3DDeviceLevel1::TranslateDriverError(a1, v13, 0);
}
