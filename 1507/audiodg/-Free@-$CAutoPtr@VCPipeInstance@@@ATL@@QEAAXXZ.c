/*
 * XREFs of ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14001893C
 * Callers:
 *     ?CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140002280 (-CreateModePipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSTREAM_GROUP_DESCRIPT.c)
 *     ??_GCStreamInstanceNew@@QEAAPEAXI@Z @ 0x14002681C (--_GCStreamInstanceNew@@QEAAPEAXI@Z.c)
 *     ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x140026908 (--1-$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ.c)
 *     ??1CFormatConverterPipe@@QEAA@XZ @ 0x140026914 (--1CFormatConverterPipe@@QEAA@XZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140026940 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14002EEB8 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140034414 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

CPipeInstance *__fastcall ATL::CAutoPtr<CPipeInstance>::Free(CPipeInstance **a1)
{
  CPipeInstance *v2; // rcx
  CPipeInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CPipeInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
