/*
 * XREFs of ?TdrIsEnabled@@YA_NXZ @ 0x1C00FCB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool TdrIsEnabled(void)
{
  return g_TdrConfig != 0;
}
