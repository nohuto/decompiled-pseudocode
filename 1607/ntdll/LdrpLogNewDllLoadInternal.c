/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800D18F0
 * Callers:
 *     LdrLogNewDataDllLoad @ 0x18002D38C (LdrLogNewDataDllLoad.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F26C (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  size_t v6; // rsi
  __int64 result; // rax
  unsigned __int64 v10; // rdi
  __int16 v11; // ax

  v6 = a4;
  result = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v10 = result;
  if ( result )
  {
    v11 = 5296;
    if ( (unsigned int)(a3 - 5) <= 1 )
      v11 = 5297;
    *(_DWORD *)(v10 + 48) = a3;
    *(_WORD *)(v10 + 6) = v11;
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)(v10 + 40) = a2;
    memmove((void *)(v10 + 52), Src, v6);
    *(_WORD *)(v10 + 2 * (v6 >> 1) + 52) = 0;
    NtTraceEvent();
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
  }
  return result;
}
