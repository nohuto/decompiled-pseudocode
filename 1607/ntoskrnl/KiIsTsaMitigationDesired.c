/*
 * XREFs of KiIsTsaMitigationDesired @ 0x1401D9BF0
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401D9B28 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
