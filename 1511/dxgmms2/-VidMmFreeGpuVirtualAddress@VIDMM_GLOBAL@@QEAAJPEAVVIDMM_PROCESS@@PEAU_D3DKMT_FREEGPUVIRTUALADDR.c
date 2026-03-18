/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0050838
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x1C0014660 (VidMmFreeGpuVirtualAddress.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C003BC78 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C004C618 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  __int64 v14; // rax
  _QWORD v15[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( (*((_BYTE *)this + 40608) & 1) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                              0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v15, 0, sizeof(v15));
      v15[7] = a3->Size >> 12;
      v15[0] = -4294967176LL;
      v15[6] = BaseAddress;
      v15[5] = VirtualAddressAllocator;
      LOBYTE(v15[8]) = a4;
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15);
    }
    v14 = WdLogNewEntry5_WdAssertion(v8, v7, v10, v11);
    *(_QWORD *)(v14 + 24) = 17924LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return 3221225485LL;
}
