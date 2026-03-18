/*
 * XREFs of SmcCacheDelete @ 0x140658AC0
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140658400 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x140659DD4 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmcCacheCleanup @ 0x140658A44 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x140658D90 (SmcCacheRemove.c)
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
