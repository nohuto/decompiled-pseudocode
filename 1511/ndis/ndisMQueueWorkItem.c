/*
 * XREFs of ndisMQueueWorkItem @ 0x1C005A54C
 * Callers:
 *     ndisMProcessSGListS @ 0x1C00481F0 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C004E9B0 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C004EB80 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C0050C70 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00517C0 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C0051ED0 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C005A620 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C005C9F0 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C00630C8 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_q(0x28u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_qD(0x29u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, v7);
  return v7;
}
