/*
 * XREFs of ??$InitStack@H@@YAHPEAPEAXI@Z @ 0x1800FBD44
 * Callers:
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800F7CE0 (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ResCDirectoryValidateEntries @ 0x1800FC040 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 */

__int64 __fastcall InitStack<int>(_QWORD *a1)
{
  __int64 result; // rax
  _DWORD *Heap; // rbx
  PVOID v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  *((_QWORD *)Heap + 1) = v4;
  if ( !v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0LL;
  }
  *Heap = 0;
  result = 1LL;
  Heap[1] = 10;
  *a1 = Heap;
  return result;
}
