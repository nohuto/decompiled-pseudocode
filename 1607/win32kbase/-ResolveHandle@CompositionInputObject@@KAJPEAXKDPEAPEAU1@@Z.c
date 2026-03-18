/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00485F0
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002FC0 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00046B0 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSink @ 0x1C00491A0 (NtQueryCompositionInputSink.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004B958 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C007ADF0 (NtQueryCompositionInputSinkLuid.c)
 *     NtCompositionSetDropTarget @ 0x1C007B360 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C00F2840 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00F28C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C00F2A30 (NtQueryCompositionInputSinkViewId.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004866C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax

  *a4 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3);
  if ( (int)result >= 0 )
    *a4 = 0LL;
  return result;
}
