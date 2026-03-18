/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C008D760
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C00048A0 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD **Current; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  char v15; // [rsp+38h] [rbp+10h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 1992) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4, v7);
    v13[3] = 275LL;
    v13[4] = 7LL;
    v13[5] = 0LL;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
  }
  v8 = *(_QWORD *)(DxgAdapter + 1992);
  v9 = *(_QWORD *)(v8 + 432);
  v10 = *(_QWORD *)(v8 + 424);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v15, Current);
  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 640LL))(v9, a2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v15);
  return (unsigned int)v10;
}
