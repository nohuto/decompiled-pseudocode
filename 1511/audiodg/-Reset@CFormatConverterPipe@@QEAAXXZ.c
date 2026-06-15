/*
 * XREFs of ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x1400266CC
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x1400345A8 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14002661C (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CFormatConverterPipe::Reset(CFormatConverterPipe *this)
{
  ATL::CAutoPtr<CPipeInstance>::Free((LPVOID **)this);
  CoTaskMemFree(*((LPVOID *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 24) = 0;
}
