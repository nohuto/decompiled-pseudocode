/*
 * XREFs of RtlUnlockProcessHeapOnProcessTerminate @ 0x18005B6FC
 * Callers:
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180023960 (RtlUnlockHeap.c)
 */

char RtlUnlockProcessHeapOnProcessTerminate()
{
  struct _PEB *v0; // rax
  __int64 ProcessHeap; // r8
  __int64 v2; // rdx
  void *UniqueThread; // rcx

  v0 = NtCurrentPeb();
  ProcessHeap = (__int64)v0->ProcessHeap;
  if ( *(_DWORD *)(ProcessHeap + 16) == -571548178 )
  {
    LOBYTE(v0) = RtlpHpHeapUnlock((__int64)v0->ProcessHeap, 1);
  }
  else if ( (*(_DWORD *)(ProcessHeap + 116) & 0x1000000) == 0 )
  {
    v2 = *(_QWORD *)(ProcessHeap + 352);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    LOBYTE(v0) = RtlUnlockHeap(ProcessHeap);
  }
  return (char)v0;
}
