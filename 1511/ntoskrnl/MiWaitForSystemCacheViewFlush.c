/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14012D628
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400AE7E8 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, a2, a3) )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (result & 0xFFFFFFFFF0000000uLL) == 0 )
      break;
  }
  return result;
}
