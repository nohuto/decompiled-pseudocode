/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C00BFED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF
  struct DXGADAPTER *v17; // [rsp+48h] [rbp+10h] BYREF
  DXGADAPTER *v18; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v17 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdWarning(v4, v3, v5, v6);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, v1, Current, &v17);
  v11 = v17;
  if ( !v17 )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v15 + 24) = v1;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v18);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v16, v17, 1);
  if ( *((_DWORD *)v11 + 40) == 1 )
  {
    v12 = *((_QWORD *)v17 + 249);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v12 + 424) + 8LL) + 1056LL))(*(_QWORD *)(v12 + 432));
  }
  if ( v16[8] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v18);
  return 0LL;
}
