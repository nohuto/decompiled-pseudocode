/*
 * XREFs of ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18007DAE4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x1800707D4 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073BB4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180074348 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x180074968 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 *     ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x180078088 (--0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessa.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007BD4C (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007CAE8 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18007D6D0 (-Create@HeatDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180071D54 (--0RIMDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 */

HIDDeviceCollection *__fastcall HIDDeviceCollection::HIDDeviceCollection(
        HIDDeviceCollection *this,
        struct IRawInputClient *a2)
{
  RIMDeviceCollection::RIMDeviceCollection(this, a2);
  *((_QWORD *)this + 343) = 0LL;
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  return this;
}
