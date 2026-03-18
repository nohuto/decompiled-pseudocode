/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@UInverseTransformStruct@CHitTestContext@@$09$01$09@@QEBAPEBUInverseTransformStruct@CHitTestContext@@XZ @ 0x18000C188
 * Callers:
 *     ?GetPointInVisualSpaceFromCache@CHitTestContext@@AEAA_NPEAVCVisual@@PEAUD2D_POINT_2F@@PEA_N@Z @ 0x18000B7C0 (-GetPointInVisualSpaceFromCache@CHitTestContext@@AEAA_NPEAVCVisual@@PEAUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CHitTestContext::InverseTransformStruct,10,2,10>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 40LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
