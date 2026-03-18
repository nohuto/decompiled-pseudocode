/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z @ 0x1C0149ED0
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0009A4C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // si
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  struct _KTHREAD *v11; // rbx
  __int64 Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD, __int64, _QWORD); // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( KeGetCurrentIrql() )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 1181LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1183LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[19] != KeGetCurrentThread() && this[21] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1185LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = (char *)(this + 31);
  v11 = this[31];
  v17[0] = v10;
  while ( 1 )
  {
    v17[1] = v11;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
    v13 = Current;
    if ( !Current )
      break;
    v14 = *(_QWORD *)(Current + 16);
    if ( *(const struct DXGADAPTER **)(v14 + 16) == a2 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 376) + 8LL);
      v16 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(v15 + 144);
      LOBYTE(v15) = v4;
      v16(*(_QWORD *)(v13 + 544), v15, 0LL);
    }
    v11 = *(struct _KTHREAD **)v11;
  }
}
