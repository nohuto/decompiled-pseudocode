/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x1401396E8
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetPteLink @ 0x140225B3C (MiGetPteLink.c)
 */

__int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 i; // rcx
  __int64 result; // rax

  v2 = 0;
  for ( i = *(_QWORD *)(a1 + 24); ; i = *(_QWORD *)(a1 + 24) )
  {
    result = MiGetPteLink(i);
    if ( !result )
      break;
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  return result;
}
