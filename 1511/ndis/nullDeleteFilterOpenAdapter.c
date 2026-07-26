/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C0014280
 * Callers:
 *     ndisMKillOpen @ 0x1C00E10BC (ndisMKillOpen.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 nullDeleteFilterOpenAdapter()
{
  return XRemoveBindingFromLists();
}
