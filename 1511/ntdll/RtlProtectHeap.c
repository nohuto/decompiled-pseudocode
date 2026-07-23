/*
 * XREFs of RtlProtectHeap @ 0x180055E30
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x18007B4F0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18007E2A0 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18007FA60 (RtlInstallFunctionTableCallback.c)
 *     RtlGrowFunctionTable @ 0x1800D3830 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800E9E40 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpProtectHeap @ 0x180055EFC (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180055FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpProtectHeap @ 0x1800F2860 (RtlpHpProtectHeap.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // edi
  int v5; // ecx
  int v6; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    if ( MakeReadOnly )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 2LL);
      v5 = 2;
      if ( HeapProtection == 64 )
        v5 = 32;
      HeapProtection = v5;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v6 = RtlpHpProtectHeap(HeapHandle, HeapProtection);
    else
      v6 = RtlpProtectHeap(HeapHandle, HeapProtection);
    if ( v6 >= 0 && !MakeReadOnly )
      RtlpMoveHeapBetweenLists(HeapHandle, 2LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
