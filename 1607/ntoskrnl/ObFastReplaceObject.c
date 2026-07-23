/*
 * XREFs of ObFastReplaceObject @ 0x1400CADF4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x1400FAD40 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401B12D0 (CcChangeBackingFileObject.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     SeDeassignPrimaryToken @ 0x14045E3AC (SeDeassignPrimaryToken.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x140692858 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall ObFastReplaceObject(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  int v6; // ebx
  signed __int64 BugCheckParameter4; // rdx

  v2 = a2;
  if ( a2 )
  {
    ObReferenceObjectExWithTag(a2, 15);
    v2 |= 0xFuLL;
  }
  v4 = _InterlockedExchange64(a1, v2);
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v6 = v4 & 0xF;
    if ( v6 )
    {
      if ( ObpTraceFlags )
        ObpPushStackInfo(v5 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), -v6) - v6;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v5, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v5 - 48);
      }
    }
  }
  return v5;
}
