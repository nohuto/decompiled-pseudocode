/*
 * XREFs of ??1CDuckingNotification@@QEAA@XZ @ 0x180032844
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002B6F0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002B7C0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180034310 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800343C8 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180035204 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     _CDuckingManager::DeleteDuckingNotification_::_1_::dtor$0 @ 0x18004B87C (_CDuckingManager--DeleteDuckingNotification_--_1_--dtor$0.c)
 *     _CDuckingManager::AddDuckingNotification_::_1_::dtor$0 @ 0x18004B8C5 (_CDuckingManager--AddDuckingNotification_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::RemoveInterface_::_1_::dtor$0 @ 0x18004BCD8 (_CLockedList_CDuckingNotification_1_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_CDuckingNotification_1_0_::AddInterface_::_1_::dtor$0 @ 0x18004BD0E (_CLockedList_CDuckingNotification_1_0_--AddInterface_--_1_--dtor$0.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800A20D0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?Release@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x1800329F0 (-Release@CBackgroundSessionCallbacks@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
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
