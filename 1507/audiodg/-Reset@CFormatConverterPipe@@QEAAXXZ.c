/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140026940
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140034414 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(CFormatConverterPipe *this)
{
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this);
  CoTaskMemFree(*((LPVOID *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 24) = 0;
}
