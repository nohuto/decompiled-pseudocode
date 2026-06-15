/*
 * XREFs of ??1CComBSTR@ATL@@QEAA@XZ @ 0x18004FAE8
 * Callers:
 *     _CAppAudioSessionId::CalculateStaticId_::_1_::dtor$1 @ 0x18003C428 (_CAppAudioSessionId--CalculateStaticId_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComBSTR::~CComBSTR(BSTR *this)
{
  SysFreeString(*this);
}
