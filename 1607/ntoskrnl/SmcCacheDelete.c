/*
 * XREFs of SmcCacheDelete @ 0x140699EB4
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697464 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1406976B0 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14069B0F0 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     SmcCacheCleanup @ 0x140699E38 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14069A174 (SmcCacheRemove.c)
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
  MiDeleteSubsection(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
