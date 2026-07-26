/*
 * XREFs of ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00D6F28
 * Callers:
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006883C (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0069940 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00059C8 (ndisQuerySetMiniport.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00683E8 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C006A09C (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ndisRequestDeviceLowPower @ 0x1C0097E18 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 */

__int64 __fastcall ndisRequestNicQuiet(struct _TlgProvider_t *MiniportAdapterHandle, char a2)
{
  void (__fastcall *EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rsi
  enum _DEVICE_POWER_STATE v5; // r15d
  int AnnotationFunc_high; // eax
  enum _DEVICE_POWER_STATE AnnotationFunc; // ecx
  __int128 v8; // xmm0
  int v9; // edx
  int KeywordAll; // ecx
  int SetMiniport; // edi
  int v12; // edi
  unsigned int v13; // edi
  _BYTE v15[248]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[20]; // [rsp+130h] [rbp+30h] BYREF

  EnableCallback = MiniportAdapterHandle[70].EnableCallback;
  memset(v15, 0, sizeof(v15));
  memset(v16, 0, sizeof(v16));
  v5 = PowerDeviceD3;
  ndisCancelWaitWake((__int64)MiniportAdapterHandle);
  AnnotationFunc_high = HIDWORD(MiniportAdapterHandle[1].AnnotationFunc);
  if ( (AnnotationFunc_high & 0x20) != 0 && (AnnotationFunc_high & 0x40) != 0 )
  {
    AnnotationFunc = (enum _DEVICE_POWER_STATE)MiniportAdapterHandle[19].AnnotationFunc;
    if ( (unsigned int)(AnnotationFunc - 2) <= 2 )
    {
      if ( *((_BYTE *)EnableCallback + 378) )
      {
        v8 = *(_OWORD *)&MiniportAdapterHandle[17].RegHandle;
        v9 = 0;
        *(_DWORD *)&v16[16] = MiniportAdapterHandle[17].CallbackContext;
        v5 = AnnotationFunc;
        KeywordAll = MiniportAdapterHandle[17].KeywordAll;
        *(_OWORD *)v16 = v8;
        *(_DWORD *)v16 = 1311360;
        if ( (KeywordAll & 2) != 0 )
          v9 = 2;
        *(_DWORD *)&v16[12] = v9;
        if ( (KeywordAll & 1) != 0 )
          *(_DWORD *)&v16[12] = v9 | 1;
        memset(v15, 0, sizeof(v15));
        *(_DWORD *)&v15[88] |= 8u;
        *(_DWORD *)&v15[8] = 0;
        *(_QWORD *)&v15[104] = &ndisIntReqGeneric;
        *(_DWORD *)v15 = 15466902;
        *(_QWORD *)&v15[40] = v16;
        *(_DWORD *)&v15[32] = -50265847;
        *(_DWORD *)&v15[4] = 1;
        *(_DWORD *)&v15[48] = 20;
        SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v15, 0LL, 0LL);
        if ( SetMiniport )
        {
          NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x58Bu);
          if ( (unsigned __int8)byte_1C0083715 >= 2u )
            WPP_SF_dq(0x18u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, SetMiniport, MiniportAdapterHandle);
        }
        v12 = ndisRequestWaitWake((char *)MiniportAdapterHandle, (PREQUEST_POWER_COMPLETE)ndisNicQuietWaitWakeCallback);
        if ( v12 != 259 )
        {
          NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x597u);
          if ( (unsigned __int8)byte_1C0083715 >= 2u )
            WPP_SF_dq(0x19u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, v12, MiniportAdapterHandle);
        }
      }
    }
  }
  ndisUpdateMiniportCsTrafficStatistics(MiniportAdapterHandle, 1);
  v13 = ndisRequestDeviceLowPower(
          MiniportAdapterHandle,
          v5,
          (PREQUEST_POWER_COMPLETE)ndisNicQuietRequestComplete,
          MiniportAdapterHandle,
          NdisMEventDx_NicQuiet);
  if ( v13 == 259 )
  {
    v13 = 0;
    if ( a2 )
      KeWaitForSingleObject((char *)EnableCallback + 384, Executive, 0, 0, 0LL);
  }
  else
  {
    NdisUnexpectedAoAcError((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, 0x5B6u);
    if ( (unsigned __int8)byte_1C0083715 >= 2u )
      WPP_SF_dq(0x1Au, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, v13, MiniportAdapterHandle);
  }
  return v13;
}
