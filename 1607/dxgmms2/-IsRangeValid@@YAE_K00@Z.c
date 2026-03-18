/*
 * XREFs of ?IsRangeValid@@YAE_K00@Z @ 0x1C008979C
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C008CCF4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IsRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax

  if ( a2 <= a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 23622LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v3);
    return 0;
  }
  if ( a2 > a3 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v3 + 24) = 23627LL;
    goto LABEL_3;
  }
  return 1;
}
