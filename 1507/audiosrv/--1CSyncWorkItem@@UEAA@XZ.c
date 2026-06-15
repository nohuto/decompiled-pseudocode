/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x18006765C
 * Callers:
 *     _CStreamStoppedWorkItem::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180046BCA (_CStreamStoppedWorkItem--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CGenericApplicationManagerWorkItem_HostedAppStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180048118 (_CGenericApplicationManagerWorkItem_HostedAppStateChangedContext_--_scalar_deleting_destructor__.c)
 *     _CGenericApplicationManagerWorkItem_SessionDisplayStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18009EEF9 (_CGenericApplicationManagerWorkItem_SessionDisplayStateChangedContext_--_scalar_deleting_destruc.c)
 *     _CGenericApplicationManagerWorkItem__PlayToStreamStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A0E49 (_CGenericApplicationManagerWorkItem__PlayToStreamStateChangedContext_--_scalar_deleting_destruct.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
