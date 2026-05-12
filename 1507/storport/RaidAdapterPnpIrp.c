/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C00092D4
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0003380 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C0003AD8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0009170 (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardIrp @ 0x1C00094B4 (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00094E8 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00095D4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     RaidAdapterQueryIdIrp @ 0x1C0021E18 (RaidAdapterQueryIdIrp.c)
 *     Template_pq @ 0x1C0024F2C (Template_pq.c)
 *     Template_pqqp @ 0x1C00250EC (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0025920 (WPP_SF_qqDD.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C004D250 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C004D2CC (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0052C18 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0052ED0 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0052F6C (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0053170 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0053274 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0053420 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(_QWORD *Context, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // r14d
  char v7; // r15
  unsigned int InterfaceIrp; // eax
  unsigned int v9; // esi
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+4Ch] [rbp-24h]
  int v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+54h] [rbp-1Ch]
  int v19; // [rsp+5Ch] [rbp-14h]

  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v5 = RaidAcquireAdapterRemoveLock((__int64)Context);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v14);
    if ( MinorFunction > 0x16 || (v12 = 4718720, !_bittest(&v12, MinorFunction)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(v11, v4, (unsigned int)&v14, (_DWORD)Irp, MinorFunction, 0, Context[1]);
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *((_DWORD *)Context + 22) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v7 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      Context,
      Irp,
      MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        InterfaceIrp = RaidAdapterQueryInterfaceIrp(Context, Irp);
        break;
      case 9u:
        InterfaceIrp = RaidAdapterQueryCapabilitiesIrp(Context, Irp);
        break;
      case 0xDu:
        InterfaceIrp = RaidAdapterFilterResourceRequirementsIrp(Context, Irp);
        break;
      case 0x13u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            19,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            Context[1]);
        InterfaceIrp = RaidAdapterQueryIdIrp(Context, Irp);
        break;
      case 0x14u:
        InterfaceIrp = RaidAdapterQueryPnpDeviceStateIrp(Context, Irp);
        break;
      case 0x16u:
        if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
          Template_pqqp(
            Irp->Tail.Overlay.CurrentStackLocation,
            v4,
            (unsigned int)&v14,
            (_DWORD)Irp,
            22,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            Context[1]);
        InterfaceIrp = RaidAdapterDeviceUsageNotificationIrp(Context, Irp);
        break;
      case 0x17u:
        v7 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
        v7 = 0;
        if ( StorEtwLoggingEnabled )
        {
          v17 = 0;
          v18 = 0LL;
          v19 = 0;
          IoGetActivityIdIrp(Irp, &v17);
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
            Template_pq(v13, &EventPnpRequestComplete, &v17, Irp, Irp->IoStatus.Status);
        }
        InterfaceIrp = RaForwardIrp(Context[3], Irp);
        break;
    }
    goto LABEL_9;
  }
  switch ( MinorFunction )
  {
    case 7u:
      if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(
          Irp->Tail.Overlay.CurrentStackLocation,
          v4,
          (unsigned int)&v14,
          (_DWORD)Irp,
          7,
          Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          Context[1]);
      InterfaceIrp = RaidAdapterQueryDeviceRelationsIrp(Context, Irp);
      break;
    case 0u:
      InterfaceIrp = RaidAdapterStartDeviceIrp(Context, Irp);
      break;
    case 1u:
      InterfaceIrp = RaidAdapterQueryRemoveDeviceIrp(Context, Irp);
      break;
    case 2u:
      v7 = 0;
      InterfaceIrp = RaidAdapterRemoveDeviceIrp(Context, Irp);
      break;
    case 3u:
      goto LABEL_46;
    case 4u:
      InterfaceIrp = RaidAdapterStopDeviceIrp(Context, Irp);
      break;
    case 5u:
      InterfaceIrp = RaidAdapterQueryStopDeviceIrp(Context, Irp);
      break;
    default:
LABEL_46:
      InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(Context, Irp);
      break;
  }
LABEL_9:
  v9 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v7 )
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
  return v9;
}
