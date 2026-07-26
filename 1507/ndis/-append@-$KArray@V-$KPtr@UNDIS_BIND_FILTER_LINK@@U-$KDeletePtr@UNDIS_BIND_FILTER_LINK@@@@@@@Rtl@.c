/*
 * XREFs of ?append@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0F2C
 * Callers:
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C009D65C (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00B2478 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 * Callees:
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A1068 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::append(
        __int64 a1,
        __int64 *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx

  if ( !(unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow(
                           a1,
                           (unsigned int)(*(_DWORD *)(a1 + 8) + 1)) )
    return 0;
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 8));
  if ( v4 )
  {
    v5 = *a2;
    *a2 = 0LL;
    *v4 = v5;
  }
  ++*(_DWORD *)(a1 + 8);
  return 1;
}
