/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x180051FA0
 * Callers:
 *     ??_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180052060 (--_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z.c)
 *     ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x1800520A0 (--_GCOnDeviceWorkItem@@UEAAPEAXI@Z.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$3 @ 0x180053790 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
