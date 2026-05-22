/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x18007DB64
 * Callers:
 *     ??1PTPDeviceCollection@@MEAA@XZ @ 0x180073584 (--1PTPDeviceCollection@@MEAA@XZ.c)
 *     ??_ETouchDeviceCollection@@MEAAPEAXI@Z @ 0x180073D60 (--_ETouchDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EPenDeviceCollection@@MEAAPEAXI@Z @ 0x1800744F0 (--_EPenDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z @ 0x180074B00 (--_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800781E4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 *     ??_EMobileButtonDeviceCollection@@MEAAPEAXI@Z @ 0x18007BF00 (--_EMobileButtonDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCollection@@MEAAPEAXI@Z @ 0x18007CCA0 (--_GConsumerControlDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x18007D7A0 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x18007DB20 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _RIMRawInputProvider::Initialize_::_1_::dtor$3 @ 0x1800A2DFF (_RIMRawInputProvider--Initialize_--_1_--dtor$3.c)
 *     _AugmentedInputDeviceCollection::Create_::_1_::dtor$1 @ 0x1800A2E3B (_AugmentedInputDeviceCollection--Create_--_1_--dtor$1.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$0 @ 0x1800A2F9E (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v2 = (void *)*((_QWORD *)this + 343);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
