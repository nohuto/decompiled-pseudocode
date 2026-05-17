/*
 * XREFs of RtlpCheckDeviceName @ 0x1800CFF7C
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18006A6C8 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  unsigned __int64 v5; // rbp
  void *ProcessHeap; // r15
  void *Heap; // rax
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdi

  v5 = a2;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (void *)RtlAllocateHeap((__int64)ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = (unsigned __int64)Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v9 + 2 * (v5 >> 1)) = 46;
    *(_WORD *)(v9 + 2LL * (((unsigned int)v5 >> 1) + 1)) = 0;
    *a3 = !RtlDoesFileExists_UEx(v9, 1);
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
