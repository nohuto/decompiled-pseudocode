/*
 * XREFs of SmpNtSerializeBoot @ 0x140006964
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140001B30 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000A320 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x1400028E0 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000677C (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
