/*
 * XREFs of DxgkUnlock @ 0x1C0061300
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0001650 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001678 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0003BC0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003BEC (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C006DF2C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2012);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v5);
    v9 = -1073741811;
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  v8 = *(_QWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v9 = -1073741811;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL));
    v12 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_9;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
    *(struct DXGDEVICE **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREACCESS::COREACCESS((COREACCESS *)(v3 + 48), *(struct DXGADAPTER *const *)(*(_QWORD *)(v8 + 16) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)(v3 + 48));
  if ( *(_DWORD *)(v8 + 352) != 4 )
  {
    *(_DWORD *)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    v9 = DXGDEVICE::Unlock(
           *(DXGDEVICE **)(((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
           (const struct _D3DKMT_UNLOCK *)(v3 + 16),
           1u);
    COREACCESS::~COREACCESS((COREACCESS *)(v3 + 48));
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 32));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_8:
    v11 = qword_1C00467F0;
    v12 = (qword_1C00467F0 & 2) == 0;
LABEL_9:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2012);
    return v9;
  }
  COREACCESS::~COREACCESS((COREACCESS *)(v3 + 48));
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 32));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v18 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 2012);
  return 0LL;
}
