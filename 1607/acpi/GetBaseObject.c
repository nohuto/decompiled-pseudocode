/*
 * XREFs of GetBaseObject @ 0x1C001EDC0
 * Callers:
 *     ParseNameObj @ 0x1C001DEBC (ParseNameObj.c)
 *     DerefOf @ 0x1C001EF00 (DerefOf.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0020F88 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
