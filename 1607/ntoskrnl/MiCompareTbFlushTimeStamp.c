/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x1400A3824
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiAttachSession @ 0x1400A37AC (MiAttachSession.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  unsigned int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    _InterlockedOr(v6, 0);
    v4 = a2 & (KiTbFlushTimeStamp - a1);
    if ( v4 > 2 || (a1 & 1) == 0 && v4 >= 2 )
      break;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      return 1;
    v7 = 0;
    _InterlockedOr(v6, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v7);
  }
  while ( (a1 & 1) != 0 );
  return 0;
}
