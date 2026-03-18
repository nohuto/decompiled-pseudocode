/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C0171D7C
 * Callers:
 *     DxgkPresent @ 0x1C00C8CB0 (DxgkPresent.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0093988 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r8
  _BYTE v27[16]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+50h] [rbp-30h] BYREF
  struct DXGCONTEXT *v30; // [rsp+B8h] [rbp+38h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+C8h] [rbp+48h] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28, a2->hAdapter, a1, &v30, 0);
  v10 = v30;
  if ( v30 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
      (DXGDEVICEACCESSLOCKSHARED *)v27,
      *((struct DXGDEVICE **)v30 + 2));
    v30 = 0LL;
    hSource = a2->hSource;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 184));
    v15 = (hSource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)a1 + 56)
      && (v16 = *((_QWORD *)a1 + 26),
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
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v31, v19);
    ExReleasePushLockSharedEx((char *)a1 + 184, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v30, &v31);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
    if ( v30 )
    {
      memset(&v29, 0, sizeof(v29));
      v29.hAllocation = *(HANDLE *)(*((_QWORD *)v30 + 6) + 16LL);
      v11 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v10 + 2) + 16LL), &v29, v25);
      *(_DWORD *)a3 = v29.Width;
      *((_DWORD *)a3 + 1) = v29.Height;
      *((_DWORD *)a3 + 2) = v29.Format;
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      v11 = -1073741811;
      *(_QWORD *)(v24 + 24) = -1073741811LL;
      *(_QWORD *)(v24 + 32) = a2->hSource;
      WdLogEvent5_WdWarning(v24);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v30);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v27);
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
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v28);
  return v11;
}
