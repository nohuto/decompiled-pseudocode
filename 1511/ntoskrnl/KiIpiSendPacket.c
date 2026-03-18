/*
 * XREFs of KiIpiSendPacket @ 0x140095FD4
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x140104FD4 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14012568C (KeIpiGenericCall.c)
 *     KeSynchronizeAddressPolicy @ 0x1401C39B0 (KeSynchronizeAddressPolicy.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x14005DCC0 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(
        unsigned int a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 0, 5LL);
}
