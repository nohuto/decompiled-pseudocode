/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x18001FF00
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E0510 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType@COcclusionContext@@@Z @ 0x18005BF98 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 162) )
  {
    --*((_DWORD *)this + 162);
  }
  else
  {
    v3 = *((_DWORD *)this + 164);
    if ( v3 )
    {
      v4 = *(_DWORD *)(*((_QWORD *)this + 84) + 4LL * (unsigned int)(v3 - 1));
    }
    else
    {
      v1 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4C0u);
      v4 = v9;
    }
    if ( v4 )
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((char *)this + 656, &v9);
      v8 = *((_DWORD *)this + 2);
      if ( v8 )
        *((_DWORD *)this + 2) = v8 - 1;
    }
    else
    {
      v5 = *((_DWORD *)this + 164);
      if ( v5 )
        *((_DWORD *)this + 164) = v5 - 1;
      v6 = *((_DWORD *)this + 14);
      if ( v6 )
        *((_DWORD *)this + 14) = v6 - 1;
    }
  }
  return v1;
}
