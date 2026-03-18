/*
 * XREFs of RIMHandleTTMDeviceArrival @ 0x1C000C65C
 * Callers:
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dqqdS @ 0x1C0082064 (WPP_RECORDER_SF_dqqdS.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_d @ 0x1C00D1F58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qdSD @ 0x1C00D8F40 (WPP_RECORDER_SF_qdSD.c)
 */

__int64 __fastcall RIMHandleTTMDeviceArrival(__int64 a1)
{
  unsigned int v1; // esi
  int v3; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // al
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx

  v1 = 0;
  if ( !gbUseTTM || *(_BYTE *)(a1 + 48) == 3 )
  {
    v3 = 0;
  }
  else
  {
    v3 = RawInputManagerDeviceObjectReference(*(_QWORD *)(a1 + 32));
    if ( v3 >= 0 )
    {
      v8 = *(_BYTE *)(a1 + 48);
      if ( v8 != 3 )
      {
        v1 = RimDeviceTypeToRimInputType(a1, v8);
        if ( (*(_DWORD *)(a1 + 184) & 0x800) != 0 )
          v1 |= 0x80000000;
      }
      WPP_RECORDER_SF_dqqdS(WPP_GLOBAL_Control->DeviceExtension, v5, v6, v7);
      v9 = TtmNotifyDeviceArrival(2LL, a1, &gTTMDevCallbacks, v1);
      v3 = v9;
      if ( v9 < 0 )
      {
        gbUseTTM = 0;
        if ( gbTtmEnabled )
        {
          WPP_RECORDER_SF_qdSD(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            a1 + 208,
            a1,
            *(_BYTE *)(a1 + 48),
            *(_QWORD *)(a1 + 216),
            v9);
          DbgPrintRIMAlways("rimttm:TtmNotifyDeviceArrival FAILED for pRimDev=%p type=%d ustrName=%ws! Status=%08x\n");
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v13,
            2,
            12,
            (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
            gbUseTTM);
        }
        ObfDereferenceObject(*(PVOID *)(a1 + 32));
      }
    }
  }
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    13,
    (__int64)&WPP_9f5bb04cded5391c7b821cb8780be1fa_Traceguids,
    v3);
  return (unsigned int)v3;
}
