/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x18000FCC4
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000C4E4 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpAllocateModuleEntry @ 0x18000FB30 (LdrpAllocateModuleEntry.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        char **a6,
        __int64 a7)
{
  ULONG v10; // edx
  _QWORD *Heap; // rax
  _QWORD *v13; // rbx
  char *ModuleEntry; // rax

  v10 = (NtdllBaseTag + 0x40000) | 8;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v10, *(unsigned __int16 *)a1 + 154LL);
  v13 = Heap;
  if ( Heap )
  {
    Heap[4] = a7;
    Heap[5] = a5;
    Heap[1] = Heap + 19;
    *((_DWORD *)Heap + 6) = a3 | 0x8000;
    Heap[2] = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *((_WORD *)Heap + 1) = *(_WORD *)a1 + 2;
    memmove(Heap + 19, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v13[1] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry((__int64)v13);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *((_DWORD *)ModuleEntry + 67) = a4;
      LdrpLogDllState(0LL, v13, 5292LL);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v13);
    }
  }
  return *a6 == 0LL ? 0xC0000017 : 0;
}
