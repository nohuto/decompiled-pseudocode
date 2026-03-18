/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C014BE9C
 * Callers:
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C000BE7C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BEA0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000C6F0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000C7D0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0069EE4 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
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
  D3DKMT_HANDLE hSource; // ebx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _BYTE v25[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v26[16]; // [rsp+38h] [rbp-48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v27; // [rsp+48h] [rbp-38h] BYREF
  struct DXGCONTEXT *v28; // [rsp+B8h] [rbp+38h] BYREF
  struct DXGALLOCATION *v29; // [rsp+C8h] [rbp+48h] BYREF

  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26, a2->hAdapter, a1, &v28, 0);
  v10 = v28;
  if ( v28 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
      (DXGDEVICEACCESSLOCKSHARED *)v25,
      *((struct DXGDEVICE **)v28 + 2));
    v28 = 0LL;
    hSource = a2->hSource;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 192));
    v14 = (hSource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)a1 + 58)
      && (v15 = *((_QWORD *)a1 + 27),
          v16 = *(_DWORD *)(v15 + 16LL * (unsigned int)v14 + 8),
          ((hSource >> 26) & 0x30) == (*(_BYTE *)(v15 + 16LL * (unsigned int)v14 + 8) & 0x30))
      && (v16 & 0x1000) == 0
      && (v16 & 0xF) != 0
      && (v17 = 2 * v14, (*(_BYTE *)(v15 + 8 * v17 + 8) & 0xF) == 5) )
    {
      v18 = *(struct _EX_RUNDOWN_REF **)(v15 + 8 * v17);
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29, v18);
    ExReleasePushLockSharedEx((char *)a1 + 192, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::Assign((struct _EX_RUNDOWN_REF **)&v28, &v29);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v29);
    if ( v28 )
    {
      memset(&v27, 0, sizeof(v27));
      v27.hAllocation = *(HANDLE *)(*((_QWORD *)v28 + 6) + 16LL);
      v11 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v10 + 2) + 16LL), &v27, v21);
      *(_DWORD *)a3 = v27.Width;
      *((_DWORD *)a3 + 1) = v27.Height;
      *((_DWORD *)a3 + 2) = v27.Format;
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v11 = -1073741811;
      *(_QWORD *)(v23 + 24) = -1073741811LL;
      *(_QWORD *)(v23 + 32) = a2->hSource;
      WdLogEvent5_WdWarning(v23);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v28);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
  }
  else
  {
    v11 = -1073741811;
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    v12[3] = -1073741811LL;
    v12[4] = PsGetCurrentProcess();
    v12[5] = a2->hAdapter;
    WdLogEvent5_WdWarning(v12);
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v26);
  return v11;
}
