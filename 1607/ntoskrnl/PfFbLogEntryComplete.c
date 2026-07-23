/*
 * XREFs of PfFbLogEntryComplete @ 0x1400EDE54
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfLogDeleteHelper @ 0x1400EE1A4 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x1400EE5B8 (PfLogEvent.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfFbLogEntryComplete(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v4; // rdx
  char *v5; // rdx
  unsigned __int64 v6; // rtt

  Next = ListEntry[1].Next;
  if ( (_DWORD)a3
    && (++*((_DWORD *)&ListEntry[2].Next + 2),
        v4 = ListEntry[2].Next,
        *((_QWORD *)&ListEntry[1].Next + 1) += (unsigned int)a3,
        v5 = (char *)v4 - *((_QWORD *)&ListEntry[1].Next + 1),
        (__int64)v5 < SLODWORD(Next[5].Next)) )
  {
    ((void (__fastcall *)(PSLIST_ENTRY, char *, __int64, PSLIST_ENTRY))Next[6].Next)(ListEntry, v5, a3, ListEntry);
  }
  else
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], ListEntry);
    _m_prefetchw(Next);
    v6 = (unsigned __int64)Next->Next & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 != _InterlockedCompareExchange64((volatile signed __int64 *)Next, v6 - 2, v6) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)Next);
  }
}
