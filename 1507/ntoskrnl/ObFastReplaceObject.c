/*
 * XREFs of ObFastReplaceObject @ 0x1400864A0
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     MmChangeSectionBackingFile @ 0x14012753C (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401276BC (CcChangeBackingFileObject.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     SeDeassignPrimaryToken @ 0x1405054E4 (SeDeassignPrimaryToken.c)
 *     PspSwapSystemDll @ 0x1406BEE64 (PspSwapSystemDll.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
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
