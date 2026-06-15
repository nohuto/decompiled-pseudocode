/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x18006795C
 * Callers:
 *     ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x1800679E0 (--_GCOnDeviceWorkItem@@UEAAPEAXI@Z.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x1800693A1 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
