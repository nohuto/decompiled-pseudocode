/*
 * XREFs of PfpPrefetchVolumesCleanup @ 0x14045905C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 */

void __fastcall PfpPrefetchVolumesCleanup(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 8LL); ++i )
    {
      v3 = *(_QWORD *)(a1 + 16);
      v4 = (unsigned __int64)i << 6;
      if ( (*(_QWORD *)(v4 + v3 + 56) & 0x400000000LL) != 0 )
        PfpOpenHandleClose((_QWORD *)(v4 + v3 + 32), *(_QWORD *)(a1 + 40));
      v5 = (_QWORD *)(v4 + *(_QWORD *)(a1 + 16));
      if ( (v5[3] & 0x400000000LL) != 0 )
        PfpOpenHandleClose(v5, *(_QWORD *)(a1 + 40));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
