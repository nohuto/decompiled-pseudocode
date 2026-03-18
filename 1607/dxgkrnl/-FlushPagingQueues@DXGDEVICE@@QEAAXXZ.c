/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0095210
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C0173C9C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  _QWORD *i; // rdi
  __int64 v4; // rax

  if ( !*((_DWORD *)this + 18)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 128LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 7271LL;
    WdLogEvent5_WdAssertion(v4);
  }
  for ( i = (_QWORD *)*((_QWORD *)this + 43); i != (_QWORD *)((char *)this + 344) && i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 904LL))(i[4]);
}
