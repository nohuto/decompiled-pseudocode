/*
 * XREFs of ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180180B10
 * Callers:
 *     ?CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800C1B70 (-CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18009F55C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x180180A04 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CBitmapColorKey::CopyPixels(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  const struct WICRect *v7; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+38h] [rbp-50h] BYREF

  v7 = a2;
  v17 = 0LL;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 2) + 56LL))(
           *((_QWORD *)this + 2),
           &v16,
           (char *)&v16 + 4);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x266u);
      return v10;
    }
    v7 = (const struct WICRect *)&v17;
    *((_QWORD *)&v17 + 1) = v16;
  }
  v11 = HrCheckBufferSize(*((_DWORD *)this + 6), a3, v7, a4);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x271u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 2) + 72LL))(
            *((_QWORD *)this + 2),
            v7,
            a3,
            a4,
            a5);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x279u);
    }
    else
    {
      v14 = CBitmapColorKey::ApplyColorKeyToBuffer((CBitmapColorKey *)((char *)this - 16), v7, a3, v13, a5);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x281u);
    }
  }
  return v10;
}
