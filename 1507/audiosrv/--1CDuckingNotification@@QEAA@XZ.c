/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x180007BE8
 * Callers:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x1800059F0 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005F1C (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180005FD4 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000E4F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18000E5C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     _CLockedList_CDuckingNotification_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x1800456C7 (_CLockedList_CDuckingNotification_1_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x1800456FD (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x18004618C (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 *     _CDuckingManager::AddDuckingNotification_::_1_::dtor$0 @ 0x1800461D5 (_CDuckingManager--AddDuckingNotification_--_1_--dtor$0.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A4D30 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180007D90 (-Release@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CDuckingNotification::~CDuckingNotification(CDuckingNotification *this)
{
  __int64 v1; // rbx
  unsigned int (__fastcall *v3)(CBackgroundSessionCallbacks *__hidden); // rsi

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v3 = *(unsigned int (__fastcall **)(CBackgroundSessionCallbacks *__hidden))(*(_QWORD *)v1 + 16LL);
    if ( v3 == CBackgroundSessionCallbacks::Release )
      CBackgroundSessionCallbacks::Release(*((CBackgroundSessionCallbacks **)this + 3));
    else
      v3(*((CBackgroundSessionCallbacks **)this + 3));
  }
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 2) - 24LL));
}
