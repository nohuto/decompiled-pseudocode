/*
 * XREFs of ?SetMultiplaneOverlayPresentInfo@CHwFullScreenRenderTarget@@UEAAJ_NW4DXGI_HDR_METADATA_TYPE@@PEBXIPEAU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1800BCE60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::SetMultiplaneOverlayPresentInfo(
        CHwFullScreenRenderTarget *this,
        char a2,
        unsigned int a3,
        const void *a4,
        unsigned int a5,
        struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a6)
{
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v12; // rdx
  int v13; // eax

  v7 = 0;
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8) )
    {
      LOBYTE(v12) = a2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const void *, unsigned int, struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *))(**((_QWORD **)this + 5) + 184LL))(
              *((_QWORD *)this + 5),
              v12,
              a3,
              a4,
              a5,
              a6);
      v7 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2E6u);
    }
  }
  return v7;
}
