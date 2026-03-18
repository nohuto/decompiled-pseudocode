/*
 * XREFs of PoClearPowerRequestInternalDeferred @ 0x140126A14
 * Callers:
 *     PpmEndHighPerfRequest @ 0x140126A00 (PpmEndHighPerfRequest.c)
 * Callees:
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoClearPowerRequestInternalDeferred(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rbp
  struct _KTIMER *PoolWithTag; // rax
  struct _KTIMER *v7; // rdi

  v3 = PopTransitionHighPerfRequest;
  v4 = 0;
  v5 = a3;
  if ( a3 )
  {
    PoolWithTag = (struct _KTIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x54515750u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x90uLL);
      LODWORD(v7[2].Header.WaitListHead.Flink) = 4;
      *(_QWORD *)&v7[2].Header.Lock = v3;
      v7->DueTime.QuadPart = (unsigned __int64)PopDelayedPowerRequestClearDpc;
      v7->Header.LockNV = 275;
      v7->TimerListEntry.Flink = (struct _LIST_ENTRY *)v7;
      *(_QWORD *)&v7->Processor = 0LL;
      v7->Header.WaitListHead.Blink = 0LL;
      *(_QWORD *)&v7[1].Header.Lock = 0LL;
      v7[1].Header.Type = 8;
      v7[1].Header.WaitListHead.Blink = &v7[1].Header.WaitListHead;
      v7[1].Header.WaitListHead.Flink = &v7[1].Header.WaitListHead;
      v7[1].DueTime.QuadPart = 0LL;
      *(_QWORD *)&v7[1].Processor = 0LL;
      KeSetTimer(v7 + 1, (LARGE_INTEGER)(-10000 * v5), (PKDPC)v7);
    }
    else
    {
      v4 = -1073741801;
      PoClearPowerRequestInternal(v3, 4);
    }
  }
  else
  {
    return (unsigned int)PoClearPowerRequestInternal(PopTransitionHighPerfRequest, 4);
  }
  return v4;
}
