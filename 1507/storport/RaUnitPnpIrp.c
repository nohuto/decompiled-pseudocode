/*
 * XREFs of RaUnitPnpIrp @ 0x1C0003418
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0003380 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C0009248 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     Template_pqqp @ 0x1C00250EC (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0025920 (WPP_SF_qqDD.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C0031338 (RaUnitRemoveDeviceIrp.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C004C4A0 (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C004D240 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C004D6C0 (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C004D79C (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0050430 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C005064C (RaUnitSucceedPnpIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0053DB0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0053DD8 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0053E14 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C0053F58 (RaUnitStopDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaUnitPnpIrp(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edx
  signed int v7; // edi
  unsigned int MinorFunction; // ebp
  PDEVICE_OBJECT v9; // rcx
  unsigned int CapabilitiesIrp; // eax
  unsigned int v11; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+44h] [rbp-44h]
  int v17; // [rsp+4Ch] [rbp-3Ch]

  v15 = 0;
  v3 = 1;
  v16 = 0LL;
  LOBYTE(a3) = 1;
  v17 = 0;
  v7 = RaUnitAcquireRemoveLock(a1, a2, a3);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( MinorFunction > 0x16 || (v14 = 4718720, !_bittest(&v14, MinorFunction)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(v13, v6, (unsigned int)&v15, (_DWORD)a2, MinorFunction, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      a1,
      a2,
      MinorFunction);
  }
  if ( MinorFunction > 8 )
  {
    if ( MinorFunction == 9 )
    {
      CapabilitiesIrp = RaUnitQueryCapabilitiesIrp(a1, a2);
      goto LABEL_24;
    }
    if ( MinorFunction <= 0xB )
    {
      CapabilitiesIrp = RaUnitSucceedPnpIrp(v9, a2);
      goto LABEL_24;
    }
    switch ( MinorFunction )
    {
      case 0x13u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)&v15,
            (_DWORD)a2,
            19,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        CapabilitiesIrp = RaUnitQueryIdIrp(a1, a2);
        goto LABEL_24;
      case 0x14u:
        CapabilitiesIrp = RaUnitQueryPnpDeviceStateIrp(a1, a2);
        goto LABEL_24;
      case 0xCu:
        CapabilitiesIrp = RaUnitQueryDeviceTextIrp(a1, a2);
        goto LABEL_24;
      case 0x16u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)&v15,
            (_DWORD)a2,
            22,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(a1 + 8));
        CapabilitiesIrp = RaUnitDeviceUsageNotificationIrp(a1, a2);
        goto LABEL_24;
    }
    if ( MinorFunction != 23 )
    {
      CapabilitiesIrp = RaUnitIgnorePnpIrp(v9, a2);
      goto LABEL_24;
    }
    CapabilitiesIrp = RaUnitSurpriseRemovalIrp(a1, a2);
LABEL_54:
    v3 = 0;
    goto LABEL_24;
  }
  if ( MinorFunction == 8 )
  {
    CapabilitiesIrp = RaUnitQueryInterfaceIrp(a1, a2);
    goto LABEL_24;
  }
  if ( !MinorFunction )
  {
    CapabilitiesIrp = RaUnitStartDeviceIrp(a1, a2);
    goto LABEL_24;
  }
  if ( MinorFunction != 1 )
  {
    if ( MinorFunction != 2 )
    {
      if ( MinorFunction != 3 )
      {
        if ( MinorFunction == 4 )
        {
          CapabilitiesIrp = RaUnitStopDeviceIrp(a1, a2);
          goto LABEL_24;
        }
        if ( MinorFunction == 5 )
        {
          CapabilitiesIrp = RaUnitQueryStopDeviceIrp(a1, a2);
          goto LABEL_24;
        }
        if ( MinorFunction != 6 )
        {
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
            Template_pqqp(
              a2->Tail.Overlay.CurrentStackLocation,
              v6,
              (unsigned int)&v15,
              (_DWORD)a2,
              7,
              a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
              *(_QWORD *)(a1 + 8));
          CapabilitiesIrp = RaUnitQueryDeviceRelationsIrp(a1, a2);
          goto LABEL_24;
        }
      }
      CapabilitiesIrp = RaUnitCancelStopDeviceIrp(a1, a2);
      goto LABEL_24;
    }
    CapabilitiesIrp = RaUnitRemoveDeviceIrp(a1, a2);
    goto LABEL_54;
  }
  CapabilitiesIrp = RaUnitQueryRemoveDeviceIrp(a1, a2);
LABEL_24:
  v11 = CapabilitiesIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_0a9d81cc67956adf3a94d0464afc2bb3_Traceguids,
      a1,
      a2,
      MinorFunction,
      CapabilitiesIrp);
  }
  if ( v3 )
    RaUnitReleaseRemoveLock(a1);
  return v11;
}
