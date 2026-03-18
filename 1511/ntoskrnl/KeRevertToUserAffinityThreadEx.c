/*
 * XREFs of KeRevertToUserAffinityThreadEx @ 0x1401C3108
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
