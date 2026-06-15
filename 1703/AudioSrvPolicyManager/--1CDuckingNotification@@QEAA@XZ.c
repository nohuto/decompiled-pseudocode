/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x18000A228
 * Callers:
 *     _CDuckingManager::AddDuckingNotification_::_1_::dtor$0 @ 0x180021D6B (_CDuckingManager--AddDuckingNotification_--_1_--dtor$0.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x180021DAB (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x180021FCC (_CLockedList_CDuckingNotification_1_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x180021FFC (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rdx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 2) - 24LL);
  if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
}
