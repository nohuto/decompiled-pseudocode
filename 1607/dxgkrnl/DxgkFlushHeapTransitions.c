/*
 * XREFs of DxgkFlushHeapTransitions @ 0x1C00D6540
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkFlushHeapTransitions(unsigned int *a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  DXGADAPTER *v20[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF
  struct DXGADAPTER *v22; // [rsp+68h] [rbp+10h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v22 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v3);
  if ( !ProcessDxgProcess )
  {
    v17 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    return 3221225485LL;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v20, v1, ProcessDxgProcess, &v22);
  v13 = v22;
  if ( !v22 )
  {
    v18 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v18 + 24) = v1;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v20, v19);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v21, v22, 1);
  if ( *((_DWORD *)v13 + 44) == 1 )
  {
    v15 = *((_QWORD *)v22 + 267);
    if ( v15 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v15 + 400) + 8LL) + 1072LL))(*(_QWORD *)(v15 + 408));
  }
  if ( v21[16] )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v20, v14);
  return 0LL;
}
