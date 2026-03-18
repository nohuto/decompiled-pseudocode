/*
 * XREFs of ?NotifyTreeDirtyRegion@CHwndRenderTargetRemoteApp@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x1800FA650
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CHwndRenderTargetRemoteApp::NotifyTreeDirtyRegion(
        CHwndRenderTargetRemoteApp *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v3; // r14

  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CVisualTree *))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 8), a2);
  *((_QWORD *)this + 8) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  CResource::NotifyOnChanged((_DWORD *)this - 12, 0, 0LL);
}
