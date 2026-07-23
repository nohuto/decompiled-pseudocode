/*
 * XREFs of ResCSegmentFree @ 0x1800F8608
 * Callers:
 *     ResCCloseRuntimeView @ 0x1800F6FCC (ResCCloseRuntimeView.c)
 *     ResCRuntimeUnmapSegment @ 0x1800F7A10 (ResCRuntimeUnmapSegment.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCSegmentFree(PVOID BaseAddress)
{
  LONG v2; // ecx
  void *v4; // r8
  bool v5; // zf
  void *ProcessHeap; // rcx

  if ( !BaseAddress )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = (void *)*((_QWORD *)BaseAddress + 4);
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)BaseAddress & 1) == 0 )
  {
    v5 = (*(_BYTE *)BaseAddress & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap(ProcessHeap, 0, v4);
      v4 = (void *)*((_QWORD *)BaseAddress + 5);
      if ( !v4 )
        goto LABEL_17;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)BaseAddress & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  ResUnmapViewOfFile(*((PVOID *)BaseAddress + 4));
  if ( *((_QWORD *)BaseAddress + 1) )
    ResCloseHandle();
  if ( *((_QWORD *)BaseAddress + 2) )
    ResCloseHandle();
LABEL_17:
  memset(BaseAddress, 0, 0x30uLL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 1LL;
}
