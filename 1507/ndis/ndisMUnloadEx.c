/*
 * XREFs of ndisMUnloadEx @ 0x1C009C260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C009C318 (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(PDRIVER_OBJECT DriverObject)
{
  char *DriverObjectExtension; // rbp
  char *v3; // rsi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x62u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DriverObject);
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
    WPP_SF_qqq(0x63u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, DriverObject, DriverObjectExtension, v3);
}
