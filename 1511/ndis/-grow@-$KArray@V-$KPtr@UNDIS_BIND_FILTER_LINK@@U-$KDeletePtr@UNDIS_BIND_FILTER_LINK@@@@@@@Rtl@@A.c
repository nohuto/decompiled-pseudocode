/*
 * XREFs of ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5164
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A24B4 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A5034 (-append@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A5EE8 (--0BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(unsigned int *)(a1 + 4);
  if ( v2 >= a2 )
    return 1;
  if ( a2 < 4 )
    a2 = 4LL;
  if ( a2 < (unsigned int)v2 + ((unsigned int)v2 >> 1) )
    a2 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  return Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(a1, a2);
}
