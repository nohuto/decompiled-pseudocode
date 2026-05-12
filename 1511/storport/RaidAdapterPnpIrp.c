/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C000B48C
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0004130 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00049C4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C000B300 (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardIrp @ 0x1C000B6C8 (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C000B6FC (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000B7E8 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00243BC (RaidAdapterQueryIdIrp.c)
 *     Template_pq @ 0x1C002700C (Template_pq.c)
 *     Template_pqqp @ 0x1C00271CC (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0027A0C (WPP_SF_qqDD.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0050D74 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C0050F58 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C0050FD4 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0056B80 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0056E38 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0056ED4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00570E0 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00571E4 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0057390 (RaidAdapterSurpriseRemovalIrp.c)
 */

__int64 __fastcall RaidAdapterPnpIrp(_QWORD *Context, PIRP Irp)
{
  int v4; // edx
  signed int v5; // esi
  unsigned int MinorFunction; // r14d
  int v7; // ecx
  int v8; // eax
  char v9; // r15
  unsigned int InterfaceIrp; // eax
  unsigned int v11; // esi
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
    if ( MinorFunction > 0x16 || (v8 = 4718720, !_bittest(&v8, MinorFunction)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x200000) != 0 )
        Template_pqqp(v7, v4, (unsigned int)&v14, (_DWORD)Irp, MinorFunction, 0, Context[1]);
    }
  }
  if ( v5 < 0 && (v5 != -1073741738 || MinorFunction != 2 || *((_DWORD *)Context + 22) != 5) )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, v5);
  }
  v9 = 1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      12LL,
      &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
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
        v9 = 0;
        InterfaceIrp = RaidAdapterSurpriseRemovalIrp(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
        v9 = 0;
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
    goto LABEL_13;
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
      v9 = 0;
      InterfaceIrp = RaidAdapterRemoveDeviceIrp(Context, Irp);
      break;
    case 3u:
      goto LABEL_52;
    case 4u:
      InterfaceIrp = RaidAdapterStopDeviceIrp(Context, Irp);
      break;
    case 5u:
      InterfaceIrp = RaidAdapterQueryStopDeviceIrp(Context, Irp);
      break;
    default:
LABEL_52:
      InterfaceIrp = RaidAdapterCancelRemoveDeviceIrp(Context, Irp);
      break;
  }
LABEL_13:
  v11 = InterfaceIrp;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      13LL,
      &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
  return v11;
}
