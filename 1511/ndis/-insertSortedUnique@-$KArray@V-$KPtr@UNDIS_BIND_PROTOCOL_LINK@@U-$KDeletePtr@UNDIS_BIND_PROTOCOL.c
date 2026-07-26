/*
 * XREFs of ?insertSortedUnique@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@P6A_NAEBV3@1@Z@Z @ 0x1C00A60A0
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A63F4 (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 * Callees:
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6054 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6218 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     Ndis::sortProtocolsByPointer @ 0x1C00AAD30 (Ndis--sortProtocolsByPointer.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertSortedUnique(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( !*(_DWORD *)(a1 + 8) )
    return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1, a2);
  while ( (unsigned __int8)Ndis::sortProtocolsByPointer(*(_QWORD *)(a1 + 16) + 8 * v2, a2) )
  {
    if ( ++v2 >= (unsigned __int64)*(unsigned int *)(a1 + 8) )
      return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(a1, a2);
  }
  if ( (unsigned __int8)Ndis::sortProtocolsByPointer(a2, *(_QWORD *)(a1 + 16) + 8 * v2) )
    return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(a1, v2, a2);
  else
    return 1;
}
