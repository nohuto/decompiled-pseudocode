/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x180068F8C
 * Callers:
 *     ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x180069010 (--_GCOnDeviceWorkItem@@UEAAPEAXI@Z.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x18006A861 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
