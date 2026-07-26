/*
 * XREFs of ndisMQueueWorkItem @ 0x1C005E968
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004C7E0 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C0053400 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C00535D0 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C0055840 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056390 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C0056AA0 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C005EA30 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C0060A30 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C0067498 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
    WPP_SF_q(0x28u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
    WPP_SF_qD(0x29u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, v7);
  return v7;
}
