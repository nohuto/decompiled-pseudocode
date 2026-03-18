/*
 * XREFs of PfFbLogEntryComplete @ 0x14001BD60
 * Callers:
 *     PfLogDeleteHelper @ 0x14001BAB4 (PfLogDeleteHelper.c)
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfFbLogEntryComplete(PSLIST_ENTRY ListEntry, __int64 a2, __int64 a3)
{
  _SLIST_ENTRY *Next; // rbx
  _SLIST_ENTRY *v4; // rdx
  char *v5; // rdx

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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
  }
}
