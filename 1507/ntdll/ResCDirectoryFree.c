/*
 * XREFs of ResCDirectoryFree @ 0x1800F7FCC
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCCloseRuntimeView @ 0x1800F6FCC (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x1800FAB18 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCDirectoryFree(PVOID BaseAddress)
{
  LONG v2; // ecx
  void *v4; // r8
  bool v5; // zf
  void *ProcessHeap; // rcx
  void *v7; // r8
  void *v8; // r8
  void *v9; // r8

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
  if ( (*(_BYTE *)BaseAddress & 1) != 0 )
  {
    ResUnmapViewOfFile(*((PVOID *)BaseAddress + 3));
    if ( *((_QWORD *)BaseAddress + 1) )
      ResCloseHandle();
    if ( *((_QWORD *)BaseAddress + 2) != -1LL )
      ResCloseHandle();
  }
  else
  {
    v5 = (*(_BYTE *)BaseAddress & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap(ProcessHeap, 0, v4);
      v7 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( v7 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      v8 = (void *)*((_QWORD *)BaseAddress + 5);
      if ( v8 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      v9 = (void *)*((_QWORD *)BaseAddress + 6);
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      v4 = (void *)*((_QWORD *)BaseAddress + 7);
      if ( !v4 )
        goto LABEL_21;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap(ProcessHeap, 0, v4);
  }
LABEL_21:
  memset(BaseAddress, 0, 0x48uLL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 1LL;
}
