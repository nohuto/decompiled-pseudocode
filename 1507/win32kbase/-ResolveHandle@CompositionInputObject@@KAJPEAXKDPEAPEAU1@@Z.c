/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0013050
 * Callers:
 *     NtDuplicateCompositionInputSink @ 0x1C0003130 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C0014B20 (NtQueryCompositionInputSinkLuid.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z @ 0x1C001CBC0 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@IEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C001DA60 (NtQueryCompositionInputSink.c)
 *     NtUpdateInputSinkTransforms @ 0x1C00200A0 (NtUpdateInputSinkTransforms.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C00DEA30 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00DEAB0 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C00DEC40 (NtQueryCompositionInputSinkViewId.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
