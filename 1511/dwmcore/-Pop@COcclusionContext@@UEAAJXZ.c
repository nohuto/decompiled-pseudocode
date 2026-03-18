/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x180055D90
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800FDF30 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800A482C (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAHPEAW4StackStateType.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  unsigned int v1; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  __int64 result; // rax
  int v8; // ecx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 162) )
  {
    --*((_DWORD *)this + 162);
    return v1;
  }
  v3 = *((_DWORD *)this + 164);
  if ( v3 )
  {
    v4 = *(_DWORD *)(*((_QWORD *)this + 84) + 4LL * (unsigned int)(v3 - 1));
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x4D4u);
    v4 = v9;
  }
  if ( !v4 )
  {
    v5 = *((_DWORD *)this + 164);
    if ( v5 )
      *((_DWORD *)this + 164) = v5 - 1;
    v6 = *((_DWORD *)this + 14);
    if ( v6 )
      *((_DWORD *)this + 14) = v6 - 1;
    return v1;
  }
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((char *)this + 656, &v9);
  v8 = *((_DWORD *)this + 2);
  result = v1;
  if ( v8 )
    *((_DWORD *)this + 2) = v8 - 1;
  return result;
}
