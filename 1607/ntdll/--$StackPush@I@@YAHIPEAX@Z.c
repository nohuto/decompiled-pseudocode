/*
 * XREFs of ??$StackPush@I@@YAHIPEAX@Z @ 0x180105B54
 * Callers:
 *     ??$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z @ 0x1800FFA6C (--$RecurseValidate@PEAU_RESCDIRECTORY@@@@YAHPEAU_RESCDIRECTORY@@HPEAE@Z.c)
 *     ResCDirectoryValidateEntries @ 0x180105D68 (ResCDirectoryValidateEntries.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall StackPush<unsigned int>(int a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  SIZE_T v7; // r8
  PVOID Heap; // rax
  PVOID v9; // rsi

  if ( !a2 || !*((_QWORD *)a2 + 1) )
    return 0LL;
  v5 = a2[1];
  if ( *a2 == v5 )
  {
    v6 = 2LL * v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = 4LL * (unsigned int)v6;
      if ( v7 <= 0xFFFFFFFF )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        v9 = Heap;
        if ( Heap )
        {
          memmove(Heap, *((const void **)a2 + 1), 4LL * a2[1]);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)a2 + 1));
          *((_QWORD *)a2 + 1) = v9;
          a2[1] = v6;
          goto LABEL_9;
        }
      }
    }
    return 0LL;
  }
LABEL_9:
  *(_DWORD *)(*((_QWORD *)a2 + 1) + 4LL * *a2) = a1;
  result = 1LL;
  ++*a2;
  return result;
}
