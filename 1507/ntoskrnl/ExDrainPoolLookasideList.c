/*
 * XREFs of ExDrainPoolLookasideList @ 0x140567C44
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14012308C (ExpRemoveGeneralLookaside.c)
 *     ExpInsertPoolTracker @ 0x140149414 (ExpInsertPoolTracker.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedFlushSList @ 0x14018B4C0 (RtlpInterlockedFlushSList.c)
 */

PSLIST_ENTRY __fastcall ExDrainPoolLookasideList(PSLIST_HEADER ListHead)
{
  PSLIST_ENTRY result; // rax
  _QWORD *p_Next; // rdi
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rbx

  ExpRemoveGeneralLookaside((volatile signed __int32 *)&ExPagedLookasideLock, (__int64)ListHead);
  result = RtlpInterlockedFlushSList(ListHead);
  p_Next = &result->Next;
  if ( result )
  {
    do
    {
      v4 = (unsigned __int64)(p_Next - 2);
      if ( *(p_Next - 1) != ((unsigned __int64)(p_Next - 2) ^ ExpPoolQuotaCookie) )
        KeBugCheckEx(0x19u, 0xFuLL, (ULONG_PTR)(p_Next - 2), *(_QWORD *)(v4 + 8), v4 ^ ExpPoolQuotaCookie);
      v5 = (_QWORD *)*p_Next;
      *(_BYTE *)(v4 + 3) = *((_BYTE *)&ListHead[2].HeaderX64 + 4) | 2;
      ExpInsertPoolTracker(
        *(_DWORD *)(v4 + 4),
        16LL * (unsigned __int8)*(_WORD *)(v4 + 2),
        *((_DWORD *)&ListHead[2].HeaderX64 + 1),
        (int)p_Next);
      result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD *))ListHead[3].Region)(p_Next);
      p_Next = v5;
    }
    while ( v5 );
  }
  return result;
}
