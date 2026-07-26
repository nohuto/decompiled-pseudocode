/*
 * XREFs of ndisPowerIrpWorker @ 0x1C00CE960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qs @ 0x1C005F140 (WPP_SF_qs.c)
 *     WPP_SF_qsD @ 0x1C005F1A4 (WPP_SF_qsD_ea_1C005F1A4.c)
 *     ndisSetPower @ 0x1C0097B38 (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C00DF930 (ndisQueryPower.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 DeviceExtension; // rdi
  const char *v5; // r9
  unsigned int Power; // eax
  const char *v7; // r9
  int v8; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (__int64)CurrentStackLocation->DeviceObject->DeviceExtension;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
  {
    v5 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v5 = "QUERY";
    WPP_SF_qs(0x8Bu, a2, DeviceExtension, v5);
  }
  if ( CurrentStackLocation->MinorFunction == 3 )
    Power = ndisQueryPower(Irp);
  else
    Power = ndisSetPower(Irp, (__int64)CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && (unsigned __int8)byte_1C0083715 >= 2u )
  {
    v7 = "Set";
    v8 = Power;
    if ( CurrentStackLocation->MinorFunction != 2 )
      v7 = "Query";
    WPP_SF_qsD(Power, 3221225472LL, DeviceExtension, v7, v8);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu);
}
