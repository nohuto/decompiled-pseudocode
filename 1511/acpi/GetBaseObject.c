/*
 * XREFs of GetBaseObject @ 0x1C0016AE0
 * Callers:
 *     DerefOf @ 0x1C000CCE0 (DerefOf.c)
 *     ParseNameObj @ 0x1C0016A2C (ParseNameObj.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018D3C (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C0043910 (DebugRunMethod.c)
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
