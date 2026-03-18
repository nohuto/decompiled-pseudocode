/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00763A0
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C0002FC0 (NtCompositionSetDropTarget.c)
 *     NtUpdateInputSinkTransforms @ 0x1C00030E0 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0004D40 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSink @ 0x1C004B4F0 (NtQueryCompositionInputSink.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C004EB30 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C0077380 (NtQueryCompositionInputSinkLuid.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C00E0800 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00E0880 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C00E09F0 (NtQueryCompositionInputSinkViewId.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0039408 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 3, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
