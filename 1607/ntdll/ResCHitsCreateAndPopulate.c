/*
 * XREFs of ResCHitsCreateAndPopulate @ 0x180105F1C
 * Callers:
 *     ResCKeHitsOpenMapping @ 0x1801000E8 (ResCKeHitsOpenMapping.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 */

_QWORD *__fastcall ResCHitsCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  LONG v9; // ecx

  if ( a1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x28uLL);
    v7 = Heap;
    if ( Heap )
    {
      *Heap = a3 & 0xFFFFFFFB;
      if ( a2 - 1 > 0x26
        && *(_QWORD *)a1 == 0x54494843534552LL
        && *(_DWORD *)(a1 + 8) == 1
        && (v8 = *(_DWORD *)(a1 + 12)) != 0 )
      {
        if ( !a2 || a2 >= 8 * v8 + 40 )
        {
          v7[3] = a1;
          v7[4] = a1 + 40;
          return v7;
        }
        v9 = 24;
      }
      else
      {
        v9 = 13;
      }
      RtlSetLastWin32Error(v9);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
