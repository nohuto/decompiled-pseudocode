/*
 * XREFs of WheapFreeErrorRecord @ 0x14021670C
 * Callers:
 *     WheaReportHwError @ 0x140216078 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x14021675C (WheapProcessWorkQueueItem.c)
 *     WheapEtwEnableCallback @ 0x14054A064 (WheapEtwEnableCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall WheapFreeErrorRecord(__int64 a1)
{
  int v1; // eax
  ULONG v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (v1 & 1) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  }
  else
  {
    if ( (v1 & 2) != 0 )
      v2 = 1634035799;
    else
      v2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL);
    ExFreePoolWithTag((PVOID)a1, v2);
  }
}
