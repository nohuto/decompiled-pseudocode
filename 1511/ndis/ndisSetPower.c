/*
 * XREFs of ndisSetPower @ 0x1C0097B38
 * Callers:
 *     ndisPowerDispatch @ 0x1C0024480 (ndisPowerDispatch.c)
 *     ndisPowerIrpWorker @ 0x1C00CE960 (ndisPowerIrpWorker.c)
 * Callees:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 */

__int64 __fastcall ndisSetPower(PIRP Irp, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v7; // ecx
  unsigned int v8; // eax

  v4 = 0;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qq(0x65u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, Irp);
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 )
  {
    if ( v7 != 1 )
      goto LABEL_7;
    v8 = ndisSetDevicePower(Irp, a2, (enum _NDIS_DEVICE_POWER_STATE)*(_DWORD *)(a2 + 24), a3);
  }
  else
  {
    v8 = ndisSetSystemPower(Irp);
  }
  v4 = v8;
LABEL_7:
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x66u, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, v4);
  ndisDereferencePackage((__int64)&ndisPkgs);
  return v4;
}
