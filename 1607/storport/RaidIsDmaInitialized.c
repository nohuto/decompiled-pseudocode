/*
 * XREFs of RaidIsDmaInitialized @ 0x1C005AAC8
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C000E9C0 (StorPortGetUncachedExtension.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
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
