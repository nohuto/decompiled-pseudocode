/*
 * XREFs of GetBaseObject @ 0x1C0015AAC
 * Callers:
 *     ParseNameObj @ 0x1C0015A18 (ParseNameObj.c)
 *     DerefOf @ 0x1C0016C80 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018E08 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 58) == 128 )
    a1 = *(_QWORD *)(a1 + 72);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 104));
  return a1;
}
