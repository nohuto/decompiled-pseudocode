/*
 * XREFs of UsbhSetOutOfBandwidthTimer @ 0x1C003C6A4
 * Callers:
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009010 (UsbhSelectConfigOrInterfaceComplete.c)
 * Callees:
 *     UsbhSetTimer @ 0x1C00093E0 (UsbhSetTimer.c)
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

void __fastcall UsbhSetOutOfBandwidthTimer(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  __int64 PortData; // rbp
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi

  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xA0uLL, 0x42554855u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA0uLL);
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v9, 1951875663) < 0
        || (*v9 = 1331118703,
            *((_QWORD *)v9 + 2) = a1,
            *((_QWORD *)v9 + 1) = PortData,
            v9[38] = a3,
            v9[39] = a4,
            KeInitializeTimer((PKTIMER)(v9 + 6)),
            KeInitializeDpc((PRKDPC)(v9 + 22), (PKDEFERRED_ROUTINE)UsbhOutOfBandwidthTimerDpc, v9),
            (UsbhSetTimer(a1, 1000, (struct _KTIMER *)(v9 + 6), (struct _KDPC *)(v9 + 22), 0x6D74626Fu, 1) & 0xC0000000) == 0xC0000000) )
      {
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        Log(a1, 8, 1869565524, PortData, _InterlockedExchange64((volatile __int64 *)(PortData + 688), (__int64)v9));
      }
    }
  }
}
