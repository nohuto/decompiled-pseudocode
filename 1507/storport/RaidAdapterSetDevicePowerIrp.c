/*
 * XREFs of RaidAdapterSetDevicePowerIrp @ 0x1C00064A4
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C00060D8 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAdapterPowerUpDevice @ 0x1C0006C90 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0006D38 (RaidAdapterPowerDownDevice.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_DD @ 0x1C0026910 (WPP_SF_DD.c)
 *     Template_qpqcqqqq @ 0x1C002E3F0 (Template_qpqcqqqq.c)
 */

__int64 __fastcall RaidAdapterSetDevicePowerIrp(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT v4; // rcx
  int v5; // edi
  int LowPart; // ebp
  NTSTATUS v7; // eax
  unsigned int v8; // edi
  int v10; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+64h] [rbp-34h]
  int v12; // [rsp+6Ch] [rbp-2Ch]

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, a1, a2);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = *(_DWORD *)(a1 + 268);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    IoGetActivityIdIrp(a2, &v10);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_qpqcqqqq(
        a2->Tail.Overlay.CurrentStackLocation,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&v10,
        *(_DWORD *)(a1 + 56),
        (char)a2,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.QueryFile.FileInformationClass,
        v5,
        LowPart,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
    v4 = WPP_GLOBAL_Control;
  }
  if ( v5 == 1 )
  {
    if ( LowPart > 1 )
    {
      v7 = RaidAdapterPowerDownDevice(a1, a2);
      goto LABEL_7;
    }
  }
  else if ( v5 > 1 && LowPart == 1 )
  {
    v7 = RaidAdapterPowerUpDevice(a1, a2);
    goto LABEL_7;
  }
  if ( v4 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v4->Timer) & 4) != 0 && BYTE1(v4->Timer) >= 4u )
    WPP_SF_DD(v4->AttachedDevice, 18LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, (unsigned int)v5, LowPart);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v7 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_7:
  v8 = v7;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_e109923e46317c4616adabc68839fe07_Traceguids, a1, a2, v7);
  }
  return v8;
}
