/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x18014C760
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18014C7A8 (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z @ 0x18014C8EC (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEBVCVisual@@@Z.c)
 *     ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8 (-PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
