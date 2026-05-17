/*
 * XREFs of ResCHitsCreateAndPopulate @ 0x1800FB60C
 * Callers:
 *     ResCKeHitsOpenMapping @ 0x1800F7FBC (ResCKeHitsOpenMapping.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 */

unsigned __int64 __fastcall ResCHitsCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  unsigned __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx

  if ( a1 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 40LL);
    v7 = (unsigned __int64)Heap;
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
          *(_QWORD *)(v7 + 24) = a1;
          *(_QWORD *)(v7 + 32) = a1 + 40;
          return v7;
        }
        v9 = 24;
      }
      else
      {
        v9 = 13;
      }
      RtlSetLastWin32Error(v9);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(0x57u);
  }
  return 0LL;
}
