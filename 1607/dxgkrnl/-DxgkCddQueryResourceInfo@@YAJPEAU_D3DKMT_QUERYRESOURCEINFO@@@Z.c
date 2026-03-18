/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C00703D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0001480 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00014CC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  int Resource; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 hDevice; // rcx
  _BYTE v18[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v19[104]; // [rsp+40h] [rbp-68h] BYREF
  struct DXGDEVICE *v20; // [rsp+B8h] [rbp+10h] BYREF
  char v21; // [rsp+C0h] [rbp+18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3035);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, a1->hDevice, ProcessDxgProcess, &v20);
    if ( v20 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18, v20);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v20, 0, v9, 0);
      Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v19);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(v20, a1, a1->hGlobalShare);
      v11 = Resource;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v19);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v18);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v8);
      hDevice = a1->hDevice;
      v11 = -1073741811;
      *(_QWORD *)(v16 + 24) = hDevice;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21);
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v7);
    v11 = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 3035);
  return v11;
}
