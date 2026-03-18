/*
 * XREFs of ?PreComputePreSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x18014CA14
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180035DBC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18005F6E8 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180104290 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x18014CAE8 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014CDD8 (-PushStacksAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ??0CBspNode@@QEAA@XZ @ 0x180158C1C (--0CBspNode@@QEAA@XZ.c)
 */

__int64 __fastcall CBspPreComputeHelper::PreComputePreSubgraph(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        const struct CVisual *a3)
{
  CBspNode *v5; // rax
  unsigned int v6; // ebx
  CVisual *v7; // rcx
  int inserted; // eax
  struct CVisual *v10; // [rsp+58h] [rbp+10h] BYREF
  CBspNode *v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  if ( *((_DWORD *)a3 + 25) == 2 )
  {
    if ( CVisual::HasBspPolygonList(a2) )
      CVisual::ReleaseBspPolygonList(v7);
  }
  else
  {
    v5 = (CBspNode *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                       WPF::g_pProcessHeap,
                       104LL);
    if ( v5 )
      v5 = CBspNode::CBspNode(v5);
    v11 = v5;
    if ( !v5 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x38u);
      return v6;
    }
    CWatermarkStack<CBspNode *,64,2,10>::Push((char *)this + 32, &v11);
    CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this, &v10);
  }
  inserted = CBspPreComputeHelper::PushStacksAndInsertIntoBspTree(this, a2);
  v6 = inserted;
  if ( inserted < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x45u);
  return v6;
}
