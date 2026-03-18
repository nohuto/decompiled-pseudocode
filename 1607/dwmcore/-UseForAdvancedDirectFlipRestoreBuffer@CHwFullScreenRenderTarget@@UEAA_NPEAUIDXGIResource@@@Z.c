/*
 * XREFs of ?UseForAdvancedDirectFlipRestoreBuffer@CHwFullScreenRenderTarget@@UEAA_NPEAUIDXGIResource@@@Z @ 0x180180440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwFullScreenRenderTarget::UseForAdvancedDirectFlipRestoreBuffer(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 25);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 25) = 0LL;
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *))(*(_QWORD *)v5 + 120LL))(v5, a2);
  else
    return 0;
}
