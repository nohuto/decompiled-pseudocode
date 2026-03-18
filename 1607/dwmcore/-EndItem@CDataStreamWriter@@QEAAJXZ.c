/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360
 * Callers:
 *     ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x18001DA30 (-LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpol.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x18001DC80 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x18001E0E0 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z @ 0x18001E630 (-PartitionTelemetryTouchInteractionBegin@CChannel@@UEAAJPEBXI@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800477B4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180047EC0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?AtlasedRectsGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x1800480F0 (-AtlasedRectsGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJIIPEBUMilRectF@@0PEBK@Z @ 0x1800481C0 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJIIPEBUMilRectF@@0PEBK@Z.c)
 *     ?InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180048520 (-InteractionUpdateConfiguration@CChannel@@UEAAJIIW4Enum@InteractionConfigurationUpdateType@@W42I.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x1800491D0 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180049A90 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180049B50 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z @ 0x180049D10 (-RenderDataUpdate@CChannel@@UEAAJIPEAUIRenderDataBuilder@@@Z.c)
 *     ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x18004A3B0 (-ReleaseResource@CChannel@@UEAAJI@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180114E40 (-Geometry2DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z @ 0x180115150 (-MeshGeometry2DUpdate@CChannel@@UEAAJIPEBUMilPoint3F@@IPEBUMilPoint2D@@IPEBKIPEBII@Z.c)
 *     ?PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z @ 0x1801157C0 (-PartitionTelemetryAnimationScenarioBegin@CChannel@@UEAAJPEBXIAEBU_GUID@@@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180115E50 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z @ 0x180115FD0 (-VisualGroupUpdate@CChannel@@UEAAJIPEBIII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int v2; // edx
  int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // rcx
  unsigned int v6; // edi
  __int64 (*v7)(void); // rax
  _DWORD *v8; // rsi
  unsigned int *v9; // rdx
  unsigned int *(__fastcall *v10)(CDataStreamBlock *__hidden); // rax
  unsigned int *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // edi
  unsigned int v15; // esi

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0xCCu);
    return 2147549183LL;
  }
  v2 = *((_DWORD *)this + 10);
  v3 = -2147024362;
  v4 = (v2 + 3) & 0xFFFFFFFC;
  if ( v4 >= v2 )
  {
    *((_DWORD *)this + 10) = v4;
    v3 = 0;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xE0u);
    return (unsigned int)v3;
  }
  v5 = (_DWORD *)*((_QWORD *)this + 2);
  v6 = *((_DWORD *)this + 10) - v2;
  v7 = *(__int64 (**)(void))(*(_QWORD *)v5 + 8LL);
  if ( (char *)v7 == (char *)CDataStreamBlock::GetWrittenSize )
    v8 = v5 + 7;
  else
    v8 = (_DWORD *)v7();
  v9 = (unsigned int *)*((_QWORD *)this + 2);
  v10 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 8LL);
  if ( v10 == CDataStreamBlock::GetWrittenSize )
    v11 = v9 + 7;
  else
    v11 = v10(*((CDataStreamBlock **)this + 2));
  v12 = *v11;
  if ( v12 + v6 < v12 )
  {
    *v8 = -1;
    v14 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x212u);
  }
  else
  {
    *v8 = v12 + v6;
    v13 = *((_DWORD *)this + 7);
    if ( v13 + v6 < v13 )
    {
      *((_DWORD *)this + 7) = -1;
      v14 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x213u);
      v15 = -2147024362;
      goto LABEL_21;
    }
    *((_DWORD *)this + 7) = v13 + v6;
    v14 = 0;
  }
  v15 = v14;
  if ( v14 < 0 )
  {
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xE4u);
    return v15;
  }
  **((_DWORD **)this + 4) = *((_DWORD *)this + 10);
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  return v15;
}
