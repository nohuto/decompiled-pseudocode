/*
 * XREFs of RtlProtectHeap @ 0x180005E30
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x180070600 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180072810 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     RtlGrowFunctionTable @ 0x1800CAE40 (RtlGrowFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800E5290 (RtlSetProtectedPolicy.c)
 * Callees:
 *     RtlpProtectHeap @ 0x180005EFC (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180005FE4 (RtlpMoveHeapBetweenLists.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpHpProtectHeap @ 0x1800F123C (RtlpHpProtectHeap.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // edi
  int v5; // ecx
  int v6; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    HeapProtection = RtlpGetHeapProtection(HeapHandle);
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
