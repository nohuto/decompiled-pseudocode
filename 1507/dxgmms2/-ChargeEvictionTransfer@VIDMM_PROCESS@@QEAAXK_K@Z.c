/*
 * XREFs of ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C0057FA4
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F940 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     Template_ppqqxqq @ 0x1C0010198 (Template_ppqqxqq.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C004E7AC (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?Set@VIDMM_POLICY@@QEAAHXZ @ 0x1C00534F8 (-Set@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_PROCESS::ChargeEvictionTransfer(VIDMM_PROCESS *this, unsigned int a2, __int64 a3)
{
  __int64 *v4; // rbx
  int v5; // edx
  int IsActive; // eax
  __int64 v7; // r8

  v4 = *(__int64 **)(*((_QWORD *)this + 2) + 8LL * a2);
  v5 = *(_DWORD *)(*v4 + 8);
  if ( v5 != 102 && v5 != 110 )
  {
    v4[52] += a3;
    if ( v4[52] >= (unsigned __int64)(unsigned int)dword_1C00271B4
      && (unsigned int)VIDMM_POLICY::Set((VIDMM_POLICY *)(v4 + 48))
      && bTracingEnabled
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      IsActive = VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v4 + 48));
      Template_ppqqxqq(IsActive, *v4, v7, *((_QWORD *)this + 1), *(_QWORD *)(*v4 + 24));
    }
  }
}
