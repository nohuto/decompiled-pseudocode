/*
 * XREFs of ?CheckDirectFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x18017FCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckDirectFlipSupport(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  *a3 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGIResource *))(**((_QWORD **)this + 5) + 96LL))(
         *((_QWORD *)this + 5),
         a2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1FFu);
  return v4;
}
