/*
 * XREFs of RtlDebugQueryTagHeap @ 0x1800EF428
 * Callers:
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlQueryTagHeap @ 0x1800E0030 (RtlQueryTagHeap.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlDebugQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  char v9; // si
  void *TagHeap; // r14
  int v11; // ebx

  v9 = 0;
  TagHeap = 0LL;
  if ( RtlpCheckHeapSignature((_DWORD *)a1, "RtlQueryTagHeap") )
  {
    v11 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
    if ( (v11 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v9 = 1;
      v11 |= 1u;
    }
    if ( RtlpValidateHeap(a1, 0) )
      TagHeap = RtlQueryTagHeap(a1, v11, a3, a4, a5);
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
