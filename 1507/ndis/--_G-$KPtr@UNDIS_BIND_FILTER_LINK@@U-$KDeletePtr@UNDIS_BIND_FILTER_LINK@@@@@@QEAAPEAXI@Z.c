/*
 * XREFs of ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00C550C
 * Callers:
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00E2F80 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

__int64 *__fastcall KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
        __int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref((volatile signed __int32 **)(v1 + 104));
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v1 + 8));
    ExFreePoolWithTag((PVOID)v1, 0x4C6C4642u);
  }
  return a1;
}
