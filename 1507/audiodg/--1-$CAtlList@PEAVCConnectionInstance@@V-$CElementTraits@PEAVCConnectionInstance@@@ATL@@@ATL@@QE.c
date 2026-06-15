/*
 * XREFs of ??1?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140026300
 * Callers:
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$1 @ 0x14001B090 (_CPipeInstance--_CPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$7 @ 0x14001B0FF (_CPipeInstance--_CPipeInstance_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::~CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(a1);
}
