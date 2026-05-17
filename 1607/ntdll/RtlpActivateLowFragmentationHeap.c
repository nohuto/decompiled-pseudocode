/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180029A4C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x1800299F8 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002995C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlpExtendListLookup @ 0x18004D1E4 (RtlpExtendListLookup.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  int v4; // edi
  __int64 LowFragHeap; // r14
  __int64 v6; // rcx
  char v8; // [rsp+20h] [rbp-28h]
  char v9; // [rsp+21h] [rbp-27h]

  v9 = 0;
  v8 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v8 = 1;
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v3 = *(_QWORD *)(a1 + 376);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(a1 + 384) )
    {
      v4 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 384) = 1;
      v9 = 1;
      v4 = RtlpExtendFrontEndUsageArray(a1, (unsigned __int16)((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 376) = 0LL;
        *(_BYTE *)(a1 + 386) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 376) = LowFragHeap;
          *(_WORD *)(a1 + 386) = 514;
          if ( (RtlGetSuiteMask(v6) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*(_WORD *)(a1 + 384);
        v9 = 0;
        v8 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v9 )
    --*(_WORD *)(a1 + 384);
  return (unsigned int)v4;
}
