/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180084A40
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BF9D0 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18002F110 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180085554 (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x18009E760 (-GetDataPointer@CBitmapLock@@UEAAJPEAIPEAPEAE@Z.c)
 *     ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18009E800 (-GetStride@CBitmapLock@@UEAAJPEAI@Z.c)
 *     ?GetSize@CBitmapLock@@UEAAJPEAI0@Z @ 0x18009E880 (-GetSize@CBitmapLock@@UEAAJPEAI0@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18009EA84 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009F55C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  CBitmap *v5; // rbx
  char *v10; // rcx
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // ebx
  CWICBitmapWrapper *v14; // rcx
  __int64 (__fastcall *v15)(CWICBitmapWrapper *, __m128i *, enum WICBitmapLockFlags, struct IBitmapLock **); // rax
  int v16; // eax
  __int64 (__fastcall *v17)(CBitmapLock *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  __int64 (__fastcall *v19)(CBitmapLock *__hidden, unsigned int *); // rax
  int Stride; // eax
  __int64 (__fastcall *v21)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **); // rax
  int DataPointer; // eax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-61h]
  unsigned int v26; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+54h] [rbp-2Dh] BYREF
  CBitmapLock *v28; // [rsp+58h] [rbp-29h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-19h] BYREF
  char *v32; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v33[2]; // [rsp+78h] [rbp-9h] BYREF
  int v34; // [rsp+80h] [rbp-1h]
  int v35; // [rsp+84h] [rbp+3h]
  struct tagRECT v36; // [rsp+88h] [rbp+7h] BYREF

  v28 = 0LL;
  v5 = (CBitmap *)((char *)this - 16);
  v29 = 0;
  v27 = 0;
  Src = 0LL;
  v26 = 0;
  if ( this == (CBitmap *)16 )
    v10 = 0LL;
  else
    v10 = (char *)this + 96;
  v11 = v10[48] == 0;
  v32 = v10;
  if ( !v11 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
  if ( !a5 )
  {
    v13 = -2147024809;
    v25 = 161;
    goto LABEL_29;
  }
  if ( !a2 )
  {
    v33[0] = 0;
    v33[1] = 0;
    if ( *((_DWORD *)this + 42) > 0x7FFFFFFFu )
    {
      v34 = -1;
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xA9u);
      goto LABEL_22;
    }
    v34 = *((_DWORD *)this + 42);
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v35 = -1;
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xAAu);
      goto LABEL_22;
    }
    v35 = *((_DWORD *)this + 43);
    a2 = (struct WICRect *)v33;
  }
  v12 = CBitmap::HrCheckPixelRect(v5, a2, &v36);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 175;
    goto LABEL_44;
  }
  v12 = HrCheckBufferSize((enum DXGI_FORMAT)*((_DWORD *)this + 46), a3, a2, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v25 = 180;
LABEL_44:
    v24 = v12;
    goto LABEL_45;
  }
  v14 = (CBitmap *)((char *)this + 8);
  v15 = *(__int64 (__fastcall **)(CWICBitmapWrapper *, __m128i *, enum WICBitmapLockFlags, struct IBitmapLock **))(*((_QWORD *)this + 1) + 24LL);
  if ( v15 == CWICBitmapWrapper::Lock )
    v16 = CWICBitmapWrapper::Lock(v14, (__m128i *)a2, WICBitmapLockRead, &v28);
  else
    v16 = v15(v14, (__m128i *)a2, WICBitmapLockRead, &v28);
  v13 = v16;
  if ( v16 < 0 )
  {
    v25 = 182;
  }
  else
  {
    v17 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v28 + 56LL);
    if ( v17 == CBitmapLock::GetSize )
      Size = CBitmapLock::GetSize(v28, &v29, &v27);
    else
      Size = v17(v28, &v29, &v27);
    v13 = Size;
    if ( Size < 0 )
    {
      v25 = 184;
    }
    else
    {
      v19 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *))(*(_QWORD *)v28 + 64LL);
      if ( v19 == CBitmapLock::GetStride )
        Stride = CBitmapLock::GetStride(v28, &v30);
      else
        Stride = v19(v28, &v30);
      v13 = Stride;
      if ( Stride < 0 )
      {
        v25 = 185;
      }
      else
      {
        v21 = *(__int64 (__fastcall **)(CBitmapLock *__hidden, unsigned int *, unsigned __int8 **))(*(_QWORD *)v28 + 72LL);
        if ( v21 == CBitmapLock::GetDataPointer )
          DataPointer = CBitmapLock::GetDataPointer(v28, &v26, &Src);
        else
          DataPointer = v21(v28, &v26, &Src);
        v13 = DataPointer;
        if ( DataPointer >= 0 )
        {
          v12 = CBitmap::CopyPixelsHelper(
                  (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                  a2->Width,
                  v27,
                  v30,
                  v26,
                  Src,
                  a3,
                  a4,
                  a5);
          v13 = v12;
          if ( v12 >= 0 )
            goto LABEL_22;
          v25 = 200;
          goto LABEL_44;
        }
        v25 = 187;
      }
    }
  }
LABEL_29:
  v24 = v13;
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v25);
LABEL_22:
  if ( v28 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v28 + 16LL))(v28);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v32);
  return v13;
}
