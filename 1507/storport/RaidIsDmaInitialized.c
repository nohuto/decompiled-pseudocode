/*
 * XREFs of RaidIsDmaInitialized @ 0x1C004FC3C
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C0008CA0 (StorPortGetUncachedExtension.c)
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return *a1 != 0LL;
  return result;
}
