/*
 * XREFs of ResCHitsFree @ 0x1800F83AC
 * Callers:
 *     ResCCloseRuntimeView @ 0x1800F6FCC (ResCCloseRuntimeView.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     _ResCFlushMappedView @ 0x1800F9610 (_ResCFlushMappedView.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCHitsFree(int *BaseAddress)
{
  LONG v2; // ecx
  void *v4; // r8
  int v5; // eax
  void *ProcessHeap; // rcx

  if ( !BaseAddress )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = (void *)*((_QWORD *)BaseAddress + 3);
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  v5 = *BaseAddress;
  if ( (*BaseAddress & 1) == 0 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( (v5 & 4) != 0 )
    {
      RtlFreeHeap(ProcessHeap, 0, v4);
      v4 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( !v4 )
        goto LABEL_21;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
    goto LABEL_21;
  }
  if ( (v5 & 4) != 0 )
  {
    v2 = 50;
    goto LABEL_3;
  }
  if ( (v5 & 2) == 0 )
  {
    if ( (v5 & 3) == 3 )
      ResCFlushMappedView(*((_QWORD *)BaseAddress + 3));
    else
      RtlSetLastWin32Error(50);
  }
  ResUnmapViewOfFile(*((PVOID *)BaseAddress + 3));
  if ( *((_QWORD *)BaseAddress + 1) )
    ResCloseHandle();
  if ( *((_QWORD *)BaseAddress + 2) )
    ResCloseHandle();
LABEL_21:
  memset(BaseAddress, 0, 0x28uLL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 1LL;
}
