/*
 * XREFs of ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0038190
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C0037B84 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C005BDEC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005BE6C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiAllocateMdl(unsigned __int64 Base, SIZE_T Length)
{
  PMDL Mdl; // r9

  Mdl = MmCreateMdl(0LL, (PVOID)Base, Length);
  if ( Mdl )
  {
    Mdl->Next = 0LL;
    Mdl->MdlFlags = 0;
    Mdl->ByteCount = Length;
    Mdl->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    Mdl->Size = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
    Mdl->ByteOffset = Base & 0xFFF;
  }
  return Mdl;
}
