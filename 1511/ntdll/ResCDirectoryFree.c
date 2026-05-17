/*
 * XREFs of ResCDirectoryFree @ 0x1800F7C24
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x180048884 (ResCKeOpenRuntimeView.c)
 *     ResCCloseRuntimeView @ 0x1800F6E04 (ResCCloseRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F6F24 (ResCKeCreateRuntimeView.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     _ResCloseHandle @ 0x1800F914C (_ResCloseHandle.c)
 *     _ResUnmapViewOfFile @ 0x1800FA430 (_ResUnmapViewOfFile.c)
 */

__int64 __fastcall ResCDirectoryFree(_QWORD *a1)
{
  unsigned int v2; // ecx
  unsigned __int64 v4; // r8
  bool v5; // zf
  void *ProcessHeap; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8

  if ( !a1 )
  {
    v2 = 87;
LABEL_3:
    RtlSetLastWin32Error(v2);
    return 0LL;
  }
  v4 = a1[3];
  if ( !v4 )
  {
    v2 = 13;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    ResUnmapViewOfFile(a1[3]);
    if ( a1[1] )
      ResCloseHandle();
    if ( a1[2] != -1LL )
      ResCloseHandle();
  }
  else
  {
    v5 = (*(_BYTE *)a1 & 4) == 0;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !v5 )
    {
      RtlFreeHeap((__int64)ProcessHeap, 0, v4);
      v7 = a1[4];
      if ( v7 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      v8 = a1[5];
      if ( v8 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
      v9 = a1[6];
      if ( v9 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
      v4 = a1[7];
      if ( !v4 )
        goto LABEL_21;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, v4);
  }
LABEL_21:
  memset(a1, 0, 0x48uLL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return 1LL;
}
