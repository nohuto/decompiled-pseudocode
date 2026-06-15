/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x180065F60
 * Callers:
 *     _CGenericApplicationManagerWorkItem_BCMStartupGracePeriodExpiredContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180049730 (_CGenericApplicationManagerWorkItem_BCMStartupGracePeriodExpiredContext_--_scalar_deleting_destr.c)
 *     _CGenericApplicationManagerWorkItem_HostedAppStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18004BA3C (_CGenericApplicationManagerWorkItem_HostedAppStateChangedContext_--_scalar_deleting_destructor__.c)
 *     _CGenericApplicationManagerWorkItem_SessionDisplayStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18009BD19 (_CGenericApplicationManagerWorkItem_SessionDisplayStateChangedContext_--_scalar_deleting_destruc.c)
 *     _CGenericApplicationManagerWorkItem__PlayToStreamStateChangedContext_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18009DFF9 (_CGenericApplicationManagerWorkItem__PlayToStreamStateChangedContext_--_scalar_deleting_destruct.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
