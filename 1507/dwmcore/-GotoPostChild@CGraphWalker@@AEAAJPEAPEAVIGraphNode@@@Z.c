/*
 * XREFs of ?GotoPostChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x1800FA9B0
 * Callers:
 *     ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030 (--$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygo.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z @ 0x18000C03C (-Push@-$CWatermarkStack@UCFrame@CGraphWalker@@$0EA@$01$09@@QEAAJAEBUCFrame@CGraphWalker@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CGraphWalker::GotoPostChild(CGraphWalker *this, struct IGraphNode **a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  struct IGraphNode *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 1);
  v3 = 0;
  *a2 = 0LL;
  v6 = (struct IGraphNode *)(*(__int64 (__fastcall **)(__int64, bool))(*(_QWORD *)v2 + 8LL))(
                              v2,
                              *((_DWORD *)this + 7) == 0);
  if ( v6 )
  {
    *(_QWORD *)&v10 = *((_QWORD *)this + 2);
    DWORD2(v10) = *((_DWORD *)this + 6);
    v7 = CWatermarkStack<CGraphWalker::CFrame,64,2,10>::Push((unsigned int *)this + 8, &v10);
    v3 = v7;
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 1);
      ++*((_DWORD *)this + 1);
      *((_QWORD *)this + 2) = v8;
      *((_QWORD *)this + 1) = v6;
      *a2 = v6;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x15Au);
    }
  }
  return v3;
}
