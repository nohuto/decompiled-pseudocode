/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0155E10
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097348 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int Resource; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  D3DKMT_HANDLE hDevice; // edx
  __int64 v13; // rcx
  PVOID v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // r14
  __int64 v23; // r15
  _QWORD *v24; // rax
  HANDLE hNtHandle; // rcx
  _BYTE v27[16]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v28[128]; // [rsp+40h] [rbp-29h] BYREF
  char v29; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3056);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( !ProcessDxgProcess )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    Resource = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    goto LABEL_19;
  }
  hDevice = a1->hDevice;
  Object = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)&v29,
    hDevice,
    ProcessDxgProcess,
    (struct DXGDEVICE **)&Object);
  v14 = Object;
  if ( !Object )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    Resource = -1073741811;
    *(_QWORD *)(v15 + 24) = a1->hDevice;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_8:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29);
    goto LABEL_19;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27,
    (struct DXGDEVICE *)Object);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v14, 0, v16, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
  if ( Resource < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
    goto LABEL_8;
  }
  v17 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v22 = Object;
  v23 = v17;
  Resource = v17;
  if ( v17 == -1073741788 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v24[3] = v14;
    hNtHandle = a1->hNtHandle;
    v24[5] = -1073741788LL;
LABEL_13:
    v24[4] = hNtHandle;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_17;
  }
  if ( v17 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v24[3] = v14;
    hNtHandle = a1->hNtHandle;
    v24[5] = v23;
    goto LABEL_13;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v14, a1, v20, (__int64)Object);
LABEL_17:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29);
  if ( v22 )
    ObfDereferenceObject(v22);
LABEL_19:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 3056);
  return (unsigned int)Resource;
}
