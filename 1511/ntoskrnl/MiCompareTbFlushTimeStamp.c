/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x1400073F4
 * Callers:
 *     MiAttachSession @ 0x140007380 (MiAttachSession.c)
 *     MiFlushTbAsNeeded @ 0x140061B60 (MiFlushTbAsNeeded.c)
 *     MmMapViewInSystemCache @ 0x1400B0E10 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  unsigned int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    _InterlockedOr(v6, 0);
    v4 = a2 & (KiTbFlushTimeStamp - a1);
    if ( v4 > 2 || (a1 & 1) == 0 && v4 >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v7 = 0;
    _InterlockedOr(v6, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v7);
    if ( (a1 & 1) == 0 )
      return 0;
  }
  return 1;
}
