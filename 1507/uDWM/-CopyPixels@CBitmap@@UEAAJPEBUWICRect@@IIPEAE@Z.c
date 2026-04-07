/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009DDC0
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x18004A820 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18003EE44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009D0E8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18009E060 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18009E2BC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CBitmap::CopyPixels(
        CBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  CBitmap *v5; // rbx
  char *v10; // rcx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-71h]
  __int64 v16; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-31h] BYREF
  int v20; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-29h] BYREF
  char *v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  int v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+84h] [rbp-Dh]
  struct tagRECT v26; // [rsp+88h] [rbp-9h] BYREF

  v5 = (CBitmap *)((char *)this - 16);
  v16 = 0LL;
  v20 = 0;
  v18 = 0;
  Src = 0LL;
  v17 = 0;
  if ( this == (CBitmap *)16 )
    v10 = 0LL;
  else
    v10 = (char *)this + 96;
  v22 = v10;
  if ( v10[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
  if ( !a5 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xA1u);
    goto LABEL_29;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)this + 42);
    v23 = 0LL;
    if ( v12 > 0x7FFFFFFF )
    {
      v24 = -1;
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xA9u);
      goto LABEL_29;
    }
    v24 = v12;
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v25 = -1;
      v11 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xAAu);
      goto LABEL_29;
    }
    v25 = *((_DWORD *)this + 43);
    a2 = (const struct WICRect *)&v23;
  }
  v13 = CBitmap::HrCheckPixelRect(v5, a2, &v26);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v13 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v16);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v16 + 56LL))(v16, &v20, &v18);
        v11 = v13;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16 + 64LL))(v16, &v19);
          v11 = v13;
          if ( v13 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v16 + 72LL))(
                    v16,
                    &v17,
                    &Src);
            v11 = v13;
            if ( v13 >= 0 )
            {
              v13 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v18,
                      v19,
                      v17,
                      Src,
                      a3,
                      a4,
                      a5);
              v11 = v13;
              if ( v13 >= 0 )
                goto LABEL_29;
              v15 = 200;
            }
            else
            {
              v15 = 187;
            }
          }
          else
          {
            v15 = 185;
          }
        }
        else
        {
          v15 = 184;
        }
      }
      else
      {
        v15 = 182;
      }
    }
    else
    {
      v15 = 180;
    }
  }
  else
  {
    v15 = 175;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v15);
LABEL_29:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v22);
  return v11;
}
