/*
 * XREFs of ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801506E0
 * Callers:
 *     ?CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BE3C0 (-CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A3050 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1801505C8 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CBitmapColorKey::CopyPixels(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  const struct WICRect *v7; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-54h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF

  v7 = a2;
  v18 = 0LL;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           &v17,
           &v16);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x266u);
      return v10;
    }
    v7 = (const struct WICRect *)&v18;
    *((_QWORD *)&v18 + 1) = __PAIR64__(v16, v17);
  }
  v11 = HrCheckBufferSize(*((_DWORD *)this + 6), a3, v7, a4);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 2) + 72LL))(
            *((_QWORD *)this + 2),
            v7,
            a3,
            a4,
            a5);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v14 = CBitmapColorKey::ApplyColorKeyToBuffer((CBitmapColorKey *)((char *)this - 16), v7, a3, v13, a5);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x281u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x279u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x271u);
  }
  return v10;
}
