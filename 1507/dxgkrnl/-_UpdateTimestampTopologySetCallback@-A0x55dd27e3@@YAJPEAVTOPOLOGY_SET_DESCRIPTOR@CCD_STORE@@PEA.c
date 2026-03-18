/*
 * XREFs of ?_UpdateTimestampTopologySetCallback@?A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00BBBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall `anonymous namespace'::_UpdateTimestampTopologySetCallback(
        _anonymous_namespace_ *this,
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a2,
        void *a3)
{
  return CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
}
