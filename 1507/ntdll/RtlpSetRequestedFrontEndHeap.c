/*
 * XREFs of RtlpSetRequestedFrontEndHeap @ 0x18006F860
 * Callers:
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpIsProtectedHeap @ 0x18006F90C (RtlpIsProtectedHeap.c)
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
    if ( !*(_BYTE *)(a1 + 379) )
    {
      *(_BYTE *)(a1 + 379) = 2;
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v2 = 0;
    }
  }
  if ( v2 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
  return v3;
}
