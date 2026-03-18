/*
 * XREFs of ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800313A0
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180027364 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800A2070 (-GetPixelFormat@CBitmapLock@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800A20F0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800A2190 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z @ 0x180151CC8 (-HrInit@CSystemMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@_N@Z.c)
 *     ?UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z @ 0x180152144 (-UnsafeUpdateFromSource@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@AEBUMilRectU@@II@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::PrepareToPushSourceBitsToVidMem(
        __int64 a1,
        struct IBitmapSource *a2,
        unsigned int a3,
        unsigned int *a4,
        CBitmapLock **a5)
{
  unsigned int *v6; // r12
  CSystemMemoryBitmap *v9; // rsi
  int v10; // eax
  int (__fastcall **v11)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rdi
  int DataPointer; // eax
  __int64 (__fastcall *v16)(CBitmapLock *__hidden, unsigned int *); // rdi
  int Stride; // eax
  __int64 (__fastcall *v18)(CBitmapLock *__hidden, enum DXGI_FORMAT *); // rdi
  int PixelFormat; // eax
  CBitmapLock *v20; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rdi
  CSystemMemoryBitmap *v25; // rax
  unsigned int v26; // ebx
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-71h]
  CBitmapLock *v29; // [rsp+30h] [rbp-61h] BYREF
  enum DXGI_FORMAT v30; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v34; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-41h] BYREF
  int v36; // [rsp+54h] [rbp-3Dh] BYREF
  int v37; // [rsp+58h] [rbp-39h] BYREF
  int v38; // [rsp+60h] [rbp-31h] BYREF
  __int64 v39; // [rsp+64h] [rbp-2Dh]
  __int64 v40; // [rsp+6Ch] [rbp-25h]
  int v41; // [rsp+74h] [rbp-1Dh]
  unsigned __int8 *v42; // [rsp+78h] [rbp-19h] BYREF
  unsigned int *v43; // [rsp+80h] [rbp-11h]
  CBitmapLock **v44; // [rsp+88h] [rbp-9h]
  __int64 v45; // [rsp+90h] [rbp-1h] BYREF
  int v46; // [rsp+98h] [rbp+7h]
  int v47; // [rsp+9Ch] [rbp+Bh]

  v43 = a4;
  v44 = a5;
  v6 = a4;
  v34 = 0LL;
  v46 = *(_DWORD *)(a1 + 144);
  v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 148);
  *a5 = 0LL;
  v47 = v10;
  v11 = *(int (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))a2;
  v29 = 0LL;
  v45 = 0LL;
  if ( (*v11)(a2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v34) < 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v33,
            &v32);
    v13 = v12;
    if ( v12 < 0 )
    {
      v28 = 3417;
      goto LABEL_47;
    }
    v22 = *(_QWORD *)(a1 + 272);
    if ( !v22
      || ((*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(v22 + 256) + 24LL))(v22 + 256, &v36, &v37),
          v33 != v36)
      || v32 != v37 )
    {
      v38 = 0;
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0;
      v12 = (*(__int64 (__fastcall **)(struct IBitmapSource *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v38);
      v13 = v12;
      if ( v12 < 0 )
      {
        v28 = 3437;
        goto LABEL_47;
      }
      LODWORD(v39) = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
      v23 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
      v24 = *(_QWORD *)(a1 + 272);
      HIDWORD(v39) = v23;
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        *(_QWORD *)(a1 + 272) = 0LL;
      }
      v25 = (CSystemMemoryBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 8LL))(
                                     WPF::g_pProcessHeap,
                                     280LL);
      if ( v25 )
        v9 = CSystemMemoryBitmap::CSystemMemoryBitmap(v25);
      if ( !v9 )
      {
        v13 = -2147024882;
        v28 = 3447;
LABEL_52:
        v27 = v13;
        goto LABEL_53;
      }
      (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 8LL))(v9);
      v12 = CSystemMemoryBitmap::HrInit(v9, v33, v32, (const struct PixelFormatInfo *)&v38, 0);
      v13 = v12;
      if ( v12 < 0 )
      {
        v28 = 3452;
        goto LABEL_47;
      }
      *(_QWORD *)(a1 + 272) = v9;
      v9 = 0LL;
    }
    v26 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        v12 = CSystemMemoryBitmap::UnsafeUpdateFromSource(
                *(CSystemMemoryBitmap **)(a1 + 272),
                a2,
                (const struct MilRectU *)&v43[4 * v26],
                *v6,
                v6[1]);
        v13 = v12;
        if ( v12 < 0 )
          break;
        ++v26;
        v6 += 4;
        if ( v26 >= a3 )
          goto LABEL_43;
      }
      v28 = 3470;
      goto LABEL_47;
    }
LABEL_43:
    v12 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 272))(
            *(_QWORD *)(a1 + 272),
            &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
            &v34);
    v13 = v12;
    if ( v12 < 0 )
    {
      v28 = 3474;
      goto LABEL_47;
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, CBitmapLock **))(*(_QWORD *)v34 + 24LL))(
          v34,
          &v45,
          1LL,
          &v29);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 72LL);
    if ( v14 == CBitmapLock::GetDataPointer )
      DataPointer = CBitmapLock::GetDataPointer(v29, &v35, &v42);
    else
      DataPointer = v14(v29, &v35, &v42);
    v13 = DataPointer;
    if ( DataPointer < 0 )
    {
      v28 = 3491;
    }
    else
    {
      v16 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v29 + 64LL);
      if ( v16 == CBitmapLock::GetStride )
        Stride = CBitmapLock::GetStride(v29, &v31);
      else
        Stride = v16(v29, &v31);
      v13 = Stride;
      if ( Stride < 0 )
      {
        v28 = 3494;
      }
      else
      {
        v18 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v29 + 24LL);
        if ( v18 == CBitmapLock::GetPixelFormat )
          PixelFormat = CBitmapLock::GetPixelFormat(v29, &v30);
        else
          PixelFormat = v18(v29, &v30);
        v13 = PixelFormat;
        if ( PixelFormat < 0 )
        {
          v28 = 3497;
        }
        else
        {
          if ( !(v31 % (GetPixelFormatSize(v30) >> 3)) )
          {
            v20 = v29;
            v29 = 0LL;
            *v44 = v20;
            goto LABEL_14;
          }
          v13 = -2003292288;
          v28 = 3518;
        }
      }
    }
    goto LABEL_52;
  }
  v28 = 3484;
LABEL_47:
  v27 = v12;
LABEL_53:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v28);
LABEL_14:
  if ( v29 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v9 )
    (*(void (__fastcall **)(CSystemMemoryBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return v13;
}
