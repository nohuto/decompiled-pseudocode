/*
 * XREFs of ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030
 * Callers:
 *     ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030 (--$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygo.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18014D19C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?GotoParent@CGraphWalker@@AEAAXPEAPEAVIGraphNode@@@Z @ 0x18000BC54 (-GotoParent@CGraphWalker@@AEAAXPEAPEAVIGraphNode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GotoPostChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x1800FA9B0 (-GotoPostChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ?GotoPreChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x1800FAA7C (-GotoPreChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 *     ??$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygonListBuilder@@AEBVCMILMatrix@@W4WalkDirection@@@Z @ 0x18014D030 (--$WalkBspSubtree@VCBspPolygonListBuilder@@@CGraphIterator@@AEAAJPEAVIGraphNode@@0PEAVCBspPolygo.c)
 */

__int64 __fastcall CGraphIterator::WalkBspSubtree<CBspPolygonListBuilder>(
        CGraphWalker *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  struct IGraphNode *v16; // [rsp+50h] [rbp+8h] BYREF
  struct IGraphNode *v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h]

  v18 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, a5, a6);
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = v8;
  *((_DWORD *)this + 7) = v8;
  v9 = CGraphWalker::GotoPreChild(this, &v16);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( v16 )
    {
      v11 = CGraphIterator::WalkBspSubtree<CBspPolygonListBuilder>(this, a5, a6);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xDBu);
        return v10;
      }
      CGraphWalker::GotoParent(this, &v16);
      *((_DWORD *)this + 7) = v18;
    }
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = CGraphWalker::GotoPostChild(this, &v17);
      v10 = v13;
      if ( v13 >= 0 )
      {
        if ( v17 )
        {
          v14 = CGraphIterator::WalkBspSubtree<CBspPolygonListBuilder>(this, a5, a6);
          v10 = v14;
          if ( v14 >= 0 )
            CGraphWalker::GotoParent(this, &v16);
          else
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xECu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xEAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD7u);
  }
  return v10;
}
