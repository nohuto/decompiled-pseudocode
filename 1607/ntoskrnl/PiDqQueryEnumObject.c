/*
 * XREFs of PiDqQueryEnumObject @ 0x1404DC1E8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1404DC1D4 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryAppendActionEntry @ 0x14048CEA0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14048CEE8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404C8DB4 (PiDqQueryAddObjectToResultSet.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 */

__int64 __fastcall PiDqQueryEnumObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int AddObjectToResultSet; // ebx
  char v8; // al
  char v9; // al
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  AddObjectToResultSet = 0;
  LOBYTE(v11) = 1;
  if ( *(_DWORD *)(v4 + 20) )
    goto LABEL_12;
  if ( (unsigned int)(*(_DWORD *)(v4 + 16) - 1) > 2 )
  {
    v8 = 1;
    LOBYTE(v11) = 1;
  }
  else
  {
    AddObjectToResultSet = PiPnpRtlApplyMandatoryFilters(
                             PiPnpRtlCtx,
                             *(_QWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 28),
                             0,
                             (unsigned __int8)a1 + 32,
                             (__int64)&v11);
    v8 = (char)v11;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v8 = 0;
    LOBYTE(v11) = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v8 )
  {
LABEL_12:
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v11, a4),
           AddObjectToResultSet == -1073741772)
        ? (v9 = 0, AddObjectToResultSet = 0)
        : (v9 = (char)v11),
          AddObjectToResultSet >= 0 && v9) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1, a2, 0LL, (__int64)&v11);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry(a1, v11);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
