/*
 * XREFs of ObFastReplaceObject @ 0x1400CCF54
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400CCD34 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x1400FCFC0 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401B13EC (CcChangeBackingFileObject.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     SeDeassignPrimaryToken @ 0x14045F4DC (SeDeassignPrimaryToken.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x140096540 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
