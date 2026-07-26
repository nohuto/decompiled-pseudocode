/*
 * XREFs of ndisReleaseStackTrace @ 0x1C0011C38
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C00195C8 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E9C (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00989B0 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseStackTrace(ULONG_PTR Signature)
{
  ULONG_PTR v1; // rbx
  KIRQL v2; // di
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v3; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // rbx
  int v5; // r8d
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = (unsigned int)Signature;
  if ( byte_1C0082EC8 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisStackTraces);
    if ( (_DWORD)v1 == 1 )
    {
      --dword_1C0082EF8;
    }
    else
    {
      memset(&Context, 0, sizeof(Context));
      v3 = RtlLookupEntryHashTable(&HashTable, v1, &Context);
      v4 = v3;
      if ( v3 )
      {
        v5 = LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) - 1)) & 0x3FFFFFFF;
        LODWORD(v3[1].Linkage.Flink) = v5;
        if ( (v5 & 0x3FFFFFFF) == 0 )
        {
          RtlRemoveEntryHashTable(&HashTable, v3, &Context);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    KeReleaseSpinLock(&ndisStackTraces, v2);
  }
}
