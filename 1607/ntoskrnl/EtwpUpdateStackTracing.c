/*
 * XREFs of EtwpUpdateStackTracing @ 0x1406A8484
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x14049607C (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A8420 (EtwpReferenceStackLookasideList.c)
 */

__int64 __fastcall EtwpUpdateStackTracing(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  PVOID PoolWithTag; // rax
  PVOID v8; // r14
  unsigned int i; // r8d

  v6 = 0;
  if ( a3 )
  {
    if ( a3 > 0x100 )
      return (unsigned int)-1073741811;
    if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
    {
      RtlClearAllBits((PRTL_BITMAP)(a1 + 824));
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x6D777445u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x400uLL);
      *(_DWORD *)(a1 + 824) = 0x2000;
      *(_QWORD *)(a1 + 832) = v8;
      _m_prefetchw((const void *)(a1 + 816));
      if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x2000u) & 0x2000) == 0 )
        EtwpReferenceStackLookasideList();
      _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x80u);
    }
    for ( i = 0; i < a3; ++i )
      _bittestandset(*(signed __int32 **)(a1 + 832), *(_WORD *)(a2 + 4LL * i) & 0x1FFF);
  }
  else if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
  {
    RtlClearAllBits((PRTL_BITMAP)(a1 + 824));
  }
  return v6;
}
