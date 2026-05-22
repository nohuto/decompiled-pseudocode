/*
 * XREFs of ??1?$unique_ptr@UDeviceInfo@@U?$default_delete@UDeviceInfo@@@std@@@std@@QEAA@XZ @ 0x18004FA74
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$2 @ 0x1800A1965 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$2.c)
 *     _MPCGestureHandler::_MPCGestureHandler_::_1_::dtor$2 @ 0x1800A19D7 (_MPCGestureHandler--_MPCGestureHandler_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<DeviceInfo>::~unique_ptr<DeviceInfo>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
