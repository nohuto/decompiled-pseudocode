/*
 * XREFs of ndisDeliverNetPnPEventSynchronously @ 0x1C00A1940
 * Callers:
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00A69C0 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ndisNotifyBindFailure @ 0x1C00B3554 (ndisNotifyBindFailure.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00CE160 (ndisIMCheckDeviceInstance.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C00EB930 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     WPP_SF_qqLD @ 0x1C005EF54 (WPP_SF_qqLD.c)
 */

__int64 __fastcall ndisDeliverNetPnPEventSynchronously(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // [rsp+20h] [rbp-18h]
  __int64 v14; // [rsp+28h] [rbp-10h]

  if ( a2 )
    v6 = *(_QWORD *)(a2 + 32);
  else
    v6 = 0LL;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qqd(0xEu, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, a1, a2, *(_DWORD *)(a3 + 8));
  if ( *(_BYTE *)(a1 + 56) < 6u )
  {
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 128);
    if ( v12 )
      v10 = v12(v6, a3 + 8);
    else
      v10 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a3 + 8);
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
    {
      LODWORD(v13) = *(_DWORD *)(a3 + 8);
      WPP_SF_qqd(0x61u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2, v13);
    }
    if ( a2 )
      v8 = *(_QWORD *)(a2 + 32);
    else
      v8 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 128))(v8, a3);
    v10 = v9;
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
    {
      LODWORD(v13) = v7;
      WPP_SF_qqDD(0x62u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a2, v13, v9);
    }
  }
  if ( v10 == 259 )
  {
    KeWaitForSingleObject(*(PVOID *)(a3 + 32), Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)(a3 + 40);
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
  {
    LODWORD(v14) = v10;
    LODWORD(v13) = *(_DWORD *)(a3 + 8);
    WPP_SF_qqLD(a1, a2, a1, a2, v13, v14);
  }
  return v10;
}
