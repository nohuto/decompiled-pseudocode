/*
 * XREFs of ndisWmiEnableEvents @ 0x1C00A7F7C
 * Callers:
 *     ndisWMIDispatch @ 0x1C00A7D9C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C001A4CC (ndisWmiGetGuid.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisWmiEnableEvents(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v18 = 0LL;
  v5 = byte_1C0085319;
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
  {
    WPP_SF_q(0x43u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
    v5 = byte_1C0085319;
  }
  ndisWmiGetGuid(&v18, a1, a2, 0);
  if ( v18 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_BIND.Data4;
    if ( !v6 )
      goto LABEL_39;
    v7 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1 )
      v7 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_UNBIND.Data4;
    if ( !v7 )
      goto LABEL_39;
    v8 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1 )
      v8 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data4;
    if ( !v8 )
      goto LABEL_39;
    v9 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1 )
      v9 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data4;
    if ( !v9 )
      goto LABEL_39;
    v10 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1 )
      v10 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data4;
    if ( !v10 )
      goto LABEL_39;
    v11 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1 )
      v11 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data4;
    if ( !v11 )
      goto LABEL_39;
    v12 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1 )
      v12 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data4;
    if ( !v12 )
      goto LABEL_39;
    v13 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1 )
      v13 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data4;
    if ( !v13 )
      goto LABEL_39;
    v14 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1 )
      v14 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data4;
    if ( !v14 )
      goto LABEL_39;
    v15 = *a2 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1;
    if ( *a2 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1 )
      v15 = a2[1] - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data4;
    if ( v15 )
    {
      v16 = *(_DWORD *)(v18 + 24);
      if ( (v16 & 2) != 0 )
        *(_DWORD *)(v18 + 24) = v16 | 0x80000000;
      else
        v2 = -1073741808;
    }
    else
    {
LABEL_39:
      *(_DWORD *)(v18 + 24) |= 0x80000000;
    }
  }
  else
  {
    if ( (unsigned __int8)v5 >= 2u )
    {
      WPP_SF_q(0x44u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1);
      v5 = byte_1C0085319;
    }
    v2 = -1073741811;
  }
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_qD(0x45u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a1, v2);
  return v2;
}
