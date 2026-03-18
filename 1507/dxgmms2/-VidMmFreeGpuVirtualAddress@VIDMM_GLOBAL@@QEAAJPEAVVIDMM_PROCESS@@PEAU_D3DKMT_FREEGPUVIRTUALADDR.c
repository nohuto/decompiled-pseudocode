/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C005556C
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x1C000E660 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005B1BC (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  __int64 v14; // rax
  _QWORD v15[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*((_BYTE *)this + 40552) & 1) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
    return 3221225485LL;
  BaseAddress = a3->BaseAddress;
  if ( !BaseAddress )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v14 + 24) = 17601LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  memset(v15, 0, sizeof(v15));
  v15[7] = a3->Size >> 12;
  v15[0] = -4294967176LL;
  v15[6] = BaseAddress;
  v15[5] = VirtualAddressAllocator;
  LOBYTE(v15[8]) = a4;
  return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
}
