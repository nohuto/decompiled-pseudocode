/*
 * XREFs of EtwpUpdateStackTracing @ 0x1406E99B8
 * Callers:
 *     EtwpCheckForStackTracingExtension @ 0x14054B188 (EtwpCheckForStackTracingExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpReferenceStackLookasideList @ 0x1406E9954 (EtwpReferenceStackLookasideList.c)
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
    if ( (*(_DWORD *)(a1 + 832) & 0x80u) != 0 )
    {
      RtlClearAllBits((PRTL_BITMAP)(a1 + 840));
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x6D777445u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x400uLL);
      *(_DWORD *)(a1 + 840) = 0x2000;
      *(_QWORD *)(a1 + 848) = v8;
      _m_prefetchw((const void *)(a1 + 832));
      if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x2000u) & 0x2000) == 0 )
        EtwpReferenceStackLookasideList();
      *(_DWORD *)(a1 + 832) |= 0x80u;
    }
    for ( i = 0; i < a3; ++i )
      _bittestandset(*(signed __int32 **)(a1 + 848), *(_WORD *)(a2 + 4LL * i) & 0x1FFF);
  }
  else if ( (*(_DWORD *)(a1 + 832) & 0x80u) != 0 )
  {
    RtlClearAllBits((PRTL_BITMAP)(a1 + 840));
  }
  return v6;
}
