/*
 * XREFs of ?OpenSpatialInteractionDevice@@YAJPEB_WPEAPEAUISpatialInteractionDevice@@@Z @ 0x1800649B0
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 *     ?SupportsHapticsContinousBuzz@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAE@Z @ 0x18009B080 (-SupportsHapticsContinousBuzz@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEAE@.c)
 * Callees:
 *     ??0SpatialInteractionDevice@@QEAA@XZ @ 0x180064228 (--0SpatialInteractionDevice@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4 (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OpenSpatialInteractionDevice(wchar_t *a1, struct ISpatialInteractionDevice **a2)
{
  SpatialInteractionDevice *v4; // rax
  int v5; // edi
  SpatialInteractionDevice *v6; // rbx
  struct SpatialInteractionDevices::HID_HANDLE **v7; // r8

  *a2 = 0LL;
  v4 = (SpatialInteractionDevice *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = SpatialInteractionDevice::SpatialInteractionDevice(v4);
    v5 = SpatialInteractionDevice::RuntimeClassInitialize(v6, a1, v7);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(SpatialInteractionDevice *, GUID *, struct ISpatialInteractionDevice **))v6)(
             v6,
             &GUID_5898ec9b_9daf_4e55_874a_9e629b0cfb82,
             a2);
      (*(void (__fastcall **)(SpatialInteractionDevice *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(SpatialInteractionDevice *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
