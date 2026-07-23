/*
 * XREFs of KiIpiSendPacket @ 0x1400C68B8
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     KeUpdateThreadTag @ 0x14010D73C (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14012FFD4 (KeIpiGenericCall.c)
 *     KeSynchronizeAddressPolicy @ 0x1401D2158 (KeSynchronizeAddressPolicy.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400DE980 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 0, 5LL);
}
