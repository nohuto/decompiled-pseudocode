/*
 * XREFs of ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAHPEAPEAVCBspNode@@@Z @ 0x18014C77C
 * Callers:
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18014C7A8 (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Pop(int *a1, _QWORD *a2)
{
  int v3; // ecx
  __int64 v5; // rcx

  v3 = *a1;
  if ( !v3 )
    return 0LL;
  v5 = (unsigned int)(v3 - 1);
  *a1 = v5;
  if ( a2 )
    *a2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v5);
  return 1LL;
}
