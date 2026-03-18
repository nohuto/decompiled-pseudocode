/*
 * XREFs of ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C008C710
 * Callers:
 *     ?VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x1C001D320 (-VidMmMapContextAllocationCb@@YA_KPEAVVIDMM_GLOBAL@@PEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0057E30 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
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
  __int64 v9; // rbx
  __int64 v10; // rax
  D3DDDI_MAPGPUVIRTUALADDRESS v12; // [rsp+30h] [rbp-88h] BYREF

  hAllocation = a2->hAllocation;
  memset(&v12, 0, sizeof(v12));
  v5 = (__int64 **)*((_QWORD *)hAllocation + 3);
  v12.BaseAddress = a2->BaseAddress;
  v12.DriverProtection = a2->DriverProtection;
  v12.MaximumAddress = a2->MaximumAddress;
  v12.MinimumAddress = a2->MinimumAddress;
  v12.OffsetInPages = a2->OffsetInPages;
  v12.SizeInPages = a2->SizeInPages;
  v12.Protection.Value = a2->Protection.Value;
  v6 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(this, 0LL, v5, &v12, 0, *(_DWORD *)(**v5 + 76) & 0x3F);
  v9 = v6;
  if ( v6 >= 0 )
    return v12.VirtualAddress;
  v10 = WdLogNewEntry5_WdAssertion(v8, v7);
  *(_QWORD *)(v10 + 24) = v9;
  WdLogEvent5_WdAssertion(v10);
  return 0LL;
}
