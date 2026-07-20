/*
 * XREFs of SmpSelectNodeNumber @ 0x140002A4C
 * Callers:
 *     SmpExecuteImage @ 0x140002660 (SmpExecuteImage.c)
 * Callees:
 *     <none>
 */

ULONG SmpSelectNodeNumber()
{
  signed __int32 v0; // esi
  unsigned __int32 v1; // edi
  ULONG i; // ebx
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // r8d
  _BYTE SystemInformation[1040]; // [rsp+20h] [rbp-418h] BYREF

  v0 = SmpActiveProcessorCount;
  v1 = MEMORY[0x7FFE03C0];
  if ( (unsigned int)SmpActiveProcessorCount < MEMORY[0x7FFE03C0]
    && NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL) >= 0 )
  {
    for ( i = 0; i < SmpMaximumNodeCount; ++i )
    {
      if ( *(_QWORD *)&SystemInformation[16 * i + 8] && !RtlTestBit(&SmpNodeBitmap, i) )
        RtlInterlockedSetBitRun(&SmpNodeBitmap, i, 1LL);
    }
    v4 = _InterlockedCompareExchange(&SmpActiveProcessorCount, v1, v0);
    if ( v4 != v0 )
    {
      do
      {
        if ( v4 >= v1 )
          break;
        v5 = v4;
        v4 = _InterlockedCompareExchange(&SmpActiveProcessorCount, v1, v4);
      }
      while ( v4 != v5 );
    }
  }
  return RtlFindSetBits(
           &SmpNodeBitmap,
           1u,
           _InterlockedExchangeAdd(&SmpCurrentNodeCount, 1u) % (unsigned int)SmpMaximumNodeCount);
}
