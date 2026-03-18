/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0148180
 * Callers:
 *     DxgkPresent @ 0x1C0069D10 (DxgkPresent.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00B87DC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        const struct _D3DKMT_PRESENT *a2,
        struct INDIRECT_RESOURCE_INFO *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGCONTEXT *v10; // r14
  unsigned int v11; // edi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  D3DKMT_HANDLE hSource; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _BYTE v32[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v34; // [rsp+50h] [rbp-30h] BYREF
  struct DXGCONTEXT *v35; // [rsp+B8h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v36; // [rsp+C8h] [rbp+48h] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33, a2->hAdapter, a1, &v35, 0);
  v10 = v35;
  if ( v35 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
      (DXGDEVICEACCESSLOCKSHARED *)v32,
      *((struct DXGDEVICE **)v35 + 2));
    v35 = 0LL;
    hSource = a2->hSource;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 192));
    v15 = (hSource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)a1 + 58)
      && (v16 = *((_QWORD *)a1 + 27),
          v17 = *(_DWORD *)(v16 + 16LL * (unsigned int)v15 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v16 + 16LL * (unsigned int)v15 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (v18 = 2 * v15, (*(_BYTE *)(v16 + 8 * v18 + 8) & 0xF) == 5) )
    {
      v19 = *(struct _EX_RUNDOWN_REF **)(v16 + 8 * v18);
    }
    else
    {
      v19 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v36, v19);
    ExReleasePushLockSharedEx((char *)a1 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v35, &v36);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v36, v20, v21, v22);
    if ( v35 )
    {
      memset(&v34, 0, sizeof(v34));
      v34.hAllocation = *(HANDLE *)(*((_QWORD *)v35 + 6) + 16LL);
      v11 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v10 + 2) + 16LL), &v34, v25);
      *(_DWORD *)a3 = v34.Width;
      *((_DWORD *)a3 + 1) = v34.Height;
      *((_DWORD *)a3 + 2) = v34.Format;
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v11 = -1073741811;
      *(_QWORD *)(v27 + 24) = -1073741811LL;
      *(_QWORD *)(v27 + 32) = a2->hSource;
      WdLogEvent5_WdWarning(v27);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35, v28, v29, v30);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v32);
  }
  else
  {
    v11 = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    v12[3] = -1073741811LL;
    v12[4] = PsGetCurrentProcess(v13);
    v12[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v12);
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v33);
  return v11;
}
