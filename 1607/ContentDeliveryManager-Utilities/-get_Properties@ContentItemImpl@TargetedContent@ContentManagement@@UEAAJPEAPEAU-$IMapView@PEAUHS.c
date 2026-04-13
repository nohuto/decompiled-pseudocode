/*
 * XREFs of ?get_Properties@ContentItemImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@@Z @ 0x18004A670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::ContentItemImpl::get_Properties(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = *(_QWORD *)(a1 + 56);
  return 0LL;
}
