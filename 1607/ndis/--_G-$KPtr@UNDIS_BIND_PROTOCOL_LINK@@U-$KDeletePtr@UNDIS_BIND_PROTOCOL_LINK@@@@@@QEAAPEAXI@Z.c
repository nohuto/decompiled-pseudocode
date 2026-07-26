/*
 * XREFs of ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C
 * Callers:
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A3280 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00A3398 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A3564 (--1BindStack@Ndis@@QEAA@XZ.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DE0 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

__int64 *__fastcall KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(v1 + 104);
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v1 + 8));
    ExFreePoolWithTag((PVOID)v1, 0x4C745042u);
  }
  return a1;
}
