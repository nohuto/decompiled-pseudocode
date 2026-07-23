/*
 * XREFs of VrpIncrementDiffHiveEntryHardRefCount @ 0x1406174EC
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140617528 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14061792C (VrpUnloadDifferencingHive.c)
 * Callees:
 *     <none>
 */

void __fastcall VrpIncrementDiffHiveEntryHardRefCount(__int64 a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt

  if ( ++*(_QWORD *)(a1 + 32) <= 1uLL )
  {
    _m_prefetchw((const void *)(a1 + 16));
    v1 = *(_QWORD *)(a1 + 16);
    do
    {
      if ( (unsigned __int64)(v1 + 1) <= 1 )
      {
        if ( v1 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v2 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v1 + 1, v1);
    }
    while ( v2 != v1 );
  }
}
