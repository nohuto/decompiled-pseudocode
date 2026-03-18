/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18006FC90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180052658 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x180062A80 (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  CBitmap *v4; // r13
  char *v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  signed int v18; // ecx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // eax
  unsigned __int64 v22; // r13
  void *v23; // r12
  __int64 v24; // rdi
  unsigned int v25; // r15d
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-99h]
  struct IUnknown *v30; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-51h] BYREF
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v34; // [rsp+7Ch] [rbp-3Dh] BYREF
  unsigned int v35; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v36; // [rsp+84h] [rbp-35h] BYREF
  void *v37; // [rsp+88h] [rbp-31h] BYREF
  CBitmap *v38; // [rsp+90h] [rbp-29h]
  struct IBitmapLock **v39; // [rsp+98h] [rbp-21h]
  char *v40; // [rsp+A0h] [rbp-19h] BYREF
  struct PixelFormatInfo *v41; // [rsp+A8h] [rbp-11h]
  unsigned int v42[4]; // [rsp+B0h] [rbp-9h] BYREF

  v39 = a4;
  v4 = (CWICBitmapWrapper *)((char *)this - 24);
  v32 = 0LL;
  v30 = 0LL;
  v38 = (CWICBitmapWrapper *)((char *)this - 24);
  if ( this == (CWICBitmapWrapper *)24 )
    v9 = 0LL;
  else
    v9 = (char *)this + 88;
  v40 = v9;
  if ( v9[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29))(*((_QWORD *)this + 29), &IID_IWICBitmap, &v32);
  if ( v32 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v32 + 64LL))(
            v32,
            a2,
            (unsigned int)a3,
            &v30);
    v11 = v10;
    if ( v10 < 0 )
    {
      v29 = 94;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v30->lpVtbl[1].QueryInterface)(
              v30,
              &v33,
              &v35);
      v11 = v10;
      if ( v10 < 0 )
      {
        v29 = 96;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v30->lpVtbl[1].AddRef)(v30, &v36);
        v11 = v10;
        if ( v10 < 0 )
        {
          v29 = 97;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v30->lpVtbl[1].Release)(
                  v30,
                  &v34,
                  &v37);
          v11 = v10;
          if ( v10 < 0 )
          {
            v29 = 98;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    v4,
                    v33,
                    v35,
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v36,
                    v34,
                    v37,
                    a3,
                    a4,
                    0,
                    v30);
            v11 = v10;
            if ( v10 >= 0 )
            {
              v30 = 0LL;
              goto LABEL_12;
            }
            v29 = 114;
          }
        }
      }
    }
    v28 = v10;
  }
  else if ( a3 == WICBitmapLockRead )
  {
    *(_OWORD *)v42 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v13 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v13)
        || (v14 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v14) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v15 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v42 = *a2;
        v16 = v42[2];
        v42[0] = v15;
        if ( v15 < 0 )
        {
          v16 = v15 + v42[2];
          v15 = 0;
          v42[0] = 0;
          v42[2] = v16;
        }
        if ( v16 + v15 > v13 )
        {
          v16 = v13 - v15;
          v42[2] = v13 - v15;
        }
        v17 = v42[1];
        v18 = v42[3];
        if ( (v42[1] & 0x80000000) != 0 )
        {
          v18 = v42[1] + v42[3];
          v42[1] = 0;
          v42[3] = v18;
          v17 = 0;
        }
        if ( (int)(v18 + v17) > v14 )
        {
          v18 = v14 - v17;
          v42[3] = v14 - v17;
        }
        if ( v16 <= 0 || v18 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v42[2] = *((_DWORD *)this + 40);
      v42[3] = *((_DWORD *)this + 41);
      *(_QWORD *)v42 = 0LL;
    }
    v19 = *((unsigned int *)this + 40);
    v20 = *((_DWORD *)this + 44);
    v41 = (CWICBitmapWrapper *)((char *)this + 176);
    v21 = HrCalcDWordAlignedScanlineStride(v19, v20, &v31);
    v11 = v21;
    if ( v21 < 0 )
    {
      v29 = 199;
      v28 = v21;
    }
    else
    {
      v22 = v31 * (unsigned __int64)*((unsigned int *)this + 41);
      if ( v22 > 0xFFFFFFFF )
      {
        v11 = -2147024362;
        v29 = 201;
      }
      else
      {
        v23 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        (unsigned int)v22);
        if ( v23 )
        {
          v24 = *((_QWORD *)this + 29);
          v25 = v31;
          v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, void *))(*(_QWORD *)v24 + 56LL))(
                  v24,
                  v42,
                  v31,
                  (unsigned int)v22,
                  v23);
          v11 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xD1u);
          }
          else
          {
            v27 = CBitmap::HrLock(v38, v42[2], v42[3], v41, v25, v22, v23, WICBitmapLockRead, v39, 1, 0LL);
            v11 = v27;
            if ( v27 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xDBu);
            else
              v23 = 0LL;
          }
          if ( v23 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v23);
          goto LABEL_39;
        }
        v11 = -2147024882;
        v29 = 204;
      }
      v28 = v11;
    }
  }
  else
  {
    v11 = -2003292412;
    v29 = 132;
    v28 = -2003292412;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v29);
LABEL_39:
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
LABEL_12:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v40);
  return v11;
}
