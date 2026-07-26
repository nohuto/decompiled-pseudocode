/*
 * XREFs of nullDeleteFilterOpenAdapter @ 0x1C001EE00
 * Callers:
 *     ndisMKillOpen @ 0x1C00EC300 (ndisMKillOpen.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 nullDeleteFilterOpenAdapter()
{
  return XRemoveBindingFromLists();
}
