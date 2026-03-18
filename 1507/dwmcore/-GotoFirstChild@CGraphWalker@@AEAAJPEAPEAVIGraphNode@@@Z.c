/*
 * XREFs of ?GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BCB8
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z @ 0x18000C03C (-Push@-$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z.c)
 *     ?GetChildrenCount@CVisual@@UEBAIXZ @ 0x180034E40 (-GetChildrenCount@CVisual@@UEBAIXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphWalker::GotoFirstChild(CGraphWalker *this, struct IGraphNode **a2)
{
  CVisual *v2; // rbx
  unsigned int (__fastcall *v5)(CVisual *__hidden); // rdi
  unsigned int ChildrenCount; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebp
  struct IGraphNode *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  v2 = (CVisual *)*((_QWORD *)this + 1);
  *a2 = 0LL;
  v5 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v2;
  if ( v5 == CVisual::GetChildrenCount )
    ChildrenCount = CVisual::GetChildrenCount(v2);
  else
    ChildrenCount = v5(v2);
  v7 = ChildrenCount;
  if ( ChildrenCount )
  {
    v13 = *((_QWORD *)this + 2);
    v14 = *((_DWORD *)this + 6);
    v8 = CWatermarkStack<CGraphWalker::CFrame,64,2,10>::Push((char *)this + 32, &v13);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x88u);
    }
    else
    {
      if ( *((_DWORD *)this + 7) == 1 )
        *((_DWORD *)this + 6) = 0;
      else
        *((_DWORD *)this + 6) = v7 - 1;
      v10 = (struct IGraphNode *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 1) + 8LL))(
                                   *((_QWORD *)this + 1),
                                   *((unsigned int *)this + 6));
      v11 = *((_QWORD *)this + 1);
      ++*((_DWORD *)this + 1);
      *((_QWORD *)this + 2) = v11;
      *((_QWORD *)this + 1) = v10;
      *a2 = v10;
    }
  }
  else
  {
    return 1;
  }
  return v9;
}
