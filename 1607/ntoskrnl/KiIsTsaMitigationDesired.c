/*
 * XREFs of KiIsTsaMitigationDesired @ 0x1401D9DC4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x1401D9CFC (KiIsKvaShadowNeededForTsa.c)
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
