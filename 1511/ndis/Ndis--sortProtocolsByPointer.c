/*
 * XREFs of Ndis::sortProtocolsByPointer @ 0x1C00AAD30
 * Callers:
 *     ?insertSortedUnique@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@P6A_NAEBV3@1@Z@Z @ 0x1C00A60A0 (-insertSortedUnique@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00DD504 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::sortProtocolsByPointer(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 104LL) + 8LL < (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a2 + 104LL) + 8LL);
}
