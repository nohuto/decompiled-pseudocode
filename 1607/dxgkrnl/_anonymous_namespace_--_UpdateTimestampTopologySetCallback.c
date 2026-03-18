/*
 * XREFs of _anonymous_namespace_::_UpdateTimestampTopologySetCallback @ 0x1C00DBBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall anonymous_namespace_::_UpdateTimestampTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        void *a2)
{
  return CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(a1);
}
