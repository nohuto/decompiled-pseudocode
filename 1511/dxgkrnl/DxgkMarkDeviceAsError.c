/*
 * XREFs of DxgkMarkDeviceAsError @ 0x1C005C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C006E298 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkMarkDeviceAsError(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r9
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[112]; // [rsp+E0h] [rbp+E0h] BYREF

  v3 = (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2131);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
      Current,
      (struct DXGDEVICE **)(v3 + 8));
    v8 = *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 32, v8, 0, v9, 0);
      v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 32));
      if ( v10 < 0 )
      {
LABEL_9:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 32));
        if ( *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v15, &EventProfilerExit, v16, 2131);
        return (unsigned int)v10;
      }
      if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL)) )
      {
        _guard_dispatch_icall_fptr();
        DXGDEVICE::FlushScheduler(v8, 3LL);
        goto LABEL_9;
      }
      v23 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 32));
      if ( *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v22 + 24) = *(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_QWORD *)(v22 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v22);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
    v21 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    v20 = qword_1C00467F0;
    v21 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v19, 2131);
  return 3221225485LL;
}
