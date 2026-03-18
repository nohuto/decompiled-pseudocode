/*
 * XREFs of ?GotoSibling@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BD98
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphWalker::GotoSibling(CGraphWalker *this, struct IGraphNode **a2)
{
  unsigned int (__fastcall ***v2)(_QWORD); // r14
  unsigned int v3; // ebp
  int v6; // edi
  unsigned int v7; // r14d
  struct IGraphNode *v8; // rax

  v2 = (unsigned int (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
  v3 = 0;
  *a2 = 0LL;
  if ( v2
    && (*((_DWORD *)this + 7) == 1 && *((_DWORD *)this + 6) != -1 && (v6 = *((_DWORD *)this + 6), v6 + 1 < (**v2)(v2))
     || !*((_DWORD *)this + 7) && (v6 = *((_DWORD *)this + 6)) != 0) )
  {
    v7 = v6 + 1;
    if ( *((_DWORD *)this + 7) != 1 )
      v7 = v6 - 1;
    v8 = (struct IGraphNode *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 8LL))(
                                *((_QWORD *)this + 2),
                                v7);
    *((_QWORD *)this + 1) = v8;
    *a2 = v8;
    *((_DWORD *)this + 6) = v7;
  }
  else
  {
    return 1;
  }
  return v3;
}
