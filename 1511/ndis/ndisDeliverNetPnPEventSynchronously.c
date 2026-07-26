/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00A5660
 * Callers:
 *     ndisNotifyBindFailure @ 0x1C0099B5C (ndisNotifyBindFailure.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A0290 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00C7570 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPNotifyBinding @ 0x1C00E3EEC (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EBF10 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C005E8B4 (WPP_SF_qqLD.c)
 *     ndisInvokeNetPnPEvent @ 0x1C00A56E4 (ndisInvokeNetPnPEvent.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  __int64 v11; // [rsp+20h] [rbp-18h]

  if ( a2 )
    v6 = *(_QWORD *)(a2 + 32);
  else
    v6 = 0LL;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qqd(0xEu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a1, a2, *(_DWORD *)(a3 + 8));
  if ( *(_BYTE *)(a1 + 56) >= 6u )
  {
    v7 = ndisInvokeNetPnPEvent(a1, a2, a3);
LABEL_7:
    v8 = v7;
    goto LABEL_8;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 128);
  if ( v10 )
  {
    v7 = v10(v6, a3 + 8);
    goto LABEL_7;
  }
  v8 = 0;
LABEL_8:
  if ( v8 == 259 )
  {
    KeWaitForSingleObject(*(PVOID *)(a3 + 32), Executive, 0, 0, 0LL);
    v8 = *(_DWORD *)(a3 + 40);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
  {
    LODWORD(v11) = *(_DWORD *)(a3 + 8);
    WPP_SF_qqLD(a1, a2, a1, a2, v11, v8);
  }
  return v8;
}
