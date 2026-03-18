/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18002F110
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180084A40 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180085658 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  CBitmap *v4; // r15
  void *v5; // r12
  char *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed int v19; // ecx
  int v20; // eax
  unsigned int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // r9d
  unsigned int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-89h]
  struct IUnknown *v29; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-3Dh] BYREF
  unsigned int v32; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-35h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-31h] BYREF
  __int64 v35; // [rsp+80h] [rbp-29h] BYREF
  void *v36; // [rsp+88h] [rbp-21h] BYREF
  struct IBitmapLock **v37; // [rsp+90h] [rbp-19h]
  char *v38; // [rsp+98h] [rbp-11h] BYREF
  unsigned int v39[4]; // [rsp+A0h] [rbp-9h] BYREF

  v35 = 0LL;
  v4 = (CWICBitmapWrapper *)((char *)this - 24);
  v29 = 0LL;
  v5 = 0LL;
  v37 = a4;
  if ( this == (CWICBitmapWrapper *)24 )
    v10 = 0LL;
  else
    v10 = (char *)this + 88;
  v38 = v10;
  if ( v10[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29))(*((_QWORD *)this + 29), &IID_IWICBitmap, &v35);
  if ( v35 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v35 + 64LL))(
            v35,
            a2,
            (unsigned int)a3,
            &v29);
    v12 = v11;
    if ( v11 < 0 )
    {
      v28 = 94;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v29->lpVtbl[1].QueryInterface)(
              v29,
              &v33,
              &v32);
      v12 = v11;
      if ( v11 < 0 )
      {
        v28 = 96;
      }
      else
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v29->lpVtbl[1].AddRef)(v29, &v31);
        v12 = v11;
        if ( v11 < 0 )
        {
          v28 = 97;
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v29->lpVtbl[1].Release)(
                  v29,
                  &v30,
                  &v36);
          v12 = v11;
          if ( v11 < 0 )
          {
            v28 = 98;
          }
          else
          {
            v11 = CBitmap::HrLock(
                    v4,
                    v33,
                    v32,
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v31,
                    v30,
                    v36,
                    a3,
                    a4,
                    0,
                    v29);
            v12 = v11;
            if ( v11 >= 0 )
            {
              v29 = 0LL;
              goto LABEL_12;
            }
            v28 = 114;
          }
        }
      }
    }
    v26 = v11;
    goto LABEL_45;
  }
  if ( a3 == WICBitmapLockRead )
  {
    *(_OWORD *)v39 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v14 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v14)
        || (v15 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v15) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v16 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v39 = *a2;
        v17 = v39[2];
        v39[0] = v16;
        if ( v16 < 0 )
        {
          v17 = v16 + v39[2];
          v16 = 0;
          v39[2] = v17;
          v39[0] = 0;
        }
        if ( v17 + v16 > v14 )
        {
          v17 = v14 - v16;
          v39[2] = v14 - v16;
        }
        v18 = v39[1];
        v19 = v39[3];
        if ( (v39[1] & 0x80000000) != 0 )
        {
          v19 = v39[1] + v39[3];
          v18 = 0;
          v39[3] += v39[1];
          v39[1] = 0;
        }
        if ( (int)(v19 + v18) > v15 )
        {
          v19 = v15 - v18;
          v39[3] = v15 - v18;
        }
        if ( v17 <= 0 || v19 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v27 = *((_DWORD *)this + 40);
      v39[0] = 0;
      v39[1] = 0;
      v39[2] = v27;
      v39[3] = *((_DWORD *)this + 41);
    }
    v20 = HrCalcDWordAlignedScanlineStride(*((_DWORD *)this + 40), *((enum DXGI_FORMAT *)this + 44), &v34);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC7u);
      goto LABEL_56;
    }
    v21 = v34;
    v22 = v34 * (unsigned __int64)*((unsigned int *)this + 41);
    if ( v22 > 0xFFFFFFFF )
    {
      v12 = -2147024362;
      v28 = 201;
    }
    else
    {
      v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              (unsigned int)v22);
      v5 = (void *)v23;
      if ( v23 )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 29)
                                                                                         + 56LL))(
                *((_QWORD *)this + 29),
                v39,
                v21,
                (unsigned int)v22,
                v23);
        v12 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xD1u);
        }
        else
        {
          v25 = CBitmap::HrLock(
                  (CWICBitmapWrapper *)((char *)this - 24),
                  v39[2],
                  v39[3],
                  (CWICBitmapWrapper *)((char *)this + 176),
                  v21,
                  v22,
                  v5,
                  WICBitmapLockRead,
                  v37,
                  1,
                  0LL);
          v12 = v25;
          if ( v25 >= 0 )
            goto LABEL_36;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xDBu);
        }
LABEL_56:
        if ( v5 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v5);
        goto LABEL_36;
      }
      v12 = -2147024882;
      v28 = 204;
    }
    v26 = v12;
  }
  else
  {
    v12 = -2003292412;
    v28 = 132;
    v26 = -2003292412;
  }
LABEL_45:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v28);
LABEL_36:
  if ( v29 )
    ((void (*)(void))v29->lpVtbl->Release)();
LABEL_12:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  CGuard<CMTALock>::~CGuard<CMTALock>(&v38);
  return v12;
}
