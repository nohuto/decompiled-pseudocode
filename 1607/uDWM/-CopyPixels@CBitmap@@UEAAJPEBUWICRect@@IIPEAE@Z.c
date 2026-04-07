/*
 * XREFs of ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x18009C070
 * Callers:
 *     ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180051270 (-CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x1800440B4 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009B3C4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18009C2E8 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18009C52C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
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
  bool v11; // zf
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v15; // [rsp+20h] [rbp-61h]
  unsigned int v16; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-2Dh] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  int v19; // [rsp+60h] [rbp-21h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-19h] BYREF
  char *v22; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v23[2]; // [rsp+78h] [rbp-9h] BYREF
  int v24; // [rsp+80h] [rbp-1h]
  int v25; // [rsp+84h] [rbp+3h]
  struct tagRECT v26; // [rsp+88h] [rbp+7h] BYREF

  v18 = 0LL;
  v5 = (CBitmap *)((char *)this - 16);
  v19 = 0;
  v17 = 0;
  Src = 0LL;
  v16 = 0;
  if ( this == (CBitmap *)16 )
    v10 = 0LL;
  else
    v10 = (char *)this + 96;
  v11 = v10[48] == 0;
  v22 = v10;
  if ( !v11 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 8));
  if ( !a5 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0xA1u);
    goto LABEL_29;
  }
  if ( !a2 )
  {
    v23[0] = 0;
    v23[1] = 0;
    if ( *((_DWORD *)this + 42) > 0x7FFFFFFFu )
    {
      v24 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xA9u);
      goto LABEL_29;
    }
    v24 = *((_DWORD *)this + 42);
    if ( *((_DWORD *)this + 43) > 0x7FFFFFFFu )
    {
      v25 = -1;
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xAAu);
      goto LABEL_29;
    }
    v25 = *((_DWORD *)this + 43);
    a2 = (const struct WICRect *)v23;
  }
  v13 = CBitmap::HrCheckPixelRect(v5, a2, &v26);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v13 = HrCheckBufferSize(*((_DWORD *)this + 46), a3, a2, a4);
    v12 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(char *, const struct WICRect *, __int64, __int64 *))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              a2,
              1LL,
              &v18);
      v12 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, int *, unsigned int *))(*(_QWORD *)v18 + 56LL))(v18, &v19, &v17);
        v12 = v13;
        if ( v13 >= 0 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 64LL))(v18, &v20);
          v12 = v13;
          if ( v13 >= 0 )
          {
            v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v18 + 72LL))(
                    v18,
                    &v16,
                    &Src);
            v12 = v13;
            if ( v13 >= 0 )
            {
              v13 = CBitmap::CopyPixelsHelper(
                      (enum DXGI_FORMAT)*((_DWORD *)this + 46),
                      a2->Width,
                      v17,
                      v20,
                      v16,
                      Src,
                      a3,
                      a4,
                      a5);
              v12 = v13;
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
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v22);
  return v12;
}
