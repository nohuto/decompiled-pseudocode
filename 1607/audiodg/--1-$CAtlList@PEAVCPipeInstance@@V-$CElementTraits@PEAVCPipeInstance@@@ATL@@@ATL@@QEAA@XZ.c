/*
 * XREFs of ??1?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x14002537C
 * Callers:
 *     _CAudioDeviceGraph::_CAudioDeviceGraph_::_1_::dtor$3 @ 0x14001AC21 (_CAudioDeviceGraph--_CAudioDeviceGraph_--_1_--dtor$3.c)
 *     _CAudioDeviceGraph::CAudioDeviceGraph_::_1_::dtor$3 @ 0x14001ACC9 (_CAudioDeviceGraph--CAudioDeviceGraph_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::~CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(a1);
}
