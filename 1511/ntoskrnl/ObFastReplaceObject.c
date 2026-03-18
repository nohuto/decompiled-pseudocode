/*
 * XREFs of ObFastReplaceObject @ 0x14000D374
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x1400DD00C (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401431E4 (CcChangeBackingFileObject.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     SeDeassignPrimaryToken @ 0x1403E76E4 (SeDeassignPrimaryToken.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
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
    ObReferenceObjectExWithTag(a2, 15LL);
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
