/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x1400AEF6C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x1401F2680 (MiGetPteLink.c)
 */

__int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  __int64 i; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  for ( i = *(_QWORD *)(a1 + 24); ; i = *(_QWORD *)(a1 + 24) )
  {
    result = MiGetPteLink(i);
    if ( !result )
      break;
    KeYieldProcessorEx(&v4);
  }
  return result;
}
