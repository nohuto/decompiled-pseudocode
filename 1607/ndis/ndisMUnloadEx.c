/*
 * XREFs of ndisMUnloadEx @ 0x1C00B0720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C434 (WPP_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C00B07D8 (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(PDRIVER_OBJECT DriverObject)
{
  char *DriverObjectExtension; // rbp
  char *v3; // rsi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x62u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)DriverObject);
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
  v3 = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload(DriverObjectExtension, DriverObject);
  if ( v3 )
    ndisMInvokeDriverUnload(v3, DriverObject);
  if ( DriverObjectExtension )
  {
    KeWaitForSingleObject(DriverObjectExtension + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(DriverObjectExtension + 368));
  }
  if ( v3 )
  {
    KeWaitForSingleObject(v3 + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(v3 + 368));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x63u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, DriverObject, DriverObjectExtension, v3);
}
