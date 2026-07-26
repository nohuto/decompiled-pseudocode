/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C000FBE4
 * Callers:
 *     ndisMKillOpen @ 0x1C00E6E7C (ndisMKillOpen.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 nullDeleteFilterOpenAdapter()
{
  return XRemoveBindingFromLists();
}
