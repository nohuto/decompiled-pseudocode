/*
 * XREFs of ??1CFormatConverterPipe@@QEAA@XZ @ 0x140026914
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$10 @ 0x14001BC12 (_CStreamGroup--_CStreamGroup_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall CFormatConverterPipe::~CFormatConverterPipe(LPVOID *this)
{
  CoTaskMemFree(this[1]);
  this[1] = 0LL;
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this);
}
