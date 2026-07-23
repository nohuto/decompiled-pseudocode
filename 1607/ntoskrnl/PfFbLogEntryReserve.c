/*
 * XREFs of PfFbLogEntryReserve @ 0x1400D1CA4
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfLogDeleteHelper @ 0x1400EE1A4 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall PfFbLogEntryReserve(PEX_RUNDOWN_REF RunRef, PSLIST_ENTRY *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rsi
  PSLIST_ENTRY v8; // rdx
  __int64 v9; // rax
  int v10; // edi

  v4 = a4;
  while ( ExAcquireRundownProtection(RunRef) )
  {
    while ( 1 )
    {
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&RunRef[4]);
      if ( v8 )
        break;
      v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&RunRef[2]);
      if ( v8 )
        break;
      v10 = ((__int64 (__fastcall *)(PEX_RUNDOWN_REF))RunRef[11].Count)(RunRef);
      if ( v10 < 0 )
        goto LABEL_9;
    }
    v9 = *((_QWORD *)&v8[1].Next + 1);
    if ( v4 <= (__int64)v8[2].Next - v9 )
    {
      *a3 = v9;
      v10 = 0;
      *a2 = v8;
      return (unsigned int)v10;
    }
    if ( !*((_DWORD *)&v8[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[2], v8);
      v10 = -1073741789;
LABEL_9:
      ++HIDWORD(RunRef[13].Ptr);
      LODWORD(RunRef[14].Count) += v4;
      ExReleaseRundownProtection(RunRef);
      return (unsigned int)v10;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))RunRef[12].Count)(v8);
  }
  return 3221225865LL;
}
