/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z @ 0x1C014E174
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000C1CC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(struct _KTHREAD **this, const struct DXGADAPTER *a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  struct _KTHREAD *v10; // rbx
  __int64 Current; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  void (__fastcall *v15)(_QWORD, __int64, _QWORD); // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1186LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 1188LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this[19] != KeGetCurrentThread() && this[21] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1190LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (char *)(this + 31);
  v10 = this[31];
  v16[0] = v9;
  while ( 1 )
  {
    v16[1] = v10;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v16);
    v12 = Current;
    if ( !Current )
      break;
    v13 = *(_QWORD *)(Current + 16);
    if ( *(const struct DXGADAPTER **)(v13 + 16) == a2 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 400) + 8LL);
      v15 = *(void (__fastcall **)(_QWORD, __int64, _QWORD))(v14 + 144);
      LOBYTE(v14) = a3;
      v15(*(_QWORD *)(v12 + 544), v14, 0LL);
    }
    v10 = *(struct _KTHREAD **)v10;
  }
}
