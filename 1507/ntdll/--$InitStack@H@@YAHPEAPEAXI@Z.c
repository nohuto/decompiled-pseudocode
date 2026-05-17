/*
 * XREFs of ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FBD44
 * Callers:
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7CE0 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ResCDirectoryValidateEntries @ 0x1800FC040 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

__int64 __fastcall InitStack<int>(unsigned __int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 Heap; // rbx
  __int64 v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
  if ( !Heap )
    return 0LL;
  v4 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  *(_QWORD *)(Heap + 8) = v4;
  if ( !v4 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0LL;
  }
  *(_DWORD *)Heap = 0;
  result = 1LL;
  *(_DWORD *)(Heap + 4) = 10;
  *a1 = Heap;
  return result;
}
