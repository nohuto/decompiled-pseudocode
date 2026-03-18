/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z @ 0x18014FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CHwFullScreenRenderTarget::UseForAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdi

  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 23));
    *((_QWORD *)this + 23) = 0LL;
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *))(*(_QWORD *)v5 + 120LL))(v5, a2);
  else
    return 0;
}
