/*
 * XREFs of KiIsTsaMitigationDesired @ 0x140208C9C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140208BD4 (KiIsKvaShadowNeededForTsa.c)
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
