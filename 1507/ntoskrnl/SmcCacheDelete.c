/*
 * XREFs of SmcCacheDelete @ 0x1406DAF34
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1406DA82C (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x1406DC518 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmcCacheCleanup @ 0x1406DAEB8 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x1406DB278 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rbx

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(v2);
  ExFreePoolEx(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
