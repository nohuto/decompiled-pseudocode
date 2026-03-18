/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C013A6B4
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C013B664 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *i; // rdi

  if ( !*((_DWORD *)this + 18)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 112LL) != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 6939LL;
    WdLogEvent5_WdAssertion(v3);
  }
  for ( i = (_QWORD *)*((_QWORD *)this + 40); i != (_QWORD *)((char *)this + 320) && i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 8LL) + 888LL))(i[4]);
}
