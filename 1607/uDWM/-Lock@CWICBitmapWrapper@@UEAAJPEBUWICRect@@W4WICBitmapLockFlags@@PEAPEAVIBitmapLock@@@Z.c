/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180044370
 * Callers:
 *     <none>
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180043D70 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180044A10 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  CBitmap *v4; // r15
  char *v9; // rcx
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // r9d
  INT v15; // r8d
  INT v16; // r9d
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // r8d
  signed int v20; // ecx
  unsigned int v21; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v23; // r8d
  unsigned int v24; // r14d
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  void *v27; // r15
  int v28; // eax
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-79h]
  struct IUnknown *v31; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v34; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-25h] BYREF
  __int64 v36; // [rsp+78h] [rbp-21h] BYREF
  void *v37; // [rsp+80h] [rbp-19h] BYREF
  struct IBitmapLock **v38; // [rsp+88h] [rbp-11h]
  char *v39; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v40[4]; // [rsp+98h] [rbp-1h] BYREF

  v36 = 0LL;
  v4 = (CWICBitmapWrapper *)((char *)this - 24);
  v31 = 0LL;
  v38 = a4;
  if ( this == (CWICBitmapWrapper *)24 )
    v9 = 0LL;
  else
    v9 = (char *)this + 88;
  v10 = v9[48] == 0;
  v39 = v9;
  if ( !v10 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29))(*((_QWORD *)this + 29), &IID_IWICBitmap, &v36);
  if ( v36 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v36 + 64LL))(
            v36,
            a2,
            (unsigned int)a3,
            &v31);
    v12 = v11;
    if ( v11 < 0 )
    {
      v30 = 94;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v31->lpVtbl[1].QueryInterface)(
              v31,
              &v35,
              &v34);
      v12 = v11;
      if ( v11 < 0 )
      {
        v30 = 96;
      }
      else
      {
        v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v31->lpVtbl[1].AddRef)(v31, &v33);
        v12 = v11;
        if ( v11 < 0 )
        {
          v30 = 97;
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v31->lpVtbl[1].Release)(
                  v31,
                  &v32,
                  &v37);
          v12 = v11;
          if ( v11 < 0 )
          {
            v30 = 98;
          }
          else
          {
            v11 = CBitmap::HrLock(
                    v4,
                    v35,
                    v34,
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v33,
                    v32,
                    v37,
                    a3,
                    a4,
                    0,
                    v31);
            v12 = v11;
            if ( v11 >= 0 )
            {
              v31 = 0LL;
              goto LABEL_12;
            }
            v30 = 114;
          }
        }
      }
    }
    v14 = v11;
  }
  else
  {
    if ( a3 != WICBitmapLockRead )
    {
      v12 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x84u);
      goto LABEL_58;
    }
    *(_OWORD *)v40 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v15 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v15)
        || (v16 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v16) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xBAu);
      }
      else
      {
        v17 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v40 = *a2;
        v18 = v40[2];
        v40[0] = v17;
        if ( v17 < 0 )
        {
          v18 = v17 + v40[2];
          v17 = 0;
          v40[2] = v18;
          v40[0] = 0;
        }
        if ( v18 + v17 > v15 )
        {
          v18 = v15 - v17;
          v40[2] = v15 - v17;
        }
        v19 = v40[1];
        v20 = v40[3];
        if ( (v40[1] & 0x80000000) != 0 )
        {
          v20 = v40[1] + v40[3];
          v19 = 0;
          v40[3] += v40[1];
          v40[1] = 0;
        }
        if ( (int)(v20 + v19) > v16 )
        {
          v20 = v16 - v19;
          v40[3] = v16 - v19;
        }
        if ( v18 <= 0 || v20 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB2u);
      }
    }
    else
    {
      v21 = *((_DWORD *)this + 40);
      v40[0] = 0;
      v40[1] = 0;
      v40[2] = v21;
      v40[3] = *((_DWORD *)this + 41);
    }
    PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 44));
    if ( PixelFormatSize && v23 <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v24 = (((v23 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      v25 = v24 * (unsigned __int64)*((unsigned int *)this + 41);
      if ( v25 <= 0xFFFFFFFF )
      {
        v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                (unsigned int)v25);
        v27 = (void *)v26;
        if ( v26 )
        {
          v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 29)
                                                                                           + 56LL))(
                  *((_QWORD *)this + 29),
                  v40,
                  v24,
                  (unsigned int)v25,
                  v26);
          v12 = v28;
          if ( v28 >= 0 )
          {
            v29 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v40[2],
                    v40[3],
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v24,
                    v25,
                    v27,
                    WICBitmapLockRead,
                    v38,
                    1,
                    0LL);
            v12 = v29;
            if ( v29 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xDBu);
            else
              v27 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xD1u);
          }
          if ( v27 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v27);
        }
        else
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCCu);
        }
        goto LABEL_58;
      }
      v30 = 201;
    }
    else
    {
      v30 = 199;
    }
    v14 = -2147024362;
    v12 = -2147024362;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v30);
LABEL_58:
  if ( v31 )
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
LABEL_12:
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v39);
  return v12;
}
