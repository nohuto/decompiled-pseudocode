/*
 * XREFs of ??0CBspNode@@QEAA@XZ @ 0x180158C1C
 * Callers:
 *     ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x18014CA14 (-PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

CBspNode *__fastcall CBspNode::CBspNode(CBspNode *this)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CBspNode::`vftable'{for `IBSPGraphNode'};
  *((_QWORD *)this + 1) = &CBspNode::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = (char *)this + 72;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_DWORD *)this + 14) = 4;
  *((_DWORD *)this + 15) = 4;
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
  return this;
}
