/*
 * XREFs of RtlCreateAtomTableEx @ 0x180043620
 * Callers:
 *     RtlCreateAtomTable @ 0x1800443B0 (RtlCreateAtomTable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlInitializeHandleTable @ 0x18007ECB0 (RtlInitializeHandleTable.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlCreateAtomTableEx(unsigned int a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  char *Heap; // rax
  char *v7; // rdi

  v3 = 0;
  v5 = a1;
  if ( *a3 )
    return v3;
  if ( a1 <= 1 )
    v5 = 37;
  if ( is_mul_ok(0x18uLL, (unsigned int)(v5 - 1))
    && 24 * (unsigned __int64)(unsigned int)(v5 - 1) + 80 >= 24 * (unsigned __int64)(unsigned int)(v5 - 1) )
  {
    Heap = (char *)RtlAllocateHeap(
                     NtCurrentPeb()->ProcessHeap,
                     (0x18 * (unsigned __int128)(unsigned int)(v5 - 1)) >> 64,
                     24LL * (unsigned int)(v5 - 1) + 80);
    v7 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 24LL * (unsigned int)(v5 - 1) + 80);
      *((_DWORD *)v7 + 16) = v5;
      RtlInitializeHandleTable(0x3FFFu, 0x80000010, (PRTL_HANDLE_TABLE)(v7 + 16));
      *((_QWORD *)v7 + 1) = 0LL;
      *(_DWORD *)v7 = 1836020801;
      *((_DWORD *)v7 + 1) = 1;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return v3;
  }
  return 3221225621LL;
}
