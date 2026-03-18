/*
 * XREFs of ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x180036510
 * Callers:
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18003B164 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplaySet::IsStereoEnabled(CDisplaySet *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 48LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 48LL)) != 0;
}
