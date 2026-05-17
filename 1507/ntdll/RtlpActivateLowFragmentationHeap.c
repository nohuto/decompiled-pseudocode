/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180004B5C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180004B08 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800DA550 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlpExtendListLookup @ 0x180005104 (RtlpExtendListLookup.c)
 *     RtlpExtendFrontEndUsageArray @ 0x1800079FC (RtlpExtendFrontEndUsageArray.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 LowFragHeap; // r14
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
    if ( *(_BYTE *)(a1 + 378) == 2 )
      v3 = *(_QWORD *)(a1 + 368);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v5 = 0;
    }
    else if ( *(_WORD *)(a1 + 376) )
    {
      v5 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 376) = 1;
      v9 = 1;
      v4 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v4) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v5 = RtlpExtendFrontEndUsageArray(a1, v4);
      if ( v5 >= 0 )
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
          v5 = -1073741801;
        }
        --*(_WORD *)(a1 + 376);
        v9 = 0;
        v8 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v8 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v9 )
    --*(_WORD *)(a1 + 376);
  return (unsigned int)v5;
}
