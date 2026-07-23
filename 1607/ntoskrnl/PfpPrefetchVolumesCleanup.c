/*
 * XREFs of PfpPrefetchVolumesCleanup @ 0x1403EF29C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 */

void __fastcall PfpPrefetchVolumesCleanup(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 8LL); ++i )
    {
      v3 = *(_QWORD *)(a1 + 16);
      v4 = (unsigned __int64)i << 6;
      if ( (*(_QWORD *)(v4 + v3 + 56) & 0x400000000LL) != 0 )
        PfpOpenHandleClose(v4 + v3 + 32, *(_QWORD *)(a1 + 40));
      v5 = v4 + *(_QWORD *)(a1 + 16);
      if ( (*(_QWORD *)(v5 + 24) & 0x400000000LL) != 0 )
        PfpOpenHandleClose(v5, *(_QWORD *)(a1 + 40));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
