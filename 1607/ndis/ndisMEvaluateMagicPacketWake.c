/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C0049160
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C0049660 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0048EBC (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C0049738 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4520)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5892) == 1
    && *(_QWORD *)(a1 + 5672)
    && !*(_DWORD *)(a1 + 5888) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
