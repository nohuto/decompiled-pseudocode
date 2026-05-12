/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C0004898
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0004430 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00049C4 (RaidAcquireAdapterRemoveLock.c)
 *     RaForwardIrp @ 0x1C000B6C8 (RaForwardIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C0022F48 (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C0022FD0 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C0023C70 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C0023D6C (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0023F08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C00241C0 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C00242F4 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C0024CD0 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0024D3C (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00258CC (RaidAdapterStorageBreakReservationIoctl.c)
 *     Template_pqqq @ 0x1C002725C (Template_pqqq.c)
 *     WPP_SF_qqDD @ 0x1C0027A0C (WPP_SF_qqDD.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0050430 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0056D68 (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  signed int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // ebp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int InfoIoctl; // eax
  unsigned int v11; // edi
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned int v14; // r8d
  int v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+44h] [rbp-34h]
  int v17; // [rsp+4Ch] [rbp-2Ch]

  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v5 = RaidAcquireAdapterRemoveLock();
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( v7 == 315396 || (v8 = v7 - 315412, (unsigned int)v8 <= 0x34) && (v9 = 0x11000011000001LL, _bittest64(&v9, v8)) )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x1000000) != 0 )
        Template_pqqq(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v15,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v7);
    }
    else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000) != 0 )
    {
      Template_pqqq(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v15,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v7);
    }
  }
  if ( v5 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, v5);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
      a1,
      a2,
      HIWORD(v7),
      (v7 >> 2) & 0xFFF);
  }
  if ( v7 > 0x2D1400 )
  {
    switch ( v7 )
    {
      case 0x2D1C00u:
        InfoIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
        break;
      case 0x2D1C94u:
        InfoIoctl = RaidAdapterPowerCapIoctl(a1, a2);
        break;
      case 0x2D5000u:
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) )
        {
          LOBYTE(v4) = **(_BYTE **)(a2 + 24);
          v14 = RaidAdapterResetBus(a1, v4);
        }
        else
        {
          v14 = -1073741811;
        }
        goto LABEL_37;
      case 0x2D5014u:
        InfoIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
        break;
      case 0x2DD200u:
        InfoIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
        break;
      case 0x2DD3C0u:
        InfoIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
        break;
      case 0x2DDC04u:
        InfoIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
        break;
      case 0x2DDC08u:
        InfoIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
        break;
      case 0x32C000u:
        InfoIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
        break;
      default:
        goto LABEL_50;
    }
  }
  else
  {
    switch ( v7 )
    {
      case 0x2D1400u:
        InfoIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
        break;
      case 0x4100Cu:
        InfoIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
        break;
      case 0x41010u:
        InfoIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
        break;
      case 0x4101Cu:
        v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
        *(_BYTE *)(a1 + 106) = 1;
        IoInvalidateDeviceRelations(v13, BusRelations);
        v14 = 0;
LABEL_37:
        InfoIoctl = RaidCompleteRequestEx((PIRP)a2, 0, v14);
        break;
      case 0x4D004u:
        goto LABEL_32;
      case 0x4D008u:
        InfoIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0LL, 0LL, 0, 2);
        break;
      case 0x4D014u:
LABEL_30:
        LOBYTE(v6) = 1;
LABEL_33:
        InfoIoctl = RaidAdapterPassThrough(a1, a2, v6);
        break;
      case 0x4D038u:
        return RaidAdapterMiniportProcessServiceRequest(a1, a2);
      case 0x4D044u:
LABEL_32:
        v6 = 0LL;
        goto LABEL_33;
      case 0x4D048u:
        goto LABEL_30;
      default:
LABEL_50:
        v14 = -1073741637;
        goto LABEL_37;
    }
  }
  v11 = InfoIoctl;
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
      a1,
      a2,
      v7,
      v11);
  }
  return v11;
}
