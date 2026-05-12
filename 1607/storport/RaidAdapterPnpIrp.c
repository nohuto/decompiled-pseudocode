/*
 * XREFs of RaidAdapterPnpIrp @ 0x1C000F7B0
 * Callers:
 *     RaDriverPnpIrp @ 0x1C0001990 (RaDriverPnpIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00022A8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C000F624 (RaidAdapterQueryInterfaceIrp.c)
 *     RaForwardIrp @ 0x1C000F9EC (RaForwardIrp.c)
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C000FA20 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C000FB0C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00277A8 (RaidAdapterQueryIdIrp.c)
 *     Template_pq @ 0x1C002A68C (Template_pq.c)
 *     Template_pqqp @ 0x1C002A84C (Template_pqqp.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C002B114 (WPP_SF_qqDD.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0058020 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterQueryCapabilitiesIrp @ 0x1C0058854 (RaidAdapterQueryCapabilitiesIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00588D0 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C005DED4 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C005E18C (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C005E228 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C005E438 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C005E544 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
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
      if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
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
      &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
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
        if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
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
        if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
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
          if ( (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
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
      if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x200000) != 0 )
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
      InterfaceIrp = RaidAdapterStartDeviceIrp((char *)Context, Irp);
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
      &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
      Context,
      Irp,
      MinorFunction,
      InterfaceIrp);
  }
  if ( v9 )
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)Context[32]);
  return v11;
}
