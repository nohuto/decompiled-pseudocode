/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180005AD8
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x18002239F (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CProcess::_CProcess_::_1_::dtor$0 @ 0x180022492 (_CProcess--_CProcess_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
