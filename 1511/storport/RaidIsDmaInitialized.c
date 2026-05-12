/*
 * XREFs of RaidIsDmaInitialized @ 0x1C005399C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0012168 (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C0012600 (StorPortGetUncachedExtension.c)
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
