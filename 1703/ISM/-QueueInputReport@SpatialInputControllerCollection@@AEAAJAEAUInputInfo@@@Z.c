/*
 * XREFs of ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x18007A4F0
 * Callers:
 *     ?ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@SpatialInteractionDevices@@PEADKKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@7@@Z @ 0x1800776FC (-ParseAndSendReport@SpatialInputControllerCollection@@AEAAXPEAVSpatialInteractionController@Spat.c)
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?InputReportProcessed_@RawInputProvidersTracing@@QEAAXKJAEBUInputInfo@@@Z @ 0x180076344 (-InputReportProcessed_@RawInputProvidersTracing@@QEAAXKJAEBUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerCollection::QueueInputReport(
        SpatialInputControllerCollection *this,
        struct InputInfo *a2)
{
  unsigned int v2; // edi
  _DWORD *v4; // rcx
  RawInputProvidersTracing *v5; // rcx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 329) & 8) != 0 )
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  v4 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v4 && *v4 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::InputReportProcessed_(v5, *((_DWORD *)a2 + 1), v2, a2);
  }
  return v2;
}
