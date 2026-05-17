/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x18007E7C8
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x18007E874 (RtlpIsProtectedHeap.c)
 */

__int64 __fastcall RtlpSetRequestedFrontEndHeap(__int64 a1)
{
  char v2; // di
  unsigned int v3; // esi

  v2 = 0;
  v3 = 0;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  if ( (unsigned int)RtlpIsProtectedHeap(a1) )
  {
    v3 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v2 = 1;
    if ( !*(_BYTE *)(a1 + 387) )
    {
      *(_BYTE *)(a1 + 387) = 2;
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
  return v3;
}
