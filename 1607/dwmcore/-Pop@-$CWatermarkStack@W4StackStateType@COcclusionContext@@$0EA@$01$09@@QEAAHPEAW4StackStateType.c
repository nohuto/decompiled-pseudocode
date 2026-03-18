/*
 * XREFs of ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800A32F8
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x18005C990 (-Pop@COcclusionContext@@UEAAJXZ.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(int *a1, _DWORD *a2)
{
  int v3; // ecx
  __int64 v4; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0LL;
  v4 = (unsigned int)(v3 - 1);
  *a1 = v4;
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v4);
  return 1LL;
}
