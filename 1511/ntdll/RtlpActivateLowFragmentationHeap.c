/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180053028
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180052FD4 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800E1980 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180052F38 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x180054D4C (RtlpExtendListLookup.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  int v4; // edi
  __int64 LowFragHeap; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v7 = 1;
    if ( *(_BYTE *)(a1 + 378) == 2 )
      v3 = *(_QWORD *)(a1 + 368);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *(_WORD *)(a1 + 376) )
    {
      v4 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 376) = 1;
      v8 = 1;
      v4 = RtlpExtendFrontEndUsageArray(a1, (unsigned __int16)((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 368) = 0LL;
        *(_BYTE *)(a1 + 378) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 368) = LowFragHeap;
          *(_WORD *)(a1 + 378) = 514;
          if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v4 = -1073741801;
        }
        --*(_WORD *)(a1 + 376);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v8 )
    --*(_WORD *)(a1 + 376);
  return (unsigned int)v4;
}
