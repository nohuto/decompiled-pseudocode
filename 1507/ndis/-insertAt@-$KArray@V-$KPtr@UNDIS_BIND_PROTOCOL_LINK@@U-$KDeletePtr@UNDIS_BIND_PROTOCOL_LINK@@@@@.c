/*
 * XREFs of ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A7130
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6E0C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00A7030 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A71D0 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::insertAt(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v13; // rcx

  v3 = *(unsigned int *)(a1 + 8);
  if ( a2 > v3 )
    return 0;
  v7 = *(unsigned int *)(a1 + 4);
  v8 = (unsigned int)(v3 + 1);
  if ( v7 < v8 )
  {
    if ( v8 < 4 )
      v8 = 4LL;
    v13 = ((unsigned int)v7 >> 1) + (unsigned int)v7;
    if ( v8 < v13 )
      v8 = v13;
    if ( !(unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(
                             a1,
                             v8) )
      return 0;
  }
  v9 = *(unsigned int *)(a1 + 8);
  if ( a2 < v9 )
    Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::moveElements(
      a1,
      (unsigned int)a2,
      a2 + 1,
      v9 - a2);
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * a2);
  if ( v10 )
  {
    v11 = *a3;
    *a3 = 0LL;
    *v10 = v11;
  }
  ++*(_DWORD *)(a1 + 8);
  return 1;
}
