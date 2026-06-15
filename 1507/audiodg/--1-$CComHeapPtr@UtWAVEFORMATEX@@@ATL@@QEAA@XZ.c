/*
 * XREFs of ??1?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@QEAA@XZ @ 0x1400263EC
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$7 @ 0x14001AB14 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$7.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$8 @ 0x14001AB20 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$8.c)
 *     _CPipeInstance::_CPipeInstance_::_1_::dtor$5 @ 0x14001B0D9 (_CPipeInstance--_CPipeInstance_--_1_--dtor$5.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$1 @ 0x14001BB70 (_CStreamGroup--_CStreamGroup_--_1_--dtor$1.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$6 @ 0x14001BBC6 (_CStreamGroup--_CStreamGroup_--_1_--dtor$6.c)
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$7 @ 0x14001BBD9 (_CStreamGroup--_CStreamGroup_--_1_--dtor$7.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$1 @ 0x14001BC40 (_CStreamGroup--CStreamGroup_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<tWAVEFORMATEX>::~CComHeapPtr<tWAVEFORMATEX>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
