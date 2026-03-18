/*
 * XREFs of PfFbLogEntryReserve @ 0x1400D3E04
 * Callers:
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfLogDeleteHelper @ 0x1400F0324 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x1400F0738 (PfLogEvent.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
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
