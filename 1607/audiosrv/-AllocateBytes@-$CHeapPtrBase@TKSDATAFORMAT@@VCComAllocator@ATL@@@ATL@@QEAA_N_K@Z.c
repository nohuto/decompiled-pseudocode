/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180087B04
 * Callers:
 *     ??$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180085CB4 (--$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristic.c)
 *     ??$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800863C8 (--$GetComputedDefaultFormat@V_lambda_ea783823a3a088a32542d9fbc7fb427f_@@@CEndpointCharacteristic.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x180089718 (-GetSupportedDataRangeForEndpoint@@YAJPEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z.c)
 * Callees:
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800046F4 (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 */

bool __fastcall ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(_QWORD *a1)
{
  LPVOID v2; // rax

  v2 = ATL::CComAllocator::Allocate(0x68uLL);
  *a1 = v2;
  return v2 != 0LL;
}
