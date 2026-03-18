/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180088740
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BCB70 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18008920C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A1D2C (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800A20F0 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x1800A2190 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x1800A2210 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800A2498 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A2C10 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A3050 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  CBitmap *v5; // rdi
  char *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  int (*v13)(CWICBitmapWrapper *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **); // r14
  int v14; // eax
  __int64 (__fastcall *v15)(CBitmapLock *__hidden, unsigned int *, unsigned int *); // r14
  int Size; // eax
  __int64 (__fastcall *v17)(CBitmapLock *__hidden, unsigned int *); // r14
  int Stride; // eax
  __int64 (__fastcall *v19)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // r14
  int DataPointer; // eax
  int v22; // r9d
  unsigned int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-71h]
  unsigned int v25; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-3Dh] BYREF
  CBitmapLock *v27; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-31h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  char *v31; // [rsp+70h] [rbp-21h] BYREF
  __int64 v32; // [rsp+78h] [rbp-19h] BYREF
  int v33; // [rsp+80h] [rbp-11h]
  int v34; // [rsp+84h] [rbp-Dh]
  struct tagRECT v35; // [rsp+88h] [rbp-9h] BYREF

  v5 = (CBitmap *)((char *)this - 16);
  v27 = 0LL;
  v29 = 0;
  v26 = 0;
  Src = 0LL;
  v25 = 0;
  if ( this == (CBitmap *)16 )
    v10 = 0LL;
  else
    v10 = (char *)this + 96;
  v31 = v10;
  if ( v10[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
  if ( !a5 )
  {
    v12 = -2147024809;
    v24 = 161;
    goto LABEL_29;
  }
  if ( !a2 )
  {
    v23 = *((_DWORD *)this + 42);
    v32 = 0LL;
    if ( v23 > 0x7FFFFFFF )
    {
      v33 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xA9u);
      goto LABEL_22;
    }
    v33 = v23;
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v34 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAAu);
      goto LABEL_22;
    }
    v34 = *((_DWORD *)this + 43);
    a2 = (const struct WICRect *)&v32;
  }
  v11 = CBitmap::HrCheckPixelRect(v5, a2, &v35);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 175;
LABEL_44:
    v22 = v11;
    goto LABEL_45;
  }
  v11 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 46), a3, a2, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v24 = 180;
    goto LABEL_44;
  }
  v13 = *(int (**)(CWICBitmapWrapper *__hidden, const struct WICRect *, enum WICBitmapLockFlags, struct IBitmapLock **))(*((_QWORD *)this + 1) + 24LL);
  if ( v13 == CWICBitmapWrapper::Lock )
    v14 = CWICBitmapWrapper::Lock((CBitmap *)((char *)this + 8), a2, WICBitmapLockRead, &v27);
  else
    v14 = ((__int64 (__fastcall *)(char *, const struct WICRect *, __int64, CBitmapLock **))v13)(
            (char *)this + 8,
            a2,
            1LL,
            &v27);
  v12 = v14;
  if ( v14 < 0 )
  {
    v24 = 182;
  }
  else
  {
    v15 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v27 + 56LL);
    if ( v15 == CBitmapLock::GetSize )
      Size = CBitmapLock::GetSize(v27, &v29, &v26);
    else
      Size = v15(v27, &v29, &v26);
    v12 = Size;
    if ( Size < 0 )
    {
      v24 = 184;
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v27 + 64LL);
      if ( v17 == CBitmapLock::GetStride )
        Stride = CBitmapLock::GetStride(v27, &v28);
      else
        Stride = v17(v27, &v28);
      v12 = Stride;
      if ( Stride < 0 )
      {
        v24 = 185;
      }
      else
      {
        v19 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v27 + 72LL);
        if ( v19 == CBitmapLock::GetDataPointer )
          DataPointer = CBitmapLock::GetDataPointer(v27, &v25, &Src);
        else
          DataPointer = v19(v27, &v25, &Src);
        v12 = DataPointer;
        if ( DataPointer >= 0 )
        {
          v11 = CBitmap::CopyPixelsHelper(
                  (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                  a2->Width,
                  v26,
                  v28,
                  v25,
                  Src,
                  a3,
                  a4,
                  a5);
          v12 = v11;
          if ( v11 >= 0 )
            goto LABEL_22;
          v24 = 200;
          goto LABEL_44;
        }
        v24 = 187;
      }
    }
  }
LABEL_29:
  v22 = v12;
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v24);
LABEL_22:
  if ( v27 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v27 + 16LL))(v27);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v31);
  return v12;
}
