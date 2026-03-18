/*
 * XREFs of DxgDestroyContextAllocationCB @ 0x1C01332B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DpiGetDxgAdapter @ 0x1C0009270 (DpiGetDxgAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgDestroyContextAllocationCB(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgAdapter; // rbx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  struct _KTHREAD **Current; // rax
  char v17; // [rsp+38h] [rbp+10h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 206LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !*(_QWORD *)(DxgAdapter + 1984) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7, v10);
    v11[3] = 275LL;
    v11[4] = 7LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  v12 = *(_QWORD *)(DxgAdapter + 1984);
  v13 = *(_QWORD *)(v12 + 408);
  v14 = *(_QWORD *)(v12 + 400);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v17, Current);
  LODWORD(v14) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 8) + 640LL))(v13, a2);
  DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v17);
  return (unsigned int)v14;
}
