/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x1800052E8
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$0 @ 0x1800254EB (_CProcess--CProcess_--_1_--dtor$0.c)
 *     _CProcess::_CProcess_::_1_::dtor$0 @ 0x1800255D7 (_CProcess--_CProcess_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
