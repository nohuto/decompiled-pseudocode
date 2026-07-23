/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x180040198
 * Callers:
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003F368 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpAllocateModuleEntry @ 0x1800402B4 (LdrpAllocateModuleEntry.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  ULONG v10; // edx
  _QWORD *Heap; // rax
  _QWORD *v13; // rbx
  __int64 ModuleEntry; // rax

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
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      LdrpLogDllState(0, (__int64)v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
