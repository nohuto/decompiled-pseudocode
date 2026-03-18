/*
 * XREFs of DxgkUnlock @ 0x1C006E9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // edi
  __int64 v12; // r8
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2012);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v16 = WdLogNewEntry5_WdError(v7);
    v11 = -1073741811;
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 8));
  v10 = *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v11 = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL));
    v14 = (qword_1C0056840 & 2) == 0;
    goto LABEL_9;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
    *(struct DXGDEVICE **)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREACCESS::COREACCESS((COREACCESS *)(v3 + 48), *(struct DXGADAPTER *const *)(*(_QWORD *)(v10 + 16) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)(v3 + 48));
  if ( *(_DWORD *)(v10 + 376) != 4 )
  {
    *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    v11 = DXGDEVICE::Unlock(
            *(DXGDEVICE **)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            (const struct _D3DKMT_UNLOCK *)(v3 + 16),
            1u);
    COREACCESS::~COREACCESS((COREACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 32));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_8:
    v13 = qword_1C0056840;
    v14 = (qword_1C0056840 & 2) == 0;
LABEL_9:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v13, &EventProfilerExit, v12, 2012);
    return v11;
  }
  COREACCESS::~COREACCESS((COREACCESS *)(v3 + 48));
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 32));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 2012);
  return 0LL;
}
