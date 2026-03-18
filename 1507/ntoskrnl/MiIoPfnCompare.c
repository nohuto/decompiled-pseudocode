/*
 * XREFs of MiIoPfnCompare @ 0x140116BBC
 * Callers:
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiIsProbeActive @ 0x140135338 (MiIsProbeActive.c)
 *     MiLookupIoPageNode @ 0x140135BE4 (MiLookupIoPageNode.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIoPfnCompare(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  if ( a1 >= v3 )
    return a1 >= v3 + 512;
  else
    return 0xFFFFFFFFLL;
}
