/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x1400B2E3C
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1400139A0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     KeAbEntryFree @ 0x14002C430 (KeAbEntryFree.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
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
