/*
 * XREFs of ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6FE0
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A71D0 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::append(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // rcx
  char result; // al
  unsigned __int64 v10; // rcx

  v3 = *(_DWORD *)(a1 + 8) + 1;
  v5 = *(unsigned int *)(a1 + 4);
  v6 = v3;
  if ( v5 >= v3 )
    goto LABEL_2;
  if ( v3 < 4uLL )
    v6 = 4LL;
  v10 = ((unsigned int)v5 >> 1) + (unsigned int)v5;
  if ( v6 < v10 )
    v6 = v10;
  result = Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(a1, v6);
  if ( result )
  {
LABEL_2:
    v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned int *)(a1 + 8));
    if ( v7 )
    {
      v8 = *a2;
      *a2 = 0LL;
      *v7 = v8;
    }
    ++*(_DWORD *)(a1 + 8);
    return 1;
  }
  return result;
}
