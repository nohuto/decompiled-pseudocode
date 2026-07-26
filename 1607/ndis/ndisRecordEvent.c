/*
 * XREFs of ndisRecordEvent @ 0x1C001A160
 * Callers:
 *     ndisLogMiniportEvent @ 0x1C001A108 (ndisLogMiniportEvent.c)
 *     NdisScheduleWorkItem @ 0x1C0026730 (NdisScheduleWorkItem.c)
 * Callees:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C001A1E4 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 */

void __fastcall ndisRecordEvent(struct _NDIS_EVENT_LOG *a1, unsigned __int16 a2, void *a3)
{
  KIRQL v4; // di
  char v5; // si
  unsigned int LastUsedEntry; // eax
  KIRQL v9; // al

  if ( a1 )
  {
    v4 = 0;
    v5 = 0;
    if ( (a1->Flags & 0x1000) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      ++a1->LastUsedEntry;
      v5 = 1;
      v4 = v9;
      LastUsedEntry = a1->LastUsedEntry;
    }
    else
    {
      LastUsedEntry = _InterlockedIncrement((volatile signed __int32 *)&a1->LastUsedEntry);
    }
    ndisFillEventLogEntry(a1, LastUsedEntry % a1->NumEntries, a2, a3);
    if ( v5 )
      KeReleaseSpinLock(&a1->Lock, v4);
  }
}
