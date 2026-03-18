/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1C00704D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00967F4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  _QWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rcx
  __int64 v10; // r14
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  _BYTE v28[64]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2131);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    v22 = qword_1C0056840;
    v23 = (qword_1C0056840 & 2) == 0;
    goto LABEL_19;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    ProcessDxgProcess,
    v3 + 2);
  v10 = *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v10 )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_18:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL));
    v23 = (qword_1C0056840 & 2) == 0;
LABEL_19:
    if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v22, &EventProfilerExit, v21, 2131);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 24),
    *(struct DXGDEVICE **)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  v11 = *(struct DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL);
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 5), v11, 1);
  if ( *((_DWORD *)v11 + 44) == 1 )
  {
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL)) )
    {
      v16 = *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      _guard_dispatch_icall_fptr();
      DXGDEVICE::FlushScheduler(v16, 3LL);
      if ( *(_BYTE *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 5));
      if ( *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v17, &EventProfilerExit, v18, 2131);
      return 0LL;
    }
    v27 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    if ( *(_BYTE *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 5));
    if ( *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 5));
  if ( *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 2131);
  return 3221226166LL;
}
