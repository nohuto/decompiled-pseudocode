/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C005AC90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00010D0 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BB44 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rsi
  __int64 v9; // r9
  int Resource; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID v16; // r14
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  HANDLE hNtHandle; // rcx
  _BYTE v25[80]; // [rsp+30h] [rbp-50h] BYREF
  char v26; // [rsp+B8h] [rbp+38h] BYREF
  struct DXGDEVICE *v27; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v21 = WdLogNewEntry5_WdError(v5);
    Resource = -1073741811;
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    goto LABEL_10;
  }
  hDevice = a1->hDevice;
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, hDevice, Current, &v27);
  v8 = v27;
  if ( !v27 )
  {
    v22 = WdLogNewEntry5_WdError(v7);
    Resource = -1073741811;
    *(_QWORD *)(v22 + 24) = a1->hDevice;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26);
    goto LABEL_10;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)&v27, v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v8, 0, v9, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25);
  if ( Resource < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
    ExReleaseResourceLite(*((PERESOURCE *)v27 + 10));
    KeLeaveCriticalRegion();
    goto LABEL_17;
  }
  v11 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v16 = Object;
  v17 = v11;
  Resource = v11;
  if ( v11 == -1073741788 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v23[3] = v8;
    hNtHandle = a1->hNtHandle;
    v23[5] = -1073741788LL;
  }
  else
  {
    if ( v11 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v8, a1, v14, Object);
      goto LABEL_8;
    }
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    v23[3] = v8;
    hNtHandle = a1->hNtHandle;
    v23[5] = v17;
  }
  v23[4] = hNtHandle;
  WdLogEvent5_WdWarning(v23);
LABEL_8:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
  ExReleaseResourceLite(*((PERESOURCE *)v27 + 10));
  KeLeaveCriticalRegion();
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26);
  if ( v16 )
    ObfDereferenceObject(v16);
LABEL_10:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v18, &EventProfilerExit, v19, 3056);
  return (unsigned int)Resource;
}
