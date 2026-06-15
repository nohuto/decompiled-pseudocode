/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x18006557C
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x18004A288 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
