/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTargetRemoteApp@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18012DAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::NotifyTreeDirtyRegion(
        CHwndRenderTargetRemoteApp *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  *((_QWORD *)this + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  CResource::NotifyOnChanged((_DWORD *)this - 30, 0, 0LL);
}
