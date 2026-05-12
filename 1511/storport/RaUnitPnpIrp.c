/*
 * XREFs of RaUnitPnpIrp @ 0x1C00041C8
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0004130 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     RaUnitQueryInterfaceIrp @ 0x1C000B400 (RaUnitQueryInterfaceIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     Template_pqqp @ 0x1C00271CC (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0027A0C (WPP_SF_qqDD.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00325CC (RaUnitRemoveDeviceIrp.c)
 *     RaUnitQueryDeviceRelationsIrp @ 0x1C00504DC (RaUnitQueryDeviceRelationsIrp.c)
 *     RaUnitIgnorePnpIrp @ 0x1C0050F48 (RaUnitIgnorePnpIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 *     RaUnitQueryIdIrp @ 0x1C005129C (RaUnitQueryIdIrp.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0051378 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00523C0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00544B0 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitSucceedPnpIrp @ 0x1C00546CC (RaUnitSucceedPnpIrp.c)
 *     RaUnitCancelStopDeviceIrp @ 0x1C0057CF0 (RaUnitCancelStopDeviceIrp.c)
 *     RaUnitQueryRemoveDeviceIrp @ 0x1C0057D18 (RaUnitQueryRemoveDeviceIrp.c)
 *     RaUnitQueryStopDeviceIrp @ 0x1C0057D54 (RaUnitQueryStopDeviceIrp.c)
 *     RaUnitStopDeviceIrp @ 0x1C0057E98 (RaUnitStopDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaUnitPnpIrp(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edx
  signed int v7; // edi
  unsigned int MinorFunction; // ebp
  int v9; // ecx
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  unsigned int CapabilitiesIrp; // eax
  unsigned int v13; // edi
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
    if ( MinorFunction > 0x16 || (v10 = 4718720, !_bittest(&v10, MinorFunction)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(v9, v6, (unsigned int)&v15, (_DWORD)a2, MinorFunction, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      a1,
      a2,
      MinorFunction);
  }
  if ( MinorFunction > 8 )
  {
    if ( MinorFunction == 9 )
    {
      CapabilitiesIrp = RaUnitQueryCapabilitiesIrp(a1, a2);
      goto LABEL_30;
    }
    if ( MinorFunction <= 0xB )
    {
      CapabilitiesIrp = RaUnitSucceedPnpIrp(v11, a2);
      goto LABEL_30;
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
        goto LABEL_30;
      case 0x14u:
        CapabilitiesIrp = RaUnitQueryPnpDeviceStateIrp(a1, a2);
        goto LABEL_30;
      case 0xCu:
        CapabilitiesIrp = RaUnitQueryDeviceTextIrp(a1, a2);
        goto LABEL_30;
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
        goto LABEL_30;
    }
    if ( MinorFunction != 23 )
    {
      CapabilitiesIrp = RaUnitIgnorePnpIrp(v11, a2);
      goto LABEL_30;
    }
    CapabilitiesIrp = RaUnitSurpriseRemovalIrp(a1, a2);
LABEL_58:
    v3 = 0;
    goto LABEL_30;
  }
  if ( MinorFunction == 8 )
  {
    CapabilitiesIrp = RaUnitQueryInterfaceIrp(a1, a2);
    goto LABEL_30;
  }
  if ( !MinorFunction )
  {
    CapabilitiesIrp = RaUnitStartDeviceIrp(a1, a2);
    goto LABEL_30;
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
          goto LABEL_30;
        }
        if ( MinorFunction == 5 )
        {
          CapabilitiesIrp = RaUnitQueryStopDeviceIrp(a1, a2);
          goto LABEL_30;
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
          goto LABEL_30;
        }
      }
      CapabilitiesIrp = RaUnitCancelStopDeviceIrp(a1, a2);
      goto LABEL_30;
    }
    CapabilitiesIrp = RaUnitRemoveDeviceIrp(a1, a2);
    goto LABEL_58;
  }
  CapabilitiesIrp = RaUnitQueryRemoveDeviceIrp(a1, a2);
LABEL_30:
  v13 = CapabilitiesIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      a1,
      a2,
      MinorFunction,
      CapabilitiesIrp);
  }
  if ( v3 )
    RaUnitReleaseRemoveLock(a1);
  return v13;
}
