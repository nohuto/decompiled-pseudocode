/*
 * XREFs of sub_140002910 @ 0x140002910
 * Callers:
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 * Callees:
 *     <none>
 */

ULONG sub_140002910()
{
  signed __int32 v0; // esi
  unsigned __int32 v1; // edi
  ULONG i; // ebx
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // r8d
  _BYTE SystemInformation[1040]; // [rsp+20h] [rbp-418h] BYREF

  v0 = dword_14001FE64;
  v1 = MEMORY[0x7FFE03C0];
  if ( (unsigned int)dword_14001FE64 < MEMORY[0x7FFE03C0]
    && NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL) >= 0 )
  {
    for ( i = 0; i < dword_1400201F0; ++i )
    {
      if ( *(_QWORD *)&SystemInformation[16 * i + 8] && !RtlTestBit(&BitMapHeader, i) )
        RtlInterlockedSetBitRun(&BitMapHeader, i, 1LL);
    }
    v4 = _InterlockedCompareExchange(&dword_14001FE64, v1, v0);
    if ( v4 != v0 )
    {
      do
      {
        if ( v4 >= v1 )
          break;
        v5 = v4;
        v4 = _InterlockedCompareExchange(&dword_14001FE64, v1, v4);
      }
      while ( v4 != v5 );
    }
  }
  return RtlFindSetBits(
           &BitMapHeader,
           1u,
           _InterlockedExchangeAdd(&dword_14001FE60, 1u) % (unsigned int)dword_1400201F0);
}
