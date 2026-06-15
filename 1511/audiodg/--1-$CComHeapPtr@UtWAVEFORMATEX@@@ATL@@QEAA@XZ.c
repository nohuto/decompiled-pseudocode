/*
 * XREFs of ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x140026558
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$1 @ 0x14001AC90 (_CStreamGroup--_CStreamGroup_--_1_--dtor$1.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$6 @ 0x14001ACE6 (_CStreamGroup--_CStreamGroup_--_1_--dtor$6.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$7 @ 0x14001ACF9 (_CStreamGroup--_CStreamGroup_--_1_--dtor$7.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$1 @ 0x14001AD67 (_CStreamGroup--CStreamGroup_--_1_--dtor$1.c)
 *     _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x14001AFCC (_CAudioDeviceGraph--Initialize_--_1_--dtor$1.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$5 @ 0x14001B699 (_CPipeInstance--_CPipeInstance_--_1_--dtor$5.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$7 @ 0x14001BD84 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$7.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x14001BD90 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
