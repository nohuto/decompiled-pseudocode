/*
 * XREFs of SmcCacheDelete @ 0x140699F98
 * Callers:
 *     SmcProcessCreateRequest @ 0x140697548 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140697794 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14069B1D4 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     SmcCacheCleanup @ 0x140699F1C (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14069A258 (SmcCacheRemove.c)
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
