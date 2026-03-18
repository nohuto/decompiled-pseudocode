/*
 * XREFs of ?NotifyTreeDirtyRegion@CAnalogTextureTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180166490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnalogTextureTarget::NotifyTreeDirtyRegion(
        CAnalogTextureTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    (*(void (__fastcall **)(__int64, const struct CVisualTree *))(*(_QWORD *)v5 + 8LL))(v5, a2);
  *((_QWORD *)this + 20) = a3;
  if ( a3 )
    (**(void (__fastcall ***)(const struct CDirtyRegion *, const struct CVisualTree *))a3)(a3, a2);
  CResource::NotifyOnChanged((_DWORD *)this - 30, 0, 0LL);
}
