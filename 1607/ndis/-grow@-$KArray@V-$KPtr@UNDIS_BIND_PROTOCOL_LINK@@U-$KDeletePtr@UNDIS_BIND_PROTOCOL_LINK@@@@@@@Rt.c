/*
 * XREFs of ?grow@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A3364
 * Callers:
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A31B0 (-append@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@.c)
 *     ?insertAt@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A3480 (-insertAt@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A3840 (--0BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::grow(
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
  return Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(a1, a2);
}
