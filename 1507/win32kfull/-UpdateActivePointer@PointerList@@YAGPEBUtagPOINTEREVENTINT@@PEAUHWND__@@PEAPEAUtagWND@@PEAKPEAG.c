/*
 * XREFs of ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCA70
 * Callers:
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022F904 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     ?CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z @ 0x1C01FC04C (-CreateNode@@YAPEAUtagINPUTPOINTERNODE@@GKI@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC1E4 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC758 (-SetNewValidState@@YAHIPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FCBA8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z @ 0x1C01FCDEC (-UpdateStateIndicator@@YAXPEAUtagINPUTPOINTERNODE@@I_KUtagPOINT@@@Z.c)
 */

__int64 __fastcall PointerList::UpdateActivePointer(
        PointerList *this,
        const struct tagPOINTEREVENTINT *a2,
        struct tagWND **a3,
        struct tagWND **a4,
        unsigned __int16 *a5,
        unsigned int *a6)
{
  __int16 v6; // bx
  unsigned __int16 v8; // cx
  int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  struct tagINPUTPOINTERNODE *NodeById; // rax
  __int16 v13; // cx
  struct tagINPUTPOINTERNODE *Node; // rdi
  bool v15; // zf
  __int64 result; // rax
  struct tagWND *Target; // rax
  unsigned __int16 v18; // dx

  HIBYTE(v6) = 0;
  v8 = *(_WORD *)this;
  v9 = 0;
  *a5 = 0;
  v10 = *((_DWORD *)this + 2);
  v11 = *((_DWORD *)this + 5);
  *a6 = 0;
  NodeById = FindNodeById(v8, 1, 1);
  Node = NodeById;
  if ( NodeById )
  {
    if ( *((_DWORD *)NodeById + 10) != v10 )
      return 0LL;
    v15 = (unsigned int)SetNewValidState(v11, NodeById) == 0;
  }
  else
  {
    Node = CreateNode(v13, v10, v11);
    v9 = 1;
    v15 = Node == 0LL;
  }
  if ( v15 )
    return 0LL;
  UpdateStateIndicator(Node, v11, *((_QWORD *)this + 11), *(struct tagPOINT *)((char *)this + 48));
  Target = UpdateInputCaptureAndGetTarget(this, Node, v11, (HWND)a2, a5, a6);
  LOBYTE(v6) = v9 != 0;
  *a5 |= v6;
  v18 = *a5;
  *a3 = Target;
  LODWORD(Target) = *((_DWORD *)Node + 11) & 0x1F0;
  *a5 = (2 * (*((_DWORD *)Node + 38) & 2)) | (2 * (*((_DWORD *)Node + 38) & 1)) | (2 * (*((_DWORD *)Node + 38) & 4)) | v18;
  *(_DWORD *)a4 = (_DWORD)Target;
  result = *((unsigned __int16 *)Node + 16);
  *((_DWORD *)Node + 11) = v11;
  return result;
}
