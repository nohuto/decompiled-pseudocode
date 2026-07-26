/*
 * XREFs of ndisMQueueWorkItem @ 0x1C005A5AC
 * Callers:
 *     ndisMProcessSGListS @ 0x1C0046ED0 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C004E410 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C004E5E0 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C00506D0 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0051220 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C0051B00 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C005A680 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C005CF70 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C0064608 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_q(0x25u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1);
  v6 = *(_QWORD *)(a1 + 8 * v4 + 880);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8 * v4 + 880) = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v6 + 16) = a3;
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 8 * v4 + 824);
    *(_QWORD *)(a1 + 8 * v4 + 824) = v6;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_qD(0x26u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, v7);
  return v7;
}
