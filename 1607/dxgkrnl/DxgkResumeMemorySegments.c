/*
 * XREFs of DxgkResumeMemorySegments @ 0x1C0149F80
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C00FBF50 (DpiPowerArbiterThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkResumeMemorySegments(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  ADAPTER_RENDER *v5; // rcx

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    v3 = -1073741811;
    *(_QWORD *)(v2 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v2);
    return v3;
  }
  v5 = *(ADAPTER_RENDER **)(a1 + 2136);
  if ( !v5 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = a1;
    v3 = -1073741637;
    *(_QWORD *)(v2 + 32) = -1073741637LL;
    goto LABEL_3;
  }
  return ADAPTER_RENDER::ResumeMemorySegments(v5);
}
