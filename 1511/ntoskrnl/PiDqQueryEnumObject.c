/*
 * XREFs of PiDqQueryEnumObject @ 0x140441774
 * Callers:
 *     PiDqEnumQueryObjectsCallback @ 0x140441760 (PiDqEnumQueryObjectsCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     PiDqQueryAppendActionEntry @ 0x14045F450 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14045F498 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140460C48 (PiDqQueryAddObjectToResultSet.c)
 */

__int64 __fastcall PiDqQueryEnumObject(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2)
{
  _DWORD *ProcessAuditId; // rax
  int AddObjectToResultSet; // ebx
  char v6; // al
  char v7; // al
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  ProcessAuditId = a1->ProcessAuditId;
  AddObjectToResultSet = 0;
  LOBYTE(v9) = 1;
  if ( ProcessAuditId[5] )
    goto LABEL_12;
  if ( (unsigned int)(ProcessAuditId[4] - 1) > 2 )
  {
    v6 = 1;
    LOBYTE(v9) = 1;
  }
  else
  {
    AddObjectToResultSet = PiPnpRtlApplyMandatoryFilters(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(_QWORD *)(a2 + 16),
                             *(_DWORD *)(a2 + 28),
                             0LL,
                             a1 + 1,
                             &v9);
    v6 = v9;
  }
  if ( AddObjectToResultSet == -1073741772 || AddObjectToResultSet == -1073741275 )
  {
    v6 = 0;
    LOBYTE(v9) = 0;
    AddObjectToResultSet = 0;
  }
  if ( AddObjectToResultSet >= 0 && v6 )
  {
LABEL_12:
    if ( !*((_QWORD *)a1->ProcessAuditId + 11)
      || ((AddObjectToResultSet = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v9),
           AddObjectToResultSet == -1073741772)
        ? (v7 = 0, AddObjectToResultSet = 0)
        : (v7 = v9),
          AddObjectToResultSet >= 0 && v7) )
    {
      if ( (*((_DWORD *)a1->ProcessAuditId + 10) & 1) == 0
        || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), AddObjectToResultSet >= 0) )
      {
        AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1LL, a2, 0LL, &v9);
        if ( AddObjectToResultSet >= 0 )
          PiDqQueryAppendActionEntry(a1, v9);
      }
    }
  }
  return (unsigned int)AddObjectToResultSet;
}
