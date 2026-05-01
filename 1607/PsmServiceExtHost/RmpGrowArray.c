/*
 * XREFs of RmpGrowArray @ 0x18002A140
 * Callers:
 *     RmpActivityHostQueryProcessListForMetrics @ 0x1800194D4 (RmpActivityHostQueryProcessListForMetrics.c)
 *     ?RmpGameModeConstructRecipientArrayCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180031A30 (-RmpGameModeConstructRecipientArrayCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180029D8C (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall RmpGrowArray(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  int v9; // ebx
  void *v10; // r10
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  SIZE_T Size[3]; // [rsp+20h] [rbp-18h] BYREF

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
  if ( v8 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v9 = RtlULongLongMult((unsigned int)v8, 0x10uLL, Size);
  if ( v9 < 0 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v10 )
      Heap = RtlReAllocateHeap(ProcessHeap, 0, v10, Size[0]);
    else
      Heap = RtlAllocateHeap(ProcessHeap, 0, Size[0]);
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
  return (unsigned int)v9;
}
