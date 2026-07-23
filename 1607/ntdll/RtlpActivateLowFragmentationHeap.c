/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180029A3C
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x1800299E8 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1C0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18002994C (RtlpExtendFrontEndUsageArray.c)
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     RtlpExtendListLookup @ 0x18004D1D4 (RtlpExtendListLookup.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(PRTL_CRITICAL_SECTION *HeapHandle)
{
  PRTL_CRITICAL_SECTION v3; // rax
  int v4; // edi
  __int64 LowFragHeap; // r14
  char v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+21h] [rbp-27h]

  v8 = 0;
  v7 = 0;
  if ( ((_DWORD)HeapHandle[14] & 0x75010F61) == 0
    && ((_BYTE)HeapHandle[14] & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v7 = 1;
    if ( *((_BYTE *)HeapHandle + 386) == 2 )
      v3 = HeapHandle[47];
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = 0;
    }
    else if ( *((_WORD *)HeapHandle + 192) )
    {
      v4 = -1073741794;
    }
    else
    {
      *((_WORD *)HeapHandle + 192) = 1;
      v8 = 1;
      v4 = RtlpExtendFrontEndUsageArray(
             (PVOID *)HeapHandle,
             (unsigned __int16)((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2);
      if ( v4 >= 0 )
      {
        RtlpExtendListLookup(HeapHandle);
        HeapHandle[47] = 0LL;
        *((_BYTE *)HeapHandle + 386) = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
        LowFragHeap = RtlpCreateLowFragHeap(HeapHandle);
        RtlEnterCriticalSection(HeapHandle[44]);
        if ( LowFragHeap )
        {
          HeapHandle[47] = (PRTL_CRITICAL_SECTION)LowFragHeap;
          *((_WORD *)HeapHandle + 193) = 514;
          if ( (RtlGetSuiteMask() & 0x10000) == 0 )
            HeapHandle[22] = (PRTL_CRITICAL_SECTION)((unsigned __int64)RtlpLargestLfhBlock >> 4);
        }
        else
        {
          v4 = -1073741801;
        }
        --*((_WORD *)HeapHandle + 192);
        v8 = 0;
        v7 = 0;
        RtlLeaveCriticalSection(HeapHandle[44]);
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v7 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  if ( v8 )
    --*((_WORD *)HeapHandle + 192);
  return (unsigned int)v4;
}
