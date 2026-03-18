/*
 * XREFs of KeSetSystemAffinityThreadEx @ 0x1401FF168
 * Callers:
 *     KeSetSystemAffinityThread @ 0x1401FF160 (KeSetSystemAffinityThread.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 */

KAFFINITY __stdcall KeSetSystemAffinityThreadEx(KAFFINITY Affinity)
{
  unsigned __int16 v1; // ax
  struct _GROUP_AFFINITY Affinitya; // [rsp+20h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  Affinitya.Mask = Affinity;
  *(_QWORD *)&Affinitya.Group = 0LL;
  if ( KeForceGroupAwareness )
    v1 = KiActiveGroups - 1;
  Affinitya.Group = v1;
  KeSetSystemGroupAffinityThread(&Affinitya, &PreviousAffinity);
  return PreviousAffinity.Mask;
}
