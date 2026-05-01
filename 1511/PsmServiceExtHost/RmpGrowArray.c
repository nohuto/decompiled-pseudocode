/*
 * XREFs of RmpGrowArray @ 0x18003EE24
 * Callers:
 *     RmpActivityHostQueryProcessListForMetrics @ 0x180006880 (RmpActivityHostQueryProcessListForMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGrowArray(PVOID Ptr, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  PVOID Heap; // rax

  v6 = (unsigned int)(a4 - 1);
  if ( ((unsigned int)v6 & a4) != 0 )
  {
    v7 = (((((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 8) | (((((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6) >> 4) | (((v6 >> 1) | (unsigned int)v6) >> 2) | (v6 >> 1) | (unsigned int)v6;
    v8 = (v7 | (v7 >> 16)) + 1;
  }
  else
  {
    v8 = (unsigned int)(2 * a4);
  }
  if ( v8 <= 0xFFFFFFFF && (v9 = 0, is_mul_ok((unsigned int)v8, 0x10uLL)) )
  {
    Heap = RtlReAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             ((unsigned int)v8 * (unsigned __int128)0x10uLL) >> 64,
             Ptr,
             16LL * (unsigned int)v8);
    if ( Heap )
    {
      *a5 = Heap;
      *a6 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v9;
}
