/*
 * XREFs of ?IsRangeValid@@YAE_K00@Z @ 0x1C004E8A4
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IsRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a2 <= a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 21965LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v4);
    return 0;
  }
  if ( a2 > a3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 21970LL;
    goto LABEL_3;
  }
  return 1;
}
