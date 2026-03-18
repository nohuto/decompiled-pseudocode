/*
 * XREFs of ?NotifyTreeDirtyRegion@CAnalogTextureTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18013C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogTextureTarget::NotifyTreeDirtyRegion(
        CAnalogTextureTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v3; // r14

  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CVisualTree *))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 19), a2);
  *((_QWORD *)this + 19) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  CResource::NotifyOnChanged((_DWORD *)this - 12, 0, 0LL);
}
