/*
 * XREFs of ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C007D528
 * Callers:
 *     ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C001C520 (-VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0050780 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

D3DGPU_VIRTUAL_ADDRESS __fastcall VIDMM_GLOBAL::VidMmMapContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  HANDLE hAllocation; // rbx
  __int64 **v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  D3DDDI_MAPGPUVIRTUALADDRESS v14; // [rsp+30h] [rbp-88h] BYREF

  hAllocation = a2->hAllocation;
  memset(&v14, 0, sizeof(v14));
  v5 = (__int64 **)*((_QWORD *)hAllocation + 3);
  v14.BaseAddress = a2->BaseAddress;
  v14.DriverProtection = a2->DriverProtection;
  v14.MaximumAddress = a2->MaximumAddress;
  v14.MinimumAddress = a2->MinimumAddress;
  v14.OffsetInPages = a2->OffsetInPages;
  v14.SizeInPages = a2->SizeInPages;
  v14.Protection.Value = a2->Protection.Value;
  v6 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(this, 0LL, v5, &v14, 0, *(_DWORD *)(**v5 + 76) & 0x3F);
  v11 = v6;
  if ( v6 >= 0 )
    return v14.VirtualAddress;
  v12 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
  *(_QWORD *)(v12 + 24) = v11;
  WdLogEvent5_WdAssertion(v12);
  return 0LL;
}
