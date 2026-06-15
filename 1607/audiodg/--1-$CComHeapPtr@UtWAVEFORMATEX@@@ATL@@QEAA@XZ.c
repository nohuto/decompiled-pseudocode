/*
 * XREFs of ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x1400252A0
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$1 @ 0x14001A620 (_CStreamGroup--_CStreamGroup_--_1_--dtor$1.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$6 @ 0x14001A676 (_CStreamGroup--_CStreamGroup_--_1_--dtor$6.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$7 @ 0x14001A689 (_CStreamGroup--_CStreamGroup_--_1_--dtor$7.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$1 @ 0x14001A6F7 (_CStreamGroup--CStreamGroup_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::InitializePump_::_1_::dtor$2 @ 0x14001AB78 (_CAudioDeviceGraph--InitializePump_--_1_--dtor$2.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x14001AB9C (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$15 @ 0x14001AE44 (_CPipeInstance--InitializeAPOInterfaces_--_1_--dtor$15.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$5 @ 0x14001B1E9 (_CPipeInstance--_CPipeInstance_--_1_--dtor$5.c)
 *     _CAPOExceptionWrapper::_CAPOExceptionWrapper_::_1_::dtor$0 @ 0x14001B5F5 (_CAPOExceptionWrapper--_CAPOExceptionWrapper_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$7 @ 0x14001B744 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$7.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x14001B750 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$8.c)
 *     _APOTrackAndLogException_::_1_::dtor$0 @ 0x140033E8B (_APOTrackAndLogException_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
