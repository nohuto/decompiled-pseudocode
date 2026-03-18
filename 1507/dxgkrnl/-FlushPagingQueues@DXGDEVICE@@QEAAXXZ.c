/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0135F84
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *i; // rdi

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v5 + 112) != CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(v2, v5, CurrentThread, v3);
      *(_QWORD *)(v6 + 24) = 6948LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  for ( i = (_QWORD *)*((_QWORD *)this + 40); i != (_QWORD *)((char *)this + 320) && i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 400LL) + 8LL) + 880LL))(i[4]);
}
