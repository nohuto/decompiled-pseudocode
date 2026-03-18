/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0053BFC
 * Callers:
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004DB7C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0055894 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005F954 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0053C8C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        char a4,
        struct VIDMM_VAD_PENDING_OPERATION *a5)
{
  VIDMM_GLOBAL *v9; // rcx
  int v10; // eax
  _QWORD v12[10]; // [rsp+20h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v10 = (*((_DWORD *)a3 + 16) >> 4) & 0x3F;
  LODWORD(v12[0]) = 114;
  HIDWORD(v12[0]) = v10;
  v12[7] = a5;
  v12[6] = a3;
  v12[5] = a2;
  if ( a4 )
    return VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v9, (struct _VIDMM_SYSTEM_COMMAND *)v12);
  else
    return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12, 1);
}
