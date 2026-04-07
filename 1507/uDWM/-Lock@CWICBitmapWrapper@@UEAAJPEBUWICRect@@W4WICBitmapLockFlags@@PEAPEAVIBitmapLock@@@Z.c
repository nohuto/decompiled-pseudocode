/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18003F110
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003D9BC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18003E8E4 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003EE44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
  int v13; // r9d
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v23; // r8d
  unsigned int v24; // r12d
  unsigned __int64 v25; // rcx
  void *v26; // r13
  __int64 v27; // rdi
  unsigned int v28; // r15d
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-99h]
  struct IUnknown *v32; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-4Dh] BYREF
  unsigned int v35; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-45h] BYREF
  __int64 v37; // [rsp+78h] [rbp-41h] BYREF
  void *v38; // [rsp+80h] [rbp-39h] BYREF
  struct PixelFormatInfo *v39; // [rsp+88h] [rbp-31h]
  CBitmap *v40; // [rsp+90h] [rbp-29h]
  struct IBitmapLock **v41; // [rsp+98h] [rbp-21h]
  char *v42; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int v43[2]; // [rsp+A8h] [rbp-11h]
  unsigned int v44[4]; // [rsp+B0h] [rbp-9h] BYREF

  v41 = a4;
  v4 = (CWICBitmapWrapper *)((char *)this - 24);
  v37 = 0LL;
  v32 = 0LL;
  v40 = (CWICBitmapWrapper *)((char *)this - 24);
  if ( this == (CWICBitmapWrapper *)24 )
    v9 = 0LL;
  else
    v9 = (char *)this + 88;
  v42 = v9;
  if ( v9[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 8));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29))(*((_QWORD *)this + 29), &IID_IWICBitmap, &v37);
  if ( v37 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD, struct IUnknown **))(*(_QWORD *)v37 + 64LL))(
            v37,
            a2,
            (unsigned int)a3,
            &v32);
    v11 = v10;
    if ( v10 < 0 )
    {
      v31 = 94;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v32->lpVtbl[1].QueryInterface)(
              v32,
              &v34,
              &v33);
      v11 = v10;
      if ( v10 < 0 )
      {
        v31 = 96;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v32->lpVtbl[1].AddRef)(v32, &v35);
        v11 = v10;
        if ( v10 < 0 )
        {
          v31 = 97;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v32->lpVtbl[1].Release)(
                  v32,
                  &v36,
                  &v38);
          v11 = v10;
          if ( v10 < 0 )
          {
            v31 = 98;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    v4,
                    v34,
                    v33,
                    (CWICBitmapWrapper *)((char *)this + 176),
                    v35,
                    v36,
                    v38,
                    a3,
                    a4,
                    0,
                    v32);
            v11 = v10;
            if ( v10 >= 0 )
            {
              v32 = 0LL;
              goto LABEL_12;
            }
            v31 = 114;
          }
        }
      }
    }
    v13 = v10;
  }
  else
  {
    if ( a3 != WICBitmapLockRead )
    {
      v11 = -2003292412;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2003292412, 0x84u);
      goto LABEL_58;
    }
    *(_OWORD *)v44 = 0LL;
    if ( a2 )
    {
      if ( a2->m128i_i32[2] <= 0
        || a2->m128i_i32[3] <= 0
        || (v14 = *((_DWORD *)this + 40), a2->m128i_i32[0] >= v14)
        || (v15 = *((_DWORD *)this + 41), a2->m128i_i32[1] >= v15) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xBAu);
      }
      else
      {
        v16 = _mm_cvtsi128_si32(*a2);
        *(__m128i *)v44 = *a2;
        v17 = v44[2];
        v44[0] = v16;
        if ( v16 < 0 )
        {
          v17 = v16 + v44[2];
          v16 = 0;
          v44[2] = v17;
          v44[0] = 0;
        }
        if ( v17 + v16 > v14 )
        {
          v17 = v14 - v16;
          v44[2] = v14 - v16;
        }
        v18 = v44[1];
        v19 = v44[3];
        if ( (v44[1] & 0x80000000) != 0 )
        {
          v19 = v44[1] + v44[3];
          v18 = 0;
          v44[3] += v44[1];
          v44[1] = 0;
        }
        if ( (int)(v19 + v18) > v15 )
        {
          v19 = v15 - v18;
          v44[3] = v15 - v18;
        }
        if ( v17 <= 0 || v19 <= 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xB2u);
      }
    }
    else
    {
      v20 = *((_DWORD *)this + 40);
      v44[0] = 0;
      v44[1] = 0;
      v44[2] = v20;
      v44[3] = *((_DWORD *)this + 41);
    }
    v21 = *((_DWORD *)this + 44);
    v39 = (CWICBitmapWrapper *)((char *)this + 176);
    PixelFormatSize = GetPixelFormatSize(v21);
    if ( PixelFormatSize && v23 <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v24 = (((v23 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      v25 = v24 * (unsigned __int64)*((unsigned int *)this + 41);
      *(_QWORD *)v43 = v25;
      if ( v25 <= 0xFFFFFFFF )
      {
        v26 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        (unsigned int)v25);
        if ( v26 )
        {
          v27 = *((_QWORD *)this + 29);
          v28 = v43[0];
          v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD, void *))(*(_QWORD *)v27 + 56LL))(
                  v27,
                  v44,
                  v24,
                  v43[0],
                  v26);
          v11 = v29;
          if ( v29 >= 0 )
          {
            v30 = CBitmap::HrLock(v40, v44[2], v44[3], v39, v24, v28, v26, WICBitmapLockRead, v41, 1, 0LL);
            v11 = v30;
            if ( v30 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0xDBu);
            else
              v26 = 0LL;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0xD1u);
          }
          if ( v26 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v26);
        }
        else
        {
          v11 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xCCu);
        }
        goto LABEL_58;
      }
      v31 = 201;
    }
    else
    {
      v31 = 199;
    }
    v13 = -2147024362;
    v11 = -2147024362;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v31);
LABEL_58:
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
LABEL_12:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v42);
  return v11;
}
