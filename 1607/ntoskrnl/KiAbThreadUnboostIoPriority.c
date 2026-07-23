/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x1400B0D88
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002BFB0 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 * Callees:
 *     <none>
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  volatile signed __int32 *v2; // rax

  v2 = (volatile signed __int32 *)(a1 + 1412);
  if ( a2 )
    v2 = (volatile signed __int32 *)(a1 + 1416);
  _InterlockedDecrement(v2);
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1788));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
