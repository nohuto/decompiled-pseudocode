/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04
 * Callers:
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18001DA30 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001DC80 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001E0E0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x18001E630 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180047EC0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1800480F0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIIPEBUMilRectF@@0PEBK@Z @ 0x1800481C0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180048520 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x1800491D0 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180049A90 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180049D10 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180114E40 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180115150 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1801157C0 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180115E50 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180115FD0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x1800474E0 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004BD28 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C0D0 (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18004C210 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ @ 0x18004C540 (-GetWrittenSize@CDataStreamBlock@@UEAAAEAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::BeginCommand(struct CCommandBatch **this, void *a2, unsigned int a3, int a4)
{
  unsigned int v4; // edi
  const void *v6; // rbp
  int v7; // ebx
  CDataStreamWriter **v8; // r15
  CDataStreamWriter *v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // eax
  int v13; // edi
  CDataStreamBlock *v14; // rcx
  __int64 (*v15)(void); // rax
  unsigned int *WrittenSize; // rax
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v20; // eax
  int v21; // edi
  int NewBlock; // eax

  v4 = a4 + a3;
  v6 = a2;
  if ( a4 + a3 < a3 )
  {
    v18 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x9Bu);
    return v18;
  }
  v7 = 0;
  v8 = this + 21;
  if ( !this[21] )
  {
    v20 = CCommandBatch::Create((__int64)this, this + 21);
    v7 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x11Du);
  }
  if ( v7 >= 0 )
  {
    v9 = *v8;
    v10 = v4 + 4;
    v7 = -2147024362;
    if ( v4 + 4 < v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x157u);
      goto LABEL_15;
    }
    v11 = 0LL;
    v12 = (v4 + 7) & 0xFFFFFFFC;
    v13 = -2147024362;
    if ( v12 >= v10 )
    {
      v10 = (v10 + 3) & 0xFFFFFFFC;
      v13 = 0;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x16Fu);
    }
    else
    {
      v14 = (CDataStreamBlock *)*((_QWORD *)v9 + 2);
      if ( v14 )
      {
        v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 8LL);
        if ( (char *)v15 == (char *)CDataStreamBlock::GetWrittenSize )
          WrittenSize = CDataStreamBlock::GetWrittenSize(v14);
        else
          WrittenSize = (unsigned int *)v15();
        v11 = (***((unsigned int (__fastcall ****)(_QWORD))v9 + 2))(*((_QWORD *)v9 + 2)) - *WrittenSize;
      }
      v17 = *((_QWORD *)v9 + 2);
      if ( !v17 || (unsigned int)v11 < v10 )
      {
        v21 = 0x10000;
        if ( *((_DWORD *)v9 + 6) < 0x10000u )
          v21 = *((_DWORD *)v9 + 6);
        if ( v17 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, v11) )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *((_QWORD *)v9 + 2));
          *((_QWORD *)v9 + 2) = 0LL;
        }
        if ( v21 + v10 < v10 )
        {
          v13 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1B9u);
          goto LABEL_33;
        }
        NewBlock = CDataStreamWriter::AllocateNewBlock(v9, v21 + v10);
        v13 = NewBlock;
        if ( NewBlock < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      }
    }
    v7 = v13;
    if ( v13 >= 0 )
    {
LABEL_15:
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x107u);
      v6 = a2;
      goto LABEL_18;
    }
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x159u);
    goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x102u);
LABEL_18:
  v18 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x9Cu);
  }
  else
  {
    CDataStreamWriter::BeginItem(*v8);
    CDataStreamWriter::AddItemData(*v8, v6, a3);
  }
  return v18;
}
