/*
 * XREFs of KeRevertToUserAffinityThreadEx @ 0x1401D2E78
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400C9044 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void __stdcall KeRevertToUserAffinityThreadEx(KAFFINITY Affinity)
{
  unsigned __int16 v1; // ax
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  PreviousAffinity.Mask = Affinity;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( KeForceGroupAwareness )
    v1 = KiActiveGroups - 1;
  PreviousAffinity.Group = v1;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
