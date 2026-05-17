/*
 * XREFs of RtlProtectHeap @ 0x18002D7A0
 * Callers:
 *     LdrProtectMrdataHeap @ 0x18002D9F4 (LdrProtectMrdataHeap.c)
 *     RtlDeleteFunctionTable @ 0x18006E9D0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F460 (RtlAddFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x180083130 (RtlSetProtectedPolicy.c)
 *     RtlGrowFunctionTable @ 0x1800DBAB0 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpProtectHeap @ 0x18002D86C (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18002D954 (RtlpMoveHeapBetweenLists.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 */

void __fastcall RtlProtectHeap(__int64 a1, char a2)
{
  unsigned int HeapProtection; // edi
  int v5; // ecx
  int v6; // eax

  if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    HeapProtection = RtlpGetHeapProtection(a1, 1LL);
    if ( a2 )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 2LL);
      v5 = 2;
      if ( HeapProtection == 64 )
        v5 = 32;
      HeapProtection = v5;
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      v6 = RtlpHpProtectHeap(a1, HeapProtection);
    else
      v6 = RtlpProtectHeap(a1, HeapProtection);
    if ( v6 >= 0 && !a2 )
      RtlpMoveHeapBetweenLists(a1, 2LL, 1LL);
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
  }
}
