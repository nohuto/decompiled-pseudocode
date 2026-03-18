/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C01369B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000AEAC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AED8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C006E9E8 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int Resource; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  D3DKMT_HANDLE hDevice; // edx
  __int64 v11; // rcx
  PVOID v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rax
  HANDLE hNtHandle; // rcx
  _BYTE v25[16]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v26[112]; // [rsp+40h] [rbp-19h] BYREF
  char v27; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    Resource = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_19;
  }
  hDevice = a1->hDevice;
  Object = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, hDevice, Current, (struct DXGDEVICE **)&Object);
  v12 = Object;
  if ( !Object )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    Resource = -1073741811;
    *(_QWORD *)(v13 + 24) = a1->hDevice;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_8:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27);
    goto LABEL_19;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
    (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25,
    (struct DXGDEVICE *)Object);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v12, 0, v14, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v26);
  if ( Resource < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
    goto LABEL_8;
  }
  v15 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v20 = Object;
  v21 = v15;
  Resource = v15;
  if ( v15 == -1073741788 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v22[3] = v12;
    hNtHandle = a1->hNtHandle;
    v22[5] = -1073741788LL;
LABEL_13:
    v22[4] = hNtHandle;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_17;
  }
  if ( v15 < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    v22[3] = v12;
    hNtHandle = a1->hNtHandle;
    v22[5] = v21;
    goto LABEL_13;
  }
  Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)v12, a1, v18, (__int64)Object);
LABEL_17:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v25);
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27);
  if ( v20 )
    ObfDereferenceObject(v20);
LABEL_19:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v8, &EventProfilerExit, v9, 3056);
  return (unsigned int)Resource;
}
