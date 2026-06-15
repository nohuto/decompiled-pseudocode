/*
 * XREFs of ??_GCDuckWorkItem@@QEAAPEAXI@Z @ 0x1800A17E8
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x1800A15F8 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800A33E0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x1800A350C (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEBGKW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

CDuckWorkItem *__fastcall CDuckWorkItem::`scalar deleting destructor'(CDuckWorkItem *this)
{
  ATL::CStringData::Release((ATL::CStringData *)(*(_QWORD *)this - 24LL));
  operator delete(this);
  return this;
}
