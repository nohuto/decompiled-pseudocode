/*
 * XREFs of ??1?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140025294
 * Callers:
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$1 @ 0x14001B1A0 (_CPipeInstance--_CPipeInstance_--_1_--dtor$1.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$7 @ 0x14001B20F (_CPipeInstance--_CPipeInstance_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::~CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(a1);
}
