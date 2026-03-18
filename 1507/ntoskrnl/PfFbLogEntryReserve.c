/*
 * XREFs of PfFbLogEntryReserve @ 0x14001AC18
 * Callers:
 *     PfLogDeleteHelper @ 0x14001AA34 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall PfFbLogEntryReserve(PEX_RUNDOWN_REF RunRef, PSLIST_ENTRY *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned __int64 v8; // rtt
  PSLIST_ENTRY v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  unsigned __int64 v13; // rtt

  v4 = a4;
  while ( 1 )
  {
    _m_prefetchw(RunRef);
    v8 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v8 + 2, v8)
      && !ExfAcquireRundownProtection(RunRef) )
    {
      return 3221225865LL;
    }
    while ( 1 )
    {
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&RunRef[4]);
      if ( v9 )
        break;
      v9 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&RunRef[2]);
      if ( v9 )
        break;
      v11 = ((__int64 (__fastcall *)(PEX_RUNDOWN_REF))RunRef[11].Count)(RunRef);
      if ( v11 < 0 )
        goto LABEL_9;
    }
    v10 = *((_QWORD *)&v9[1].Next + 1);
    if ( v4 <= (__int64)v9[2].Next - v10 )
    {
      *a3 = v10;
      v11 = 0;
      *a2 = v9;
      return (unsigned int)v11;
    }
    if ( !*((_DWORD *)&v9[2].Next + 2) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[2], v9);
      v11 = -1073741789;
LABEL_9:
      ++HIDWORD(RunRef[13].Ptr);
      LODWORD(RunRef[14].Count) += v4;
      _m_prefetchw(RunRef);
      v13 = RunRef->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, v13 - 2, v13) )
        ExfReleaseRundownProtection(RunRef);
      return (unsigned int)v11;
    }
    ((void (__fastcall *)(PSLIST_ENTRY))RunRef[12].Count)(v9);
  }
}
