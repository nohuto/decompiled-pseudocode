/*
 * XREFs of ndisSetDevicePowerOnComplete @ 0x1C0012780
 * Callers:
 *     ndisSetDevicePower @ 0x1C0011174 (ndisSetDevicePower.c)
 * Callees:
 *     ?NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0012814 (-NdisTraceLoggingCompletedD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     ndisQueueWorkItem @ 0x1C001B848 (ndisQueueWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSetDevicePowerOnComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx

  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(a2 + 48);
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_qD(76LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3, v5);
  ndisLogMiniportEvent(a3, 12LL);
  NdisTraceLoggingCompletedD0State((struct _NDIS_MINIPORT_BLOCK *)a3, v5);
  LOBYTE(v6) = 12;
  ndisReferenceMiniportNoCheck(a3, v6);
  if ( (*(_DWORD *)(a3 + 120) & 0x80u) != 0 )
    KeResetEvent(*(PRKEVENT *)(a3 + 5472));
  *(_QWORD *)(a3 + 5568) = a2;
  ndisQueueWorkItem((PLIST_ENTRY)(a3 + 5504));
  if ( (unsigned __int8)byte_1C00895D5 >= 4u )
    WPP_SF_q(77LL, &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids, a3);
  return 3221225494LL;
}
