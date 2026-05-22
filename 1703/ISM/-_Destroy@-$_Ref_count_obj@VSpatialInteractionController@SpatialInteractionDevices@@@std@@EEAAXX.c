/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSpatialInteractionController@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x18007B430
 * Callers:
 *     <none>
 * Callees:
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x1800992B8 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInteractionController>::_Destroy(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  void *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = a1 + 16;
  v2 = *(_QWORD *)(a1 + 600);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, 0LL);
  v3 = *(void **)(v1 + 560);
  if ( v3 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *(SpatialInteractionDevices::SpatialInteractionHeartbeat **)(v1 + 560),
      1);
    operator delete(v3);
    *(_QWORD *)(v1 + 560) = 0LL;
  }
  v4 = *(_QWORD *)(v1 + 592);
  if ( v4 )
  {
    *(_QWORD *)(v1 + 592) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(_QWORD *)(v1 + 584);
  if ( v5 )
  {
    *(_QWORD *)(v1 + 584) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)(v1 + 568);
  if ( v6 )
  {
    *(_QWORD *)(v1 + 568) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  WindowsDeleteString(*(HSTRING *)(v1 + 544));
  *(_QWORD *)(v1 + 544) = 0LL;
  v7 = *(_QWORD *)(v1 + 536);
  if ( v7 )
  {
    *(_QWORD *)(v1 + 536) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE((SpatialInteractionDevices::HID_HANDLE *)v1);
}
